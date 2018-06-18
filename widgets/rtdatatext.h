/*
    Copyright 2016 - 2017 Benjamin Vedder	benjamin@vedder.se
	Copyright 2017 Nico Ackermann	added QSettings

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

#ifndef RTDATATEXT_H
#define RTDATATEXT_H

#include <QWidget>
#include "datatypes.h"
#include <QSettings>

class RtDataText : public QWidget
{
    Q_OBJECT
public:
    explicit RtDataText(QWidget *parent = 0);
    void setValues(const MC_VALUES &values);

    QSize sizeHint() const;

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    QSettings mSettings;
    MC_VALUES mValues;
    int mBoxH;
    int mBoxW;
    int mTxtOfs;

};

#endif // RTDATATEXT_H
