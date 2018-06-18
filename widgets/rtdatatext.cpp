/*
    Copyright 2016 - 2017 Benjamin Vedder	benjamin@vedder.se
	Copyright 2017 Nico Ackermann	added another realtime data box for speed and distance absed on gearing , wheelsize and motor poles

    This file is part of VESC Tool.

    VESC Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VESC Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "rtdatatext.h"
#include <QFont>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>

RtDataText::RtDataText(QWidget *parent) : QWidget(parent)
{
    mBoxH = 10;
    mBoxW = 10;
    mTxtOfs = 2;

    mValues.amp_hours = 0;
    mValues.amp_hours_charged = 0;
    mValues.current_in = 0;
    mValues.current_motor = 0;
    mValues.duty_now = 0;
    mValues.fault_code = FAULT_CODE_NONE;
    mValues.fault_str = "None";
    mValues.id = 0;
    mValues.iq = 0;
    mValues.rpm = 0;
    mValues.tachometer = 0;
    mValues.tachometer_abs = 0;
    mValues.temp_mos = 0;
    mValues.temp_motor = 0;
    mValues.v_in = 0;
    mValues.watt_hours = 0;
    mValues.watt_hours_charged = 0;
}

void RtDataText::setValues(const MC_VALUES &values)
{
    mValues = values;
    mValues.fault_str.remove(0, 11);
    update();
}

QSize RtDataText::sizeHint() const
{
    QSize size;
    size.setWidth(mBoxW + 2 * mTxtOfs);
    size.setHeight(mBoxH + 2 * mTxtOfs);
    return size;
}

void RtDataText::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Paint begins here
    painter.fillRect(event->rect(), QBrush(Qt::transparent));

    QFont font;
    font.setFamily("Monospace");
    font.setStyleHint(QFont::TypeWriter);
    font.setPointSize(11);
    painter.setFont(font);

    QRectF br = painter.boundingRect(QRectF(0, 0, 4000, 4000),
                                    "Fault   : 00000000000000000"
                                    "T\n"
                                    "T\n"
                                    "T\n"
                                    "T\n");

    int boxh_new = br.height();
    int boxw_new = br.width();
    int txtofs_new = 5;

    if (mBoxH != boxh_new ||
            mBoxW != boxw_new ||
            mTxtOfs != txtofs_new) {
        mBoxH = boxh_new;
        mBoxW = boxw_new;
        mTxtOfs = txtofs_new;
        updateGeometry();
    }

    QString str;

    const double bbox_w = mBoxW + 2 * mTxtOfs;
    const double bbow_h = mBoxH + 2 * mTxtOfs;
    const double vidw = event->rect().width();

    // Left info box
    str.sprintf("Power   : %.1f W\n"
                "Duty    : %.2f %%\n"
                "ERPM    : %.1f\n"
                "I Batt  : %.2f A\n"
                "I Motor : %.2f A\n",
                mValues.v_in * mValues.current_in,
                mValues.duty_now * 100.0,
                mValues.rpm,
                mValues.current_in,
                mValues.current_motor);

    painter.setOpacity(0.7);
    painter.fillRect(0, 0, bbox_w, bbow_h, Qt::black);
    painter.setOpacity(1.0);

    painter.setPen(Qt::white);
    painter.drawText(QRectF(mTxtOfs, mTxtOfs, mBoxW, mBoxH),
                     Qt::AlignLeft, str);

    // Middle info box
    str.sprintf("T FET   : %.2f \u00B0C\n"
                "T Motor : %.2f \u00B0C\n"
                "Fault   : %s\n"
                "Tac     : %i\n"
                "Tac ABS : %i\n",
                mValues.temp_mos,
                mValues.temp_motor,
                mValues.fault_str.toLocal8Bit().data(),
                mValues.tachometer,
                mValues.tachometer_abs);

    painter.setOpacity(0.7);
    painter.fillRect(vidw / 3.0 - bbox_w / 3.0, 0, bbox_w, bbow_h, Qt::black);
    painter.setOpacity(1.0);

    painter.setPen(Qt::white);
    painter.drawText(QRectF(vidw / 3.0 - bbox_w / 3.0 + mTxtOfs, mTxtOfs, mBoxW, mBoxH),
                     Qt::AlignLeft, str);

    double magnets = mSettings.value("motor_poles", 14).toDouble();
    double wheelPulley = mSettings.value("wheel_pulley_teeth", 36).toDouble();
    double motorPulley = mSettings.value("motor_pulley_teeth", 15).toDouble();
    double wheelsizeInMM = mSettings.value("wheel_size_in_mm", 90).toDouble();

    // Middle info box
    str.sprintf("Speed km/h  : %.1f\n"
                "Speed mi/h  : %.1f\n"
                "Meter/s     : %.2f\n"
                "Distance km : %.3f\n"
                "Distance mi : %.3f\n",
                mValues.rpm / ((magnets / 2.0) * wheelPulley / motorPulley / (wheelsizeInMM * 3.14159265359 / 1000.0) * 60.0 / 3.6),
                mValues.rpm / ((magnets / 2.0) * (wheelPulley / motorPulley) / (wheelsizeInMM * 3.14159265359 / 1000.0) * 60.0 / 3.6) / 1.60934,
                mValues.rpm / ((magnets / 2.0) * (wheelPulley / motorPulley) / (wheelsizeInMM * 3.14159265359 / 1000.0) * 60.0),
                mValues.tachometer_abs * (((float) wheelsizeInMM / 1000.0) * 3.14159265359f / (wheelPulley / motorPulley) / magnets / 3.0) / 1000.0,
                mValues.tachometer_abs * (((float) wheelsizeInMM / 1000.0) * 3.14159265359f / (wheelPulley / motorPulley) / magnets / 3.0) / 1.60934 / 1000.0);

    painter.setOpacity(0.7);
    painter.fillRect(vidw / 3.0 * 2 - bbox_w / 3.0 * 2, 0, bbox_w, bbow_h, Qt::black);
    painter.setOpacity(1.0);

    painter.setPen(Qt::white);
    painter.drawText(QRectF(vidw / 3.0 * 2 - bbox_w / 3.0 * 2 + mTxtOfs, mTxtOfs, mBoxW, mBoxH),
                     Qt::AlignLeft, str);

    // Right info box
    str.sprintf("Ah Draw   : %.1f mAh\n"
                "Ah Charge : %.1f mAh\n"
                "Wh Draw   : %.2f Wh\n"
                "Wh Charge : %.2f Wh\n"
                "Volts In  : %.1f V",
                mValues.amp_hours * 1000.0,
                mValues.amp_hours_charged * 1000.0,
                mValues.watt_hours,
                mValues.watt_hours_charged,
                mValues.v_in);

    painter.setOpacity(0.7);
    painter.fillRect(vidw - bbox_w, 0, bbox_w,
                     mBoxH + 2 * mTxtOfs, Qt::black);
    painter.setOpacity(1.0);

    painter.setPen(Qt::white);
    painter.drawText(QRectF(vidw - bbox_w + mTxtOfs, mTxtOfs, mBoxW, mBoxH),
                     Qt::AlignLeft, str);
}
