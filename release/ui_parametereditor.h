/********************************************************************************
** Form generated from reading UI file 'parametereditor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETEREDITOR_H
#define UI_PARAMETEREDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/mrichtextedit.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_ParameterEditor
{
public:
    QAction *actionLoad_XML;
    QAction *actionSave_XML_as;
    QAction *actionDeleteAll;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *paramList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *paramRemoveButton;
    QPushButton *paramDownButton;
    QPushButton *paramUpButton;
    QPushButton *paramOpenButton;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_16;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *longNameEdit;
    QLineEdit *nameEdit;
    QComboBox *typeBox;
    QLabel *label_3;
    QLabel *label_13;
    QComboBox *transmittableBox;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_27;
    QDoubleSpinBox *doubleMaxBox;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleValBox;
    QComboBox *doubleTxTypeBox;
    QDoubleSpinBox *doubleMinBox;
    QLineEdit *doubleSuffixEdit;
    QDoubleSpinBox *doubleTxScaleBaseBox;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *doubleTxScaleLabel;
    QLabel *doubleTxScaleExpLabel;
    QDoubleSpinBox *doubleTxScaleExpBox;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_11;
    QDoubleSpinBox *doubleEditorScaleBox;
    QCheckBox *doubleEditPercentageBox;
    QDoubleSpinBox *doubleStep;
    QCheckBox *doubleShowDisplayBox;
    QSpinBox *doubleDecimalsBox;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_3;
    QLabel *label_21;
    QSpinBox *intValBox;
    QLabel *label_22;
    QSpinBox *intMaxBox;
    QLabel *label_19;
    QSpinBox *intMinBox;
    QLabel *label_20;
    QLabel *label_18;
    QCheckBox *intEditPercentageBox;
    QLabel *label_15;
    QLabel *label_17;
    QComboBox *intTxTypeBox;
    QLineEdit *intSuffixEdit;
    QSpinBox *intStepBox;
    QCheckBox *intShowDisplayBox;
    QDoubleSpinBox *intEditorScaleBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_23;
    QLineEdit *stringValEdit;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_13;
    QListWidget *enumList;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *enumRemoveButton;
    QPushButton *enumMoveDownButton;
    QPushButton *enumMoveUpButton;
    QPushButton *enumAddButton;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_24;
    QComboBox *boolBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    MRichTextEdit *descriptionEdit;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_25;
    QLineEdit *cDefineEdit;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_26;
    ParamTable *previewTable;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *paramResetButton;
    QPushButton *paramSaveButton;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *paramSerialOrderList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *serRemoveButton;
    QPushButton *serDownButton;
    QPushButton *serUpButton;
    QPushButton *serAddButton;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ParameterEditor)
    {
        if (ParameterEditor->objectName().isEmpty())
            ParameterEditor->setObjectName(QStringLiteral("ParameterEditor"));
        ParameterEditor->resize(1170, 618);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Horizontal Settings Mixer-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        ParameterEditor->setWindowIcon(icon);
        actionLoad_XML = new QAction(ParameterEditor);
        actionLoad_XML->setObjectName(QStringLiteral("actionLoad_XML"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_XML->setIcon(icon1);
        actionSave_XML_as = new QAction(ParameterEditor);
        actionSave_XML_as->setObjectName(QStringLiteral("actionSave_XML_as"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Save as-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_XML_as->setIcon(icon2);
        actionDeleteAll = new QAction(ParameterEditor);
        actionDeleteAll->setObjectName(QStringLiteral("actionDeleteAll"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteAll->setIcon(icon3);
        centralwidget = new QWidget(ParameterEditor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        paramList = new QListWidget(centralwidget);
        paramList->setObjectName(QStringLiteral("paramList"));
        paramList->setMinimumSize(QSize(280, 0));
        paramList->setMaximumSize(QSize(280, 16777215));

        verticalLayout_2->addWidget(paramList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        paramRemoveButton = new QPushButton(centralwidget);
        paramRemoveButton->setObjectName(QStringLiteral("paramRemoveButton"));
        paramRemoveButton->setIcon(icon3);

        horizontalLayout->addWidget(paramRemoveButton);

        paramDownButton = new QPushButton(centralwidget);
        paramDownButton->setObjectName(QStringLiteral("paramDownButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/Down-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        paramDownButton->setIcon(icon4);

        horizontalLayout->addWidget(paramDownButton);

        paramUpButton = new QPushButton(centralwidget);
        paramUpButton->setObjectName(QStringLiteral("paramUpButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/Up-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        paramUpButton->setIcon(icon5);

        horizontalLayout->addWidget(paramUpButton);

        paramOpenButton = new QPushButton(centralwidget);
        paramOpenButton->setObjectName(QStringLiteral("paramOpenButton"));
        paramOpenButton->setIcon(icon1);

        horizontalLayout->addWidget(paramOpenButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_16);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        longNameEdit = new QLineEdit(tab);
        longNameEdit->setObjectName(QStringLiteral("longNameEdit"));

        gridLayout->addWidget(longNameEdit, 1, 1, 1, 1);

        nameEdit = new QLineEdit(tab);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        typeBox = new QComboBox(tab);
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->setObjectName(QStringLiteral("typeBox"));

        gridLayout->addWidget(typeBox, 2, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        transmittableBox = new QComboBox(tab);
        transmittableBox->addItem(QString());
        transmittableBox->addItem(QString());
        transmittableBox->setObjectName(QStringLiteral("transmittableBox"));

        gridLayout->addWidget(transmittableBox, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::Box);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_27 = new QLabel(page);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_2->addWidget(label_27, 5, 0, 1, 1);

        doubleMaxBox = new QDoubleSpinBox(page);
        doubleMaxBox->setObjectName(QStringLiteral("doubleMaxBox"));
        doubleMaxBox->setDecimals(8);
        doubleMaxBox->setMinimum(-1e+11);
        doubleMaxBox->setMaximum(1e+11);
        doubleMaxBox->setValue(100);

        gridLayout_2->addWidget(doubleMaxBox, 1, 1, 1, 3);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        doubleValBox = new QDoubleSpinBox(page);
        doubleValBox->setObjectName(QStringLiteral("doubleValBox"));
        doubleValBox->setDecimals(8);
        doubleValBox->setMinimum(-1e+10);
        doubleValBox->setMaximum(1e+10);
        doubleValBox->setValue(0);

        gridLayout_2->addWidget(doubleValBox, 0, 1, 1, 3);

        doubleTxTypeBox = new QComboBox(page);
        doubleTxTypeBox->addItem(QString());
        doubleTxTypeBox->addItem(QString());
        doubleTxTypeBox->addItem(QString());
        doubleTxTypeBox->setObjectName(QStringLiteral("doubleTxTypeBox"));

        gridLayout_2->addWidget(doubleTxTypeBox, 7, 1, 1, 3);

        doubleMinBox = new QDoubleSpinBox(page);
        doubleMinBox->setObjectName(QStringLiteral("doubleMinBox"));
        doubleMinBox->setDecimals(8);
        doubleMinBox->setMinimum(-1e+11);
        doubleMinBox->setMaximum(1e+11);
        doubleMinBox->setValue(-100);

        gridLayout_2->addWidget(doubleMinBox, 2, 1, 1, 3);

        doubleSuffixEdit = new QLineEdit(page);
        doubleSuffixEdit->setObjectName(QStringLiteral("doubleSuffixEdit"));

        gridLayout_2->addWidget(doubleSuffixEdit, 6, 1, 1, 3);

        doubleTxScaleBaseBox = new QDoubleSpinBox(page);
        doubleTxScaleBaseBox->setObjectName(QStringLiteral("doubleTxScaleBaseBox"));
        doubleTxScaleBaseBox->setValue(1);

        gridLayout_2->addWidget(doubleTxScaleBaseBox, 8, 1, 1, 1);

        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 7, 0, 1, 1);

        doubleTxScaleLabel = new QLabel(page);
        doubleTxScaleLabel->setObjectName(QStringLiteral("doubleTxScaleLabel"));

        gridLayout_2->addWidget(doubleTxScaleLabel, 8, 0, 1, 1);

        doubleTxScaleExpLabel = new QLabel(page);
        doubleTxScaleExpLabel->setObjectName(QStringLiteral("doubleTxScaleExpLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doubleTxScaleExpLabel->sizePolicy().hasHeightForWidth());
        doubleTxScaleExpLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(doubleTxScaleExpLabel, 8, 2, 1, 1);

        doubleTxScaleExpBox = new QDoubleSpinBox(page);
        doubleTxScaleExpBox->setObjectName(QStringLiteral("doubleTxScaleExpBox"));
        doubleTxScaleExpBox->setDecimals(0);
        doubleTxScaleExpBox->setMinimum(-99);
        doubleTxScaleExpBox->setMaximum(99);

        gridLayout_2->addWidget(doubleTxScaleExpBox, 8, 3, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        doubleEditorScaleBox = new QDoubleSpinBox(page);
        doubleEditorScaleBox->setObjectName(QStringLiteral("doubleEditorScaleBox"));
        doubleEditorScaleBox->setDecimals(8);
        doubleEditorScaleBox->setMaximum(1e+8);
        doubleEditorScaleBox->setValue(1);

        gridLayout_2->addWidget(doubleEditorScaleBox, 4, 1, 1, 1);

        doubleEditPercentageBox = new QCheckBox(page);
        doubleEditPercentageBox->setObjectName(QStringLiteral("doubleEditPercentageBox"));

        gridLayout_2->addWidget(doubleEditPercentageBox, 4, 2, 1, 2);

        doubleStep = new QDoubleSpinBox(page);
        doubleStep->setObjectName(QStringLiteral("doubleStep"));
        doubleStep->setDecimals(8);
        doubleStep->setMaximum(1e+8);
        doubleStep->setValue(1);

        gridLayout_2->addWidget(doubleStep, 3, 1, 1, 1);

        doubleShowDisplayBox = new QCheckBox(page);
        doubleShowDisplayBox->setObjectName(QStringLiteral("doubleShowDisplayBox"));

        gridLayout_2->addWidget(doubleShowDisplayBox, 3, 2, 1, 2);

        doubleDecimalsBox = new QSpinBox(page);
        doubleDecimalsBox->setObjectName(QStringLiteral("doubleDecimalsBox"));
        doubleDecimalsBox->setMaximum(10);
        doubleDecimalsBox->setValue(2);

        gridLayout_2->addWidget(doubleDecimalsBox, 5, 1, 1, 3);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 149, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_10 = new QVBoxLayout(page_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 0, 0, 1, 1);

        intValBox = new QSpinBox(page_3);
        intValBox->setObjectName(QStringLiteral("intValBox"));
        intValBox->setMinimum(-100000000);
        intValBox->setMaximum(100000000);

        gridLayout_3->addWidget(intValBox, 0, 1, 1, 2);

        label_22 = new QLabel(page_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 1, 0, 1, 1);

        intMaxBox = new QSpinBox(page_3);
        intMaxBox->setObjectName(QStringLiteral("intMaxBox"));
        intMaxBox->setMinimum(-100000000);
        intMaxBox->setMaximum(100000000);
        intMaxBox->setValue(5000);

        gridLayout_3->addWidget(intMaxBox, 1, 1, 1, 2);

        label_19 = new QLabel(page_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        intMinBox = new QSpinBox(page_3);
        intMinBox->setObjectName(QStringLiteral("intMinBox"));
        intMinBox->setMinimum(-100000000);
        intMinBox->setMaximum(100000000);
        intMinBox->setValue(-5000);

        gridLayout_3->addWidget(intMinBox, 2, 1, 1, 2);

        label_20 = new QLabel(page_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 3, 0, 1, 1);

        label_18 = new QLabel(page_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 4, 0, 1, 1);

        intEditPercentageBox = new QCheckBox(page_3);
        intEditPercentageBox->setObjectName(QStringLiteral("intEditPercentageBox"));

        gridLayout_3->addWidget(intEditPercentageBox, 4, 2, 1, 1);

        label_15 = new QLabel(page_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 5, 0, 1, 1);

        label_17 = new QLabel(page_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 6, 0, 1, 1);

        intTxTypeBox = new QComboBox(page_3);
        intTxTypeBox->addItem(QString());
        intTxTypeBox->addItem(QString());
        intTxTypeBox->addItem(QString());
        intTxTypeBox->addItem(QString());
        intTxTypeBox->addItem(QString());
        intTxTypeBox->addItem(QString());
        intTxTypeBox->setObjectName(QStringLiteral("intTxTypeBox"));

        gridLayout_3->addWidget(intTxTypeBox, 6, 1, 1, 2);

        intSuffixEdit = new QLineEdit(page_3);
        intSuffixEdit->setObjectName(QStringLiteral("intSuffixEdit"));

        gridLayout_3->addWidget(intSuffixEdit, 5, 1, 1, 2);

        intStepBox = new QSpinBox(page_3);
        intStepBox->setObjectName(QStringLiteral("intStepBox"));
        intStepBox->setMinimum(-100000000);
        intStepBox->setMaximum(100000000);
        intStepBox->setValue(1);

        gridLayout_3->addWidget(intStepBox, 3, 1, 1, 1);

        intShowDisplayBox = new QCheckBox(page_3);
        intShowDisplayBox->setObjectName(QStringLiteral("intShowDisplayBox"));

        gridLayout_3->addWidget(intShowDisplayBox, 3, 2, 1, 1);

        intEditorScaleBox = new QDoubleSpinBox(page_3);
        intEditorScaleBox->setObjectName(QStringLiteral("intEditorScaleBox"));
        intEditorScaleBox->setDecimals(8);
        intEditorScaleBox->setMaximum(1e+8);
        intEditorScaleBox->setValue(1);

        gridLayout_3->addWidget(intEditorScaleBox, 4, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_12 = new QVBoxLayout(page_4);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_23 = new QLabel(page_4);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_4->addWidget(label_23);

        stringValEdit = new QLineEdit(page_4);
        stringValEdit->setObjectName(QStringLiteral("stringValEdit"));

        horizontalLayout_4->addWidget(stringValEdit);


        verticalLayout_12->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 394, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_13 = new QVBoxLayout(page_5);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        enumList = new QListWidget(page_5);
        enumList->setObjectName(QStringLiteral("enumList"));

        verticalLayout_13->addWidget(enumList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        enumRemoveButton = new QPushButton(page_5);
        enumRemoveButton->setObjectName(QStringLiteral("enumRemoveButton"));
        enumRemoveButton->setIcon(icon3);

        horizontalLayout_5->addWidget(enumRemoveButton);

        enumMoveDownButton = new QPushButton(page_5);
        enumMoveDownButton->setObjectName(QStringLiteral("enumMoveDownButton"));
        enumMoveDownButton->setIcon(icon4);

        horizontalLayout_5->addWidget(enumMoveDownButton);

        enumMoveUpButton = new QPushButton(page_5);
        enumMoveUpButton->setObjectName(QStringLiteral("enumMoveUpButton"));
        enumMoveUpButton->setIcon(icon5);

        horizontalLayout_5->addWidget(enumMoveUpButton);

        enumAddButton = new QPushButton(page_5);
        enumAddButton->setObjectName(QStringLiteral("enumAddButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/Plus Math-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        enumAddButton->setIcon(icon6);

        horizontalLayout_5->addWidget(enumAddButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_13->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_5 = new QVBoxLayout(page_6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_24 = new QLabel(page_6);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_7->addWidget(label_24);

        boolBox = new QComboBox(page_6);
        boolBox->addItem(QString());
        boolBox->addItem(QString());
        boolBox->setObjectName(QStringLiteral("boolBox"));

        horizontalLayout_7->addWidget(boolBox);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 288, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page_6);

        verticalLayout_6->addWidget(stackedWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        descriptionEdit = new MRichTextEdit(tab_2);
        descriptionEdit->setObjectName(QStringLiteral("descriptionEdit"));

        verticalLayout_3->addWidget(descriptionEdit);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_25 = new QLabel(tab_3);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_4->addWidget(label_25, 0, 0, 1, 1);

        cDefineEdit = new QLineEdit(tab_3);
        cDefineEdit->setObjectName(QStringLiteral("cDefineEdit"));

        gridLayout_4->addWidget(cDefineEdit, 0, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 415, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setAlignment(Qt::AlignCenter);
        label_26->setWordWrap(true);

        verticalLayout_9->addWidget(label_26);

        previewTable = new ParamTable(tab_4);
        previewTable->setObjectName(QStringLiteral("previewTable"));

        verticalLayout_9->addWidget(previewTable);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_7->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        paramResetButton = new QPushButton(centralwidget);
        paramResetButton->setObjectName(QStringLiteral("paramResetButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(paramResetButton->sizePolicy().hasHeightForWidth());
        paramResetButton->setSizePolicy(sizePolicy1);
        paramResetButton->setIcon(icon3);

        horizontalLayout_3->addWidget(paramResetButton);

        paramSaveButton = new QPushButton(centralwidget);
        paramSaveButton->setObjectName(QStringLiteral("paramSaveButton"));
        sizePolicy1.setHeightForWidth(paramSaveButton->sizePolicy().hasHeightForWidth());
        paramSaveButton->setSizePolicy(sizePolicy1);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/Save-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        paramSaveButton->setIcon(icon7);

        horizontalLayout_3->addWidget(paramSaveButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        paramSerialOrderList = new QListWidget(centralwidget);
        paramSerialOrderList->setObjectName(QStringLiteral("paramSerialOrderList"));
        paramSerialOrderList->setMinimumSize(QSize(280, 0));
        paramSerialOrderList->setMaximumSize(QSize(280, 16777215));

        verticalLayout->addWidget(paramSerialOrderList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        serRemoveButton = new QPushButton(centralwidget);
        serRemoveButton->setObjectName(QStringLiteral("serRemoveButton"));
        serRemoveButton->setIcon(icon3);

        horizontalLayout_2->addWidget(serRemoveButton);

        serDownButton = new QPushButton(centralwidget);
        serDownButton->setObjectName(QStringLiteral("serDownButton"));
        serDownButton->setIcon(icon4);

        horizontalLayout_2->addWidget(serDownButton);

        serUpButton = new QPushButton(centralwidget);
        serUpButton->setObjectName(QStringLiteral("serUpButton"));
        serUpButton->setIcon(icon5);

        horizontalLayout_2->addWidget(serUpButton);

        serAddButton = new QPushButton(centralwidget);
        serAddButton->setObjectName(QStringLiteral("serAddButton"));
        serAddButton->setIcon(icon6);

        horizontalLayout_2->addWidget(serAddButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalLayout_6->setStretch(1, 1);
        ParameterEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ParameterEditor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1170, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        ParameterEditor->setMenuBar(menubar);
        statusBar = new QStatusBar(ParameterEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ParameterEditor->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionLoad_XML);
        menuFile->addAction(actionSave_XML_as);
        menuEdit->addAction(actionDeleteAll);

        retranslateUi(ParameterEditor);
        QObject::connect(typeBox, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        doubleTxTypeBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParameterEditor);
    } // setupUi

    void retranslateUi(QMainWindow *ParameterEditor)
    {
        ParameterEditor->setWindowTitle(QApplication::translate("ParameterEditor", "ESC Parameter Editor", nullptr));
        actionLoad_XML->setText(QApplication::translate("ParameterEditor", "Load XML", nullptr));
        actionSave_XML_as->setText(QApplication::translate("ParameterEditor", "Save XML as...", nullptr));
        actionDeleteAll->setText(QApplication::translate("ParameterEditor", "Delete All Data", nullptr));
        label->setText(QApplication::translate("ParameterEditor", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Parameter</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        paramRemoveButton->setToolTip(QApplication::translate("ParameterEditor", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        paramRemoveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        paramDownButton->setToolTip(QApplication::translate("ParameterEditor", "Move down", nullptr));
#endif // QT_NO_TOOLTIP
        paramDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        paramUpButton->setToolTip(QApplication::translate("ParameterEditor", "Move up", nullptr));
#endif // QT_NO_TOOLTIP
        paramUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        paramOpenButton->setToolTip(QApplication::translate("ParameterEditor", "Open in editor", nullptr));
#endif // QT_NO_TOOLTIP
        paramOpenButton->setText(QString());
        label_16->setText(QApplication::translate("ParameterEditor", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Editor</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("ParameterEditor", "Type", nullptr));
        label_4->setText(QApplication::translate("ParameterEditor", "Long Name", nullptr));
        typeBox->setItemText(0, QApplication::translate("ParameterEditor", "Undefined", nullptr));
        typeBox->setItemText(1, QApplication::translate("ParameterEditor", "Double", nullptr));
        typeBox->setItemText(2, QApplication::translate("ParameterEditor", "Int", nullptr));
        typeBox->setItemText(3, QApplication::translate("ParameterEditor", "String", nullptr));
        typeBox->setItemText(4, QApplication::translate("ParameterEditor", "Enum", nullptr));
        typeBox->setItemText(5, QApplication::translate("ParameterEditor", "Bool", nullptr));

        label_3->setText(QApplication::translate("ParameterEditor", "Name", nullptr));
        label_13->setText(QApplication::translate("ParameterEditor", "Transmittable", nullptr));
        transmittableBox->setItemText(0, QApplication::translate("ParameterEditor", "True", nullptr));
        transmittableBox->setItemText(1, QApplication::translate("ParameterEditor", "False", nullptr));

        label_27->setText(QApplication::translate("ParameterEditor", "Editor Decimals", nullptr));
        label_6->setText(QApplication::translate("ParameterEditor", "Default Value", nullptr));
        label_7->setText(QApplication::translate("ParameterEditor", "Maximum Value", nullptr));
        doubleTxTypeBox->setItemText(0, QApplication::translate("ParameterEditor", "DOUBLE_16", nullptr));
        doubleTxTypeBox->setItemText(1, QApplication::translate("ParameterEditor", "DOUBLE_32", nullptr));
        doubleTxTypeBox->setItemText(2, QApplication::translate("ParameterEditor", "DOUBLE_32_AUTO", nullptr));

        label_10->setText(QApplication::translate("ParameterEditor", "Editor Scale", nullptr));
        label_12->setText(QApplication::translate("ParameterEditor", "TX Type", nullptr));
        doubleTxScaleLabel->setText(QApplication::translate("ParameterEditor", "TX  Scale", nullptr));
        doubleTxScaleExpLabel->setText(QApplication::translate("ParameterEditor", "x 10^", nullptr));
        label_9->setText(QApplication::translate("ParameterEditor", "Editor Step", nullptr));
        label_8->setText(QApplication::translate("ParameterEditor", "Minimum Value", nullptr));
        label_11->setText(QApplication::translate("ParameterEditor", "Suffix", nullptr));
        doubleEditPercentageBox->setText(QApplication::translate("ParameterEditor", "Edit as Percentage", nullptr));
        doubleShowDisplayBox->setText(QApplication::translate("ParameterEditor", "Show Display", nullptr));
        label_21->setText(QApplication::translate("ParameterEditor", "Default Value", nullptr));
        label_22->setText(QApplication::translate("ParameterEditor", "Max", nullptr));
        label_19->setText(QApplication::translate("ParameterEditor", "Min", nullptr));
        label_20->setText(QApplication::translate("ParameterEditor", "Editor Step", nullptr));
        label_18->setText(QApplication::translate("ParameterEditor", "Editor Scale", nullptr));
        intEditPercentageBox->setText(QApplication::translate("ParameterEditor", "Edit as Percentage", nullptr));
        label_15->setText(QApplication::translate("ParameterEditor", "Suffix", nullptr));
        label_17->setText(QApplication::translate("ParameterEditor", "TX Type", nullptr));
        intTxTypeBox->setItemText(0, QApplication::translate("ParameterEditor", "UINT_8", nullptr));
        intTxTypeBox->setItemText(1, QApplication::translate("ParameterEditor", "INT_8", nullptr));
        intTxTypeBox->setItemText(2, QApplication::translate("ParameterEditor", "UINT_16", nullptr));
        intTxTypeBox->setItemText(3, QApplication::translate("ParameterEditor", "INT_16", nullptr));
        intTxTypeBox->setItemText(4, QApplication::translate("ParameterEditor", "UINT_32", nullptr));
        intTxTypeBox->setItemText(5, QApplication::translate("ParameterEditor", "INT_32", nullptr));

        intShowDisplayBox->setText(QApplication::translate("ParameterEditor", "Show Display", nullptr));
        label_23->setText(QApplication::translate("ParameterEditor", "Default Value", nullptr));
#ifndef QT_NO_TOOLTIP
        enumRemoveButton->setToolTip(QApplication::translate("ParameterEditor", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        enumRemoveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        enumMoveDownButton->setToolTip(QApplication::translate("ParameterEditor", "Move down", nullptr));
#endif // QT_NO_TOOLTIP
        enumMoveDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        enumMoveUpButton->setToolTip(QApplication::translate("ParameterEditor", "Move up", nullptr));
#endif // QT_NO_TOOLTIP
        enumMoveUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        enumAddButton->setToolTip(QApplication::translate("ParameterEditor", "Add new", nullptr));
#endif // QT_NO_TOOLTIP
        enumAddButton->setText(QString());
        label_24->setText(QApplication::translate("ParameterEditor", "Default Value", nullptr));
        boolBox->setItemText(0, QApplication::translate("ParameterEditor", "False", nullptr));
        boolBox->setItemText(1, QApplication::translate("ParameterEditor", "True", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ParameterEditor", "Parameter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ParameterEditor", "Description", nullptr));
        label_25->setText(QApplication::translate("ParameterEditor", "C Define", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ParameterEditor", "Misc", nullptr));
        label_26->setText(QApplication::translate("ParameterEditor", "<html><head/><body><p>This is what the editor of this parameter is going to look like. This preview is updated when a parameter is opened for editing, and when changes are saved.</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ParameterEditor", "Preview", nullptr));
#ifndef QT_NO_TOOLTIP
        paramResetButton->setToolTip(QApplication::translate("ParameterEditor", "Reset editor", nullptr));
#endif // QT_NO_TOOLTIP
        paramResetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        paramSaveButton->setToolTip(QApplication::translate("ParameterEditor", "<html><head/><body><p>Save changes (or make new parameter if this name does not exist)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        paramSaveButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        paramSaveButton->setShortcut(QApplication::translate("ParameterEditor", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("ParameterEditor", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Serialization Order</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        serRemoveButton->setToolTip(QApplication::translate("ParameterEditor", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        serRemoveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        serDownButton->setToolTip(QApplication::translate("ParameterEditor", "Move down", nullptr));
#endif // QT_NO_TOOLTIP
        serDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        serUpButton->setToolTip(QApplication::translate("ParameterEditor", "Move up", nullptr));
#endif // QT_NO_TOOLTIP
        serUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        serAddButton->setToolTip(QApplication::translate("ParameterEditor", "Add new", nullptr));
#endif // QT_NO_TOOLTIP
        serAddButton->setText(QString());
        menuFile->setTitle(QApplication::translate("ParameterEditor", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("ParameterEditor", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParameterEditor: public Ui_ParameterEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETEREDITOR_H
