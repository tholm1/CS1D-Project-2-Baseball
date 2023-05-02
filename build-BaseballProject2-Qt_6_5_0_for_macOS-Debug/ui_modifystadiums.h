/********************************************************************************
** Form generated from reading UI file 'modifystadiums.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
    QComboBox *parkTypologyAddBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *roofTypeAddLabel;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *roofTypeAddBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmAddBtn;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_4;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *stadiumDelComboBox;
    QPushButton *delBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *accumulatorLabel;
    QTableView *tableView;

    void setupUi(QDialog *ModifyStadiums)
    {
        if (ModifyStadiums->objectName().isEmpty())
            ModifyStadiums->setObjectName("ModifyStadiums");
        ModifyStadiums->resize(812, 643);
        verticalLayout_2 = new QVBoxLayout(ModifyStadiums);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backBtn = new QPushButton(ModifyStadiums);
        backBtn->setObjectName("backBtn");

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(ModifyStadiums);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        teamNameAddLabel = new QLabel(tab_3);
        teamNameAddLabel->setObjectName("teamNameAddLabel");

        horizontalLayout_5->addWidget(teamNameAddLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        teamNameAddLine = new QLineEdit(tab_3);
        teamNameAddLine->setObjectName("teamNameAddLine");

        horizontalLayout_5->addWidget(teamNameAddLine);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        stadiumNameAddLabel = new QLabel(tab_3);
        stadiumNameAddLabel->setObjectName("stadiumNameAddLabel");

        horizontalLayout_6->addWidget(stadiumNameAddLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        stadiumNameAddLine = new QLineEdit(tab_3);
        stadiumNameAddLine->setObjectName("stadiumNameAddLine");

        horizontalLayout_6->addWidget(stadiumNameAddLine);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        seatingCapacityAddLabel = new QLabel(tab_3);
        seatingCapacityAddLabel->setObjectName("seatingCapacityAddLabel");

        horizontalLayout_7->addWidget(seatingCapacityAddLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        seatingCapacityAddBox = new QSpinBox(tab_3);
        seatingCapacityAddBox->setObjectName("seatingCapacityAddBox");
        seatingCapacityAddBox->setMaximum(9999999);

        horizontalLayout_7->addWidget(seatingCapacityAddBox);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        locationAddLabel = new QLabel(tab_3);
        locationAddLabel->setObjectName("locationAddLabel");

        horizontalLayout_8->addWidget(locationAddLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        locationCityAddLine = new QLineEdit(tab_3);
        locationCityAddLine->setObjectName("locationCityAddLine");

        horizontalLayout_8->addWidget(locationCityAddLine);

        locationStateAddLine = new QLineEdit(tab_3);
        locationStateAddLine->setObjectName("locationStateAddLine");

        horizontalLayout_8->addWidget(locationStateAddLine);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);
        horizontalLayout_8->setStretch(3, 1);

        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        playingSurfaceAddLabel = new QLabel(tab_3);
        playingSurfaceAddLabel->setObjectName("playingSurfaceAddLabel");

        horizontalLayout_9->addWidget(playingSurfaceAddLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        playingSurfaceAddBox = new QComboBox(tab_3);
        playingSurfaceAddBox->setObjectName("playingSurfaceAddBox");

        horizontalLayout_9->addWidget(playingSurfaceAddBox);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        leagueAddLabel = new QLabel(tab_3);
        leagueAddLabel->setObjectName("leagueAddLabel");

        horizontalLayout_10->addWidget(leagueAddLabel);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);

        leagueAddBox = new QComboBox(tab_3);
        leagueAddBox->setObjectName("leagueAddBox");

        horizontalLayout_10->addWidget(leagueAddBox);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        dateOpenedAddLabel = new QLabel(tab_3);
        dateOpenedAddLabel->setObjectName("dateOpenedAddLabel");

        horizontalLayout_11->addWidget(dateOpenedAddLabel);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        dateOpenedAddBox = new QSpinBox(tab_3);
        dateOpenedAddBox->setObjectName("dateOpenedAddBox");
        dateOpenedAddBox->setMinimum(0);
        dateOpenedAddBox->setMaximum(9999);
        dateOpenedAddBox->setValue(1900);

        horizontalLayout_11->addWidget(dateOpenedAddBox);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        distanceToCenterFieldAddLabel = new QLabel(tab_3);
        distanceToCenterFieldAddLabel->setObjectName("distanceToCenterFieldAddLabel");

        horizontalLayout_12->addWidget(distanceToCenterFieldAddLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        distanceToCenterFieldAddBox = new QSpinBox(tab_3);
        distanceToCenterFieldAddBox->setObjectName("distanceToCenterFieldAddBox");
        distanceToCenterFieldAddBox->setMaximum(9999);

        horizontalLayout_12->addWidget(distanceToCenterFieldAddBox);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 1);
        horizontalLayout_12->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        parkTypologyAddLabel = new QLabel(tab_3);
        parkTypologyAddLabel->setObjectName("parkTypologyAddLabel");

        horizontalLayout_13->addWidget(parkTypologyAddLabel);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        parkTypologyAddBox = new QComboBox(tab_3);
        parkTypologyAddBox->setObjectName("parkTypologyAddBox");

        horizontalLayout_13->addWidget(parkTypologyAddBox);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        roofTypeAddLabel = new QLabel(tab_3);
        roofTypeAddLabel->setObjectName("roofTypeAddLabel");

        horizontalLayout_14->addWidget(roofTypeAddLabel);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);

        roofTypeAddBox = new QComboBox(tab_3);
        roofTypeAddBox->setObjectName("roofTypeAddBox");

        horizontalLayout_14->addWidget(roofTypeAddBox);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        confirmAddBtn = new QPushButton(tab_3);
        confirmAddBtn->setObjectName("confirmAddBtn");

        horizontalLayout_2->addWidget(confirmAddBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        stadiumDelComboBox = new QComboBox(tab_5);
        stadiumDelComboBox->setObjectName("stadiumDelComboBox");

        horizontalLayout_15->addWidget(stadiumDelComboBox);

        delBtn = new QPushButton(tab_5);
        delBtn->setObjectName("delBtn");

        horizontalLayout_15->addWidget(delBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget);

        accumulatorLabel = new QLabel(ModifyStadiums);
        accumulatorLabel->setObjectName("accumulatorLabel");
        accumulatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(accumulatorLabel);

        tableView = new QTableView(ModifyStadiums);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);


        retranslateUi(ModifyStadiums);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModifyStadiums);
    } // setupUi

    void retranslateUi(QDialog *ModifyStadiums)
    {
        ModifyStadiums->setWindowTitle(QCoreApplication::translate("ModifyStadiums", "Modify Stadiums", nullptr));
        backBtn->setText(QCoreApplication::translate("ModifyStadiums", "Back", nullptr));
        teamNameAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Team Name", nullptr));
        teamNameAddLine->setPlaceholderText(QCoreApplication::translate("ModifyStadiums", "Team name", nullptr));
        stadiumNameAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Stadium Name", nullptr));
        stadiumNameAddLine->setPlaceholderText(QCoreApplication::translate("ModifyStadiums", "Stadium name", nullptr));
        seatingCapacityAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Seating Capacity", nullptr));
        locationAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Location", nullptr));
        locationCityAddLine->setPlaceholderText(QCoreApplication::translate("ModifyStadiums", "City", nullptr));
        locationStateAddLine->setPlaceholderText(QCoreApplication::translate("ModifyStadiums", "State", nullptr));
        playingSurfaceAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Playing Surface", nullptr));
        leagueAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "League", nullptr));
        dateOpenedAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Date Opened", nullptr));
        distanceToCenterFieldAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Distance to Center Field", nullptr));
        parkTypologyAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Park Typology", nullptr));
        roofTypeAddLabel->setText(QCoreApplication::translate("ModifyStadiums", "Roof Type", nullptr));
        confirmAddBtn->setText(QCoreApplication::translate("ModifyStadiums", "Add Stadium", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ModifyStadiums", "Add Stadium", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("ModifyStadiums", "Modify Stadium", nullptr));
        delBtn->setText(QCoreApplication::translate("ModifyStadiums", "Delete Stadium", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("ModifyStadiums", "Delete Stadium", nullptr));
        accumulatorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModifyStadiums: public Ui_ModifyStadiums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTADIUMS_H
