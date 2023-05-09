/********************************************************************************
** Form generated from reading UI file 'modifystadiums.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTADIUMS_H
#define UI_MODIFYSTADIUMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStadiums
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *teamNameAddLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *teamNameAddLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *stadiumNameAddLabel;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *stadiumNameAddLine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *seatingCapacityAddLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *seatingCapacityAddBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *locationAddLabel;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *locationCityAddLine;
    QLineEdit *locationStateAddLine;
    QHBoxLayout *horizontalLayout_9;
    QLabel *playingSurfaceAddLabel;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *playingSurfaceAddBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *leagueAddLabel;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *leagueAddBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *dateOpenedAddLabel;
    QSpacerItem *horizontalSpacer_12;
    QSpinBox *dateOpenedAddBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *distanceToCenterFieldAddLabel;
    QSpacerItem *horizontalSpacer_13;
    QSpinBox *distanceToCenterFieldAddBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *parkTypologyAddLabel;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *ballparkTypologyAddBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *roofTypeAddLabel;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *roofTypeAddBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmAddBtn;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *errorLayer;
    QSpacerItem *horizontalSpacer_16;
    QLabel *errorLabel;
    QSpacerItem *horizontalSpacer_17;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *teamNameUpdateLabel;
    QSpacerItem *horizontalSpacer_18;
    QComboBox *teamNameUpdateBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *stadiumNameUpdateLabel;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *stadiumNameUpdateLine;
    QHBoxLayout *horizontalLayout_18;
    QLabel *seatingCapacityUpdateLabel;
    QSpacerItem *horizontalSpacer_20;
    QSpinBox *seatingCapacityUpdateBox;
    QHBoxLayout *horizontalLayout_19;
    QLabel *locationUpdateLabel;
    QSpacerItem *horizontalSpacer_21;
    QLineEdit *locationCityUpdateLine;
    QLineEdit *locationStateUpdateLine;
    QHBoxLayout *horizontalLayout_20;
    QLabel *playingSurfaceUpdateLabel;
    QSpacerItem *horizontalSpacer_22;
    QComboBox *playingSurfaceUpdateBox;
    QHBoxLayout *horizontalLayout_21;
    QLabel *leagueUpdateLabel;
    QSpacerItem *horizontalSpacer_23;
    QComboBox *leagueUpdateBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *dateOpenedUpdateLabel;
    QSpacerItem *horizontalSpacer_24;
    QSpinBox *dateOpenedUpdateBox;
    QHBoxLayout *horizontalLayout_23;
    QLabel *distanceToCenterFieldUpdateLabel;
    QSpacerItem *horizontalSpacer_25;
    QSpinBox *distanceToCenterFieldUpdateBox;
    QHBoxLayout *horizontalLayout_24;
    QLabel *parkTypologyUpdateLabel;
    QSpacerItem *horizontalSpacer_26;
    QComboBox *ballparkTypologyUpdateBox;
    QHBoxLayout *horizontalLayout_25;
    QLabel *roofTypeUpdateLabel;
    QSpacerItem *horizontalSpacer_27;
    QComboBox *roofTypeUpdateBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *confirmUpdateBtn;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *errorLayer_2;
    QSpacerItem *horizontalSpacer_30;
    QLabel *errorLabel_2;
    QSpacerItem *horizontalSpacer_31;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *stadiumDelComboBox;
    QPushButton *delBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableView;

    void setupUi(QDialog *ModifyStadiums)
    {
        if (ModifyStadiums->objectName().isEmpty())
            ModifyStadiums->setObjectName(QString::fromUtf8("ModifyStadiums"));
        ModifyStadiums->resize(812, 648);
        verticalLayout_2 = new QVBoxLayout(ModifyStadiums);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backBtn = new QPushButton(ModifyStadiums);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(ModifyStadiums);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        teamNameAddLabel = new QLabel(tab_3);
        teamNameAddLabel->setObjectName(QString::fromUtf8("teamNameAddLabel"));

        horizontalLayout_5->addWidget(teamNameAddLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        teamNameAddLine = new QLineEdit(tab_3);
        teamNameAddLine->setObjectName(QString::fromUtf8("teamNameAddLine"));

        horizontalLayout_5->addWidget(teamNameAddLine);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        stadiumNameAddLabel = new QLabel(tab_3);
        stadiumNameAddLabel->setObjectName(QString::fromUtf8("stadiumNameAddLabel"));

        horizontalLayout_6->addWidget(stadiumNameAddLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        stadiumNameAddLine = new QLineEdit(tab_3);
        stadiumNameAddLine->setObjectName(QString::fromUtf8("stadiumNameAddLine"));

        horizontalLayout_6->addWidget(stadiumNameAddLine);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        seatingCapacityAddLabel = new QLabel(tab_3);
        seatingCapacityAddLabel->setObjectName(QString::fromUtf8("seatingCapacityAddLabel"));

        horizontalLayout_7->addWidget(seatingCapacityAddLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        seatingCapacityAddBox = new QSpinBox(tab_3);
        seatingCapacityAddBox->setObjectName(QString::fromUtf8("seatingCapacityAddBox"));
        seatingCapacityAddBox->setMaximum(9999999);

        horizontalLayout_7->addWidget(seatingCapacityAddBox);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        locationAddLabel = new QLabel(tab_3);
        locationAddLabel->setObjectName(QString::fromUtf8("locationAddLabel"));

        horizontalLayout_8->addWidget(locationAddLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        locationCityAddLine = new QLineEdit(tab_3);
        locationCityAddLine->setObjectName(QString::fromUtf8("locationCityAddLine"));

        horizontalLayout_8->addWidget(locationCityAddLine);

        locationStateAddLine = new QLineEdit(tab_3);
        locationStateAddLine->setObjectName(QString::fromUtf8("locationStateAddLine"));

        horizontalLayout_8->addWidget(locationStateAddLine);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);
        horizontalLayout_8->setStretch(3, 1);

        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        playingSurfaceAddLabel = new QLabel(tab_3);
        playingSurfaceAddLabel->setObjectName(QString::fromUtf8("playingSurfaceAddLabel"));

        horizontalLayout_9->addWidget(playingSurfaceAddLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        playingSurfaceAddBox = new QComboBox(tab_3);
        playingSurfaceAddBox->setObjectName(QString::fromUtf8("playingSurfaceAddBox"));

        horizontalLayout_9->addWidget(playingSurfaceAddBox);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        leagueAddLabel = new QLabel(tab_3);
        leagueAddLabel->setObjectName(QString::fromUtf8("leagueAddLabel"));

        horizontalLayout_10->addWidget(leagueAddLabel);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);

        leagueAddBox = new QComboBox(tab_3);
        leagueAddBox->setObjectName(QString::fromUtf8("leagueAddBox"));

        horizontalLayout_10->addWidget(leagueAddBox);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        dateOpenedAddLabel = new QLabel(tab_3);
        dateOpenedAddLabel->setObjectName(QString::fromUtf8("dateOpenedAddLabel"));

        horizontalLayout_11->addWidget(dateOpenedAddLabel);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        dateOpenedAddBox = new QSpinBox(tab_3);
        dateOpenedAddBox->setObjectName(QString::fromUtf8("dateOpenedAddBox"));
        dateOpenedAddBox->setMinimum(0);
        dateOpenedAddBox->setMaximum(9999);
        dateOpenedAddBox->setValue(1900);

        horizontalLayout_11->addWidget(dateOpenedAddBox);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        distanceToCenterFieldAddLabel = new QLabel(tab_3);
        distanceToCenterFieldAddLabel->setObjectName(QString::fromUtf8("distanceToCenterFieldAddLabel"));

        horizontalLayout_12->addWidget(distanceToCenterFieldAddLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        distanceToCenterFieldAddBox = new QSpinBox(tab_3);
        distanceToCenterFieldAddBox->setObjectName(QString::fromUtf8("distanceToCenterFieldAddBox"));
        distanceToCenterFieldAddBox->setMaximum(9999);

        horizontalLayout_12->addWidget(distanceToCenterFieldAddBox);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 1);
        horizontalLayout_12->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        parkTypologyAddLabel = new QLabel(tab_3);
        parkTypologyAddLabel->setObjectName(QString::fromUtf8("parkTypologyAddLabel"));

        horizontalLayout_13->addWidget(parkTypologyAddLabel);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        ballparkTypologyAddBox = new QComboBox(tab_3);
        ballparkTypologyAddBox->setObjectName(QString::fromUtf8("ballparkTypologyAddBox"));

        horizontalLayout_13->addWidget(ballparkTypologyAddBox);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        roofTypeAddLabel = new QLabel(tab_3);
        roofTypeAddLabel->setObjectName(QString::fromUtf8("roofTypeAddLabel"));

        horizontalLayout_14->addWidget(roofTypeAddLabel);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);

        roofTypeAddBox = new QComboBox(tab_3);
        roofTypeAddBox->setObjectName(QString::fromUtf8("roofTypeAddBox"));

        horizontalLayout_14->addWidget(roofTypeAddBox);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        confirmAddBtn = new QPushButton(tab_3);
        confirmAddBtn->setObjectName(QString::fromUtf8("confirmAddBtn"));

        horizontalLayout_2->addWidget(confirmAddBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        errorLayer = new QHBoxLayout();
        errorLayer->setObjectName(QString::fromUtf8("errorLayer"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        errorLayer->addItem(horizontalSpacer_16);

        errorLabel = new QLabel(tab_3);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setStyleSheet(QString::fromUtf8("color: #df4f4a;"));

        errorLayer->addWidget(errorLabel);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        errorLayer->addItem(horizontalSpacer_17);


        verticalLayout_5->addLayout(errorLayer);


        verticalLayout->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        teamNameUpdateLabel = new QLabel(tab_4);
        teamNameUpdateLabel->setObjectName(QString::fromUtf8("teamNameUpdateLabel"));

        horizontalLayout_16->addWidget(teamNameUpdateLabel);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_18);

        teamNameUpdateBox = new QComboBox(tab_4);
        teamNameUpdateBox->setObjectName(QString::fromUtf8("teamNameUpdateBox"));

        horizontalLayout_16->addWidget(teamNameUpdateBox);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 1);
        horizontalLayout_16->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        stadiumNameUpdateLabel = new QLabel(tab_4);
        stadiumNameUpdateLabel->setObjectName(QString::fromUtf8("stadiumNameUpdateLabel"));

        horizontalLayout_17->addWidget(stadiumNameUpdateLabel);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_19);

        stadiumNameUpdateLine = new QLineEdit(tab_4);
        stadiumNameUpdateLine->setObjectName(QString::fromUtf8("stadiumNameUpdateLine"));

        horizontalLayout_17->addWidget(stadiumNameUpdateLine);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 1);
        horizontalLayout_17->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        seatingCapacityUpdateLabel = new QLabel(tab_4);
        seatingCapacityUpdateLabel->setObjectName(QString::fromUtf8("seatingCapacityUpdateLabel"));

        horizontalLayout_18->addWidget(seatingCapacityUpdateLabel);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_20);

        seatingCapacityUpdateBox = new QSpinBox(tab_4);
        seatingCapacityUpdateBox->setObjectName(QString::fromUtf8("seatingCapacityUpdateBox"));
        seatingCapacityUpdateBox->setMaximum(9999999);

        horizontalLayout_18->addWidget(seatingCapacityUpdateBox);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 1);
        horizontalLayout_18->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        locationUpdateLabel = new QLabel(tab_4);
        locationUpdateLabel->setObjectName(QString::fromUtf8("locationUpdateLabel"));

        horizontalLayout_19->addWidget(locationUpdateLabel);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_21);

        locationCityUpdateLine = new QLineEdit(tab_4);
        locationCityUpdateLine->setObjectName(QString::fromUtf8("locationCityUpdateLine"));

        horizontalLayout_19->addWidget(locationCityUpdateLine);

        locationStateUpdateLine = new QLineEdit(tab_4);
        locationStateUpdateLine->setObjectName(QString::fromUtf8("locationStateUpdateLine"));

        horizontalLayout_19->addWidget(locationStateUpdateLine);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 1);
        horizontalLayout_19->setStretch(2, 1);
        horizontalLayout_19->setStretch(3, 1);

        verticalLayout_6->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        playingSurfaceUpdateLabel = new QLabel(tab_4);
        playingSurfaceUpdateLabel->setObjectName(QString::fromUtf8("playingSurfaceUpdateLabel"));

        horizontalLayout_20->addWidget(playingSurfaceUpdateLabel);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_22);

        playingSurfaceUpdateBox = new QComboBox(tab_4);
        playingSurfaceUpdateBox->setObjectName(QString::fromUtf8("playingSurfaceUpdateBox"));

        horizontalLayout_20->addWidget(playingSurfaceUpdateBox);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 1);
        horizontalLayout_20->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        leagueUpdateLabel = new QLabel(tab_4);
        leagueUpdateLabel->setObjectName(QString::fromUtf8("leagueUpdateLabel"));

        horizontalLayout_21->addWidget(leagueUpdateLabel);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_23);

        leagueUpdateBox = new QComboBox(tab_4);
        leagueUpdateBox->setObjectName(QString::fromUtf8("leagueUpdateBox"));

        horizontalLayout_21->addWidget(leagueUpdateBox);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 1);
        horizontalLayout_21->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        dateOpenedUpdateLabel = new QLabel(tab_4);
        dateOpenedUpdateLabel->setObjectName(QString::fromUtf8("dateOpenedUpdateLabel"));

        horizontalLayout_22->addWidget(dateOpenedUpdateLabel);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_24);

        dateOpenedUpdateBox = new QSpinBox(tab_4);
        dateOpenedUpdateBox->setObjectName(QString::fromUtf8("dateOpenedUpdateBox"));
        dateOpenedUpdateBox->setMinimum(0);
        dateOpenedUpdateBox->setMaximum(9999);
        dateOpenedUpdateBox->setValue(1900);

        horizontalLayout_22->addWidget(dateOpenedUpdateBox);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 1);
        horizontalLayout_22->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        distanceToCenterFieldUpdateLabel = new QLabel(tab_4);
        distanceToCenterFieldUpdateLabel->setObjectName(QString::fromUtf8("distanceToCenterFieldUpdateLabel"));

        horizontalLayout_23->addWidget(distanceToCenterFieldUpdateLabel);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_25);

        distanceToCenterFieldUpdateBox = new QSpinBox(tab_4);
        distanceToCenterFieldUpdateBox->setObjectName(QString::fromUtf8("distanceToCenterFieldUpdateBox"));
        distanceToCenterFieldUpdateBox->setMaximum(9999);

        horizontalLayout_23->addWidget(distanceToCenterFieldUpdateBox);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 1);
        horizontalLayout_23->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        parkTypologyUpdateLabel = new QLabel(tab_4);
        parkTypologyUpdateLabel->setObjectName(QString::fromUtf8("parkTypologyUpdateLabel"));

        horizontalLayout_24->addWidget(parkTypologyUpdateLabel);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_26);

        ballparkTypologyUpdateBox = new QComboBox(tab_4);
        ballparkTypologyUpdateBox->setObjectName(QString::fromUtf8("ballparkTypologyUpdateBox"));

        horizontalLayout_24->addWidget(ballparkTypologyUpdateBox);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 1);
        horizontalLayout_24->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        roofTypeUpdateLabel = new QLabel(tab_4);
        roofTypeUpdateLabel->setObjectName(QString::fromUtf8("roofTypeUpdateLabel"));

        horizontalLayout_25->addWidget(roofTypeUpdateLabel);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_27);

        roofTypeUpdateBox = new QComboBox(tab_4);
        roofTypeUpdateBox->setObjectName(QString::fromUtf8("roofTypeUpdateBox"));

        horizontalLayout_25->addWidget(roofTypeUpdateBox);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 1);
        horizontalLayout_25->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_25);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_28);

        confirmUpdateBtn = new QPushButton(tab_4);
        confirmUpdateBtn->setObjectName(QString::fromUtf8("confirmUpdateBtn"));

        horizontalLayout_3->addWidget(confirmUpdateBtn);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_29);


        verticalLayout_6->addLayout(horizontalLayout_3);

        errorLayer_2 = new QHBoxLayout();
        errorLayer_2->setObjectName(QString::fromUtf8("errorLayer_2"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        errorLayer_2->addItem(horizontalSpacer_30);

        errorLabel_2 = new QLabel(tab_4);
        errorLabel_2->setObjectName(QString::fromUtf8("errorLabel_2"));
        errorLabel_2->setStyleSheet(QString::fromUtf8("color: #df4f4a;"));

        errorLayer_2->addWidget(errorLabel_2);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        errorLayer_2->addItem(horizontalSpacer_31);


        verticalLayout_6->addLayout(errorLayer_2);


        verticalLayout_3->addLayout(verticalLayout_6);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        stadiumDelComboBox = new QComboBox(tab_5);
        stadiumDelComboBox->setObjectName(QString::fromUtf8("stadiumDelComboBox"));

        horizontalLayout_15->addWidget(stadiumDelComboBox);

        delBtn = new QPushButton(tab_5);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));

        horizontalLayout_15->addWidget(delBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget);

        tableView = new QTableView(ModifyStadiums);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(ModifyStadiums);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ModifyStadiums);
    } // setupUi

    void retranslateUi(QDialog *ModifyStadiums)
    {
        ModifyStadiums->setWindowTitle(QApplication::translate("ModifyStadiums", "Modify Stadiums", nullptr));
        backBtn->setText(QApplication::translate("ModifyStadiums", "Back", nullptr));
        teamNameAddLabel->setText(QApplication::translate("ModifyStadiums", "Team Name", nullptr));
        teamNameAddLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "Team name", nullptr));
        stadiumNameAddLabel->setText(QApplication::translate("ModifyStadiums", "Stadium Name", nullptr));
        stadiumNameAddLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "Stadium name", nullptr));
        seatingCapacityAddLabel->setText(QApplication::translate("ModifyStadiums", "Seating Capacity", nullptr));
        locationAddLabel->setText(QApplication::translate("ModifyStadiums", "Location", nullptr));
        locationCityAddLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "City", nullptr));
        locationStateAddLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "State", nullptr));
        playingSurfaceAddLabel->setText(QApplication::translate("ModifyStadiums", "Playing Surface", nullptr));
        leagueAddLabel->setText(QApplication::translate("ModifyStadiums", "League", nullptr));
        dateOpenedAddLabel->setText(QApplication::translate("ModifyStadiums", "Date Opened", nullptr));
        distanceToCenterFieldAddLabel->setText(QApplication::translate("ModifyStadiums", "Distance to Center Field", nullptr));
        parkTypologyAddLabel->setText(QApplication::translate("ModifyStadiums", "Ballpark Typology", nullptr));
        roofTypeAddLabel->setText(QApplication::translate("ModifyStadiums", "Roof Type", nullptr));
        confirmAddBtn->setText(QApplication::translate("ModifyStadiums", "Add Stadium", nullptr));
        errorLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ModifyStadiums", "Add Stadium", nullptr));
        teamNameUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Team Name", nullptr));
        stadiumNameUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Stadium Name", nullptr));
        stadiumNameUpdateLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "Stadium name", nullptr));
        seatingCapacityUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Seating Capacity", nullptr));
        locationUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Location", nullptr));
        locationCityUpdateLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "City", nullptr));
        locationStateUpdateLine->setPlaceholderText(QApplication::translate("ModifyStadiums", "State", nullptr));
        playingSurfaceUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Playing Surface", nullptr));
        leagueUpdateLabel->setText(QApplication::translate("ModifyStadiums", "League", nullptr));
        dateOpenedUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Date Opened", nullptr));
        distanceToCenterFieldUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Distance to Center Field", nullptr));
        parkTypologyUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Ballpark Typology", nullptr));
        roofTypeUpdateLabel->setText(QApplication::translate("ModifyStadiums", "Roof Type", nullptr));
        confirmUpdateBtn->setText(QApplication::translate("ModifyStadiums", "Update Stadium", nullptr));
        errorLabel_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ModifyStadiums", "Modify Stadium", nullptr));
        delBtn->setText(QApplication::translate("ModifyStadiums", "Delete Stadium", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ModifyStadiums", "Delete Stadium", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyStadiums: public Ui_ModifyStadiums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTADIUMS_H
