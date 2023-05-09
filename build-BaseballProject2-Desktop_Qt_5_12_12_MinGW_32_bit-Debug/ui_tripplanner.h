/********************************************************************************
** Form generated from reading UI file 'tripplanner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPPLANNER_H
#define UI_TRIPPLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripPlanner
{
public:
    QStackedWidget *TripPlannerStackedWidget;
    QWidget *MainMenu;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *WelcomeLabel;
    QVBoxLayout *verticalLayout_11;
    QPushButton *PushButton_CustomMostEfficientTrip;
    QPushButton *PushButton_CustomTrip;
    QPushButton *PushButton_MostEfficientTrip;
    QPushButton *PushButton_BackToMain;
    QWidget *DijkstrasSelectionScreen;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_12;
    QLabel *Label_OriginStadium;
    QComboBox *teams_combo;
    QLabel *Label_DestinationStadium;
    QComboBox *teams_combo_2;
    QPushButton *PushButton_BeginTrip;
    QPushButton *PushButton_BackToMain_2;
    QLabel *WelcomeLabel_2;
    QWidget *TripScreen;
    QLabel *Label_TotalDistanceTraveled;
    QLabel *destinationTeamLabel;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_13;
    QPushButton *PushButton_TakeTrip;
    QPushButton *PushButton_BackToMain_3;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *Label_Souvenirs;
    QListView *SouvenirsListView;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_15;
    QLabel *Label_ShoppingCart;
    QListView *ShoppingCartListView;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_16;
    QLabel *Label_CurrentTeam;
    QLabel *Label_CurrentStadium;
    QWidget *CustomOrderTrip_3;
    QLabel *WelcomeLabel_3;
    QPushButton *PushButton_BackToMain_4;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *TeamListComboBox;
    QPushButton *PushButton_AddTeam;
    QListView *OrderableListView;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_18;
    QPushButton *PushButton_BeginCustomTrip;
    QPushButton *PushButton_VisitAllTeamsMostEfficiently;
    QWidget *SummaryPage;
    QListView *SummaryListView;
    QLabel *Label_TripSummary;
    QPushButton *PushButton_BackToMain_5;
    QLabel *Label_FinalTotalDistance;

    void setupUi(QDialog *TripPlanner)
    {
        if (TripPlanner->objectName().isEmpty())
            TripPlanner->setObjectName(QString::fromUtf8("TripPlanner"));
        TripPlanner->resize(988, 567);
        TripPlannerStackedWidget = new QStackedWidget(TripPlanner);
        TripPlannerStackedWidget->setObjectName(QString::fromUtf8("TripPlannerStackedWidget"));
        TripPlannerStackedWidget->setGeometry(QRect(0, 0, 991, 631));
        TripPlannerStackedWidget->setStyleSheet(QString::fromUtf8(""));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        verticalLayoutWidget_2 = new QWidget(MainMenu);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 70, 961, 481));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        WelcomeLabel = new QLabel(verticalLayoutWidget_2);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        QFont font;
        font.setPointSize(14);
        WelcomeLabel->setFont(font);
        WelcomeLabel->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(WelcomeLabel);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        PushButton_CustomMostEfficientTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_CustomMostEfficientTrip->setObjectName(QString::fromUtf8("PushButton_CustomMostEfficientTrip"));
        PushButton_CustomMostEfficientTrip->setMinimumSize(QSize(161, 41));
        QFont font1;
        font1.setPointSize(12);
        PushButton_CustomMostEfficientTrip->setFont(font1);
        PushButton_CustomMostEfficientTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_CustomMostEfficientTrip);

        PushButton_CustomTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_CustomTrip->setObjectName(QString::fromUtf8("PushButton_CustomTrip"));
        PushButton_CustomTrip->setMinimumSize(QSize(161, 41));
        PushButton_CustomTrip->setFont(font1);
        PushButton_CustomTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_CustomTrip);

        PushButton_MostEfficientTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_MostEfficientTrip->setObjectName(QString::fromUtf8("PushButton_MostEfficientTrip"));
        PushButton_MostEfficientTrip->setMinimumSize(QSize(211, 41));
        PushButton_MostEfficientTrip->setFont(font1);
        PushButton_MostEfficientTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_MostEfficientTrip);


        verticalLayout_10->addLayout(verticalLayout_11);

        PushButton_BackToMain = new QPushButton(MainMenu);
        PushButton_BackToMain->setObjectName(QString::fromUtf8("PushButton_BackToMain"));
        PushButton_BackToMain->setGeometry(QRect(10, 10, 101, 21));
        PushButton_BackToMain->setFont(font);
        PushButton_BackToMain->setStyleSheet(QString::fromUtf8(""));
        TripPlannerStackedWidget->addWidget(MainMenu);
        DijkstrasSelectionScreen = new QWidget();
        DijkstrasSelectionScreen->setObjectName(QString::fromUtf8("DijkstrasSelectionScreen"));
        layoutWidget_8 = new QWidget(DijkstrasSelectionScreen);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 220, 951, 271));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        Label_OriginStadium = new QLabel(layoutWidget_8);
        Label_OriginStadium->setObjectName(QString::fromUtf8("Label_OriginStadium"));
        Label_OriginStadium->setFont(font1);
        Label_OriginStadium->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(Label_OriginStadium);

        teams_combo = new QComboBox(layoutWidget_8);
        teams_combo->setObjectName(QString::fromUtf8("teams_combo"));
        teams_combo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout_12->addWidget(teams_combo);

        Label_DestinationStadium = new QLabel(layoutWidget_8);
        Label_DestinationStadium->setObjectName(QString::fromUtf8("Label_DestinationStadium"));
        Label_DestinationStadium->setFont(font1);
        Label_DestinationStadium->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(Label_DestinationStadium);

        teams_combo_2 = new QComboBox(layoutWidget_8);
        teams_combo_2->setObjectName(QString::fromUtf8("teams_combo_2"));
        teams_combo_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout_12->addWidget(teams_combo_2);

        PushButton_BeginTrip = new QPushButton(layoutWidget_8);
        PushButton_BeginTrip->setObjectName(QString::fromUtf8("PushButton_BeginTrip"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PushButton_BeginTrip->sizePolicy().hasHeightForWidth());
        PushButton_BeginTrip->setSizePolicy(sizePolicy);
        PushButton_BeginTrip->setFont(font1);
        PushButton_BeginTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(PushButton_BeginTrip);

        PushButton_BackToMain_2 = new QPushButton(DijkstrasSelectionScreen);
        PushButton_BackToMain_2->setObjectName(QString::fromUtf8("PushButton_BackToMain_2"));
        PushButton_BackToMain_2->setGeometry(QRect(730, 560, 231, 51));
        PushButton_BackToMain_2->setFont(font1);
        PushButton_BackToMain_2->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_2 = new QLabel(DijkstrasSelectionScreen);
        WelcomeLabel_2->setObjectName(QString::fromUtf8("WelcomeLabel_2"));
        WelcomeLabel_2->setGeometry(QRect(90, 70, 791, 81));
        WelcomeLabel_2->setFont(font);
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_2->setFrameShape(QFrame::Box);
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);
        TripPlannerStackedWidget->addWidget(DijkstrasSelectionScreen);
        TripScreen = new QWidget();
        TripScreen->setObjectName(QString::fromUtf8("TripScreen"));
        Label_TotalDistanceTraveled = new QLabel(TripScreen);
        Label_TotalDistanceTraveled->setObjectName(QString::fromUtf8("Label_TotalDistanceTraveled"));
        Label_TotalDistanceTraveled->setGeometry(QRect(80, 120, 781, 51));
        QFont font2;
        font2.setPointSize(11);
        Label_TotalDistanceTraveled->setFont(font2);
        Label_TotalDistanceTraveled->setStyleSheet(QString::fromUtf8(""));
        Label_TotalDistanceTraveled->setAlignment(Qt::AlignCenter);
        destinationTeamLabel = new QLabel(TripScreen);
        destinationTeamLabel->setObjectName(QString::fromUtf8("destinationTeamLabel"));
        destinationTeamLabel->setGeometry(QRect(30, 50, 791, 16));
        layoutWidget_9 = new QWidget(TripScreen);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(380, 177, 211, 121));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        PushButton_TakeTrip = new QPushButton(layoutWidget_9);
        PushButton_TakeTrip->setObjectName(QString::fromUtf8("PushButton_TakeTrip"));
        PushButton_TakeTrip->setMinimumSize(QSize(121, 41));
        PushButton_TakeTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_13->addWidget(PushButton_TakeTrip);

        PushButton_BackToMain_3 = new QPushButton(layoutWidget_9);
        PushButton_BackToMain_3->setObjectName(QString::fromUtf8("PushButton_BackToMain_3"));
        PushButton_BackToMain_3->setMinimumSize(QSize(101, 41));
        PushButton_BackToMain_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_13->addWidget(PushButton_BackToMain_3);

        layoutWidget_10 = new QWidget(TripScreen);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(0, 180, 371, 431));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        Label_Souvenirs = new QLabel(layoutWidget_10);
        Label_Souvenirs->setObjectName(QString::fromUtf8("Label_Souvenirs"));
        sizePolicy.setHeightForWidth(Label_Souvenirs->sizePolicy().hasHeightForWidth());
        Label_Souvenirs->setSizePolicy(sizePolicy);
        Label_Souvenirs->setMinimumSize(QSize(111, 20));
        QFont font3;
        font3.setPointSize(10);
        Label_Souvenirs->setFont(font3);
        Label_Souvenirs->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_14->addWidget(Label_Souvenirs);

        SouvenirsListView = new QListView(layoutWidget_10);
        SouvenirsListView->setObjectName(QString::fromUtf8("SouvenirsListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SouvenirsListView->sizePolicy().hasHeightForWidth());
        SouvenirsListView->setSizePolicy(sizePolicy1);
        SouvenirsListView->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_14->addWidget(SouvenirsListView);

        layoutWidget_11 = new QWidget(TripScreen);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(597, 180, 371, 431));
        verticalLayout_15 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        Label_ShoppingCart = new QLabel(layoutWidget_11);
        Label_ShoppingCart->setObjectName(QString::fromUtf8("Label_ShoppingCart"));
        sizePolicy.setHeightForWidth(Label_ShoppingCart->sizePolicy().hasHeightForWidth());
        Label_ShoppingCart->setSizePolicy(sizePolicy);
        Label_ShoppingCart->setFont(font3);
        Label_ShoppingCart->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_15->addWidget(Label_ShoppingCart);

        ShoppingCartListView = new QListView(layoutWidget_11);
        ShoppingCartListView->setObjectName(QString::fromUtf8("ShoppingCartListView"));
        ShoppingCartListView->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_15->addWidget(ShoppingCartListView);

        layoutWidget_12 = new QWidget(TripScreen);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(81, 1, 781, 111));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        Label_CurrentTeam = new QLabel(layoutWidget_12);
        Label_CurrentTeam->setObjectName(QString::fromUtf8("Label_CurrentTeam"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        Label_CurrentTeam->setFont(font4);
        Label_CurrentTeam->setStyleSheet(QString::fromUtf8(""));
        Label_CurrentTeam->setFrameShape(QFrame::NoFrame);
        Label_CurrentTeam->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(Label_CurrentTeam);

        Label_CurrentStadium = new QLabel(layoutWidget_12);
        Label_CurrentStadium->setObjectName(QString::fromUtf8("Label_CurrentStadium"));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        Label_CurrentStadium->setFont(font5);
        Label_CurrentStadium->setStyleSheet(QString::fromUtf8(""));
        Label_CurrentStadium->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(Label_CurrentStadium);

        TripPlannerStackedWidget->addWidget(TripScreen);
        CustomOrderTrip_3 = new QWidget();
        CustomOrderTrip_3->setObjectName(QString::fromUtf8("CustomOrderTrip_3"));
        WelcomeLabel_3 = new QLabel(CustomOrderTrip_3);
        WelcomeLabel_3->setObjectName(QString::fromUtf8("WelcomeLabel_3"));
        WelcomeLabel_3->setGeometry(QRect(10, 10, 921, 51));
        QFont font6;
        font6.setPointSize(9);
        WelcomeLabel_3->setFont(font6);
        WelcomeLabel_3->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_3->setFrameShape(QFrame::Box);
        PushButton_BackToMain_4 = new QPushButton(CustomOrderTrip_3);
        PushButton_BackToMain_4->setObjectName(QString::fromUtf8("PushButton_BackToMain_4"));
        PushButton_BackToMain_4->setGeometry(QRect(720, 561, 241, 51));
        PushButton_BackToMain_4->setFont(font);
        PushButton_BackToMain_4->setStyleSheet(QString::fromUtf8(""));
        layoutWidget_13 = new QWidget(CustomOrderTrip_3);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(10, 70, 661, 541));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        TeamListComboBox = new QComboBox(layoutWidget_13);
        TeamListComboBox->setObjectName(QString::fromUtf8("TeamListComboBox"));
        TeamListComboBox->setFont(font2);
        TeamListComboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(TeamListComboBox);

        PushButton_AddTeam = new QPushButton(layoutWidget_13);
        PushButton_AddTeam->setObjectName(QString::fromUtf8("PushButton_AddTeam"));
        PushButton_AddTeam->setFont(font2);
        PushButton_AddTeam->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(PushButton_AddTeam);


        verticalLayout_17->addLayout(horizontalLayout_2);

        OrderableListView = new QListView(layoutWidget_13);
        OrderableListView->setObjectName(QString::fromUtf8("OrderableListView"));
        OrderableListView->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_17->addWidget(OrderableListView);

        layoutWidget_14 = new QWidget(CustomOrderTrip_3);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(680, 120, 291, 131));
        verticalLayout_18 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        PushButton_BeginCustomTrip = new QPushButton(layoutWidget_14);
        PushButton_BeginCustomTrip->setObjectName(QString::fromUtf8("PushButton_BeginCustomTrip"));
        PushButton_BeginCustomTrip->setMinimumSize(QSize(121, 41));
        PushButton_BeginCustomTrip->setFont(font2);
        PushButton_BeginCustomTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_18->addWidget(PushButton_BeginCustomTrip);

        PushButton_VisitAllTeamsMostEfficiently = new QPushButton(layoutWidget_14);
        PushButton_VisitAllTeamsMostEfficiently->setObjectName(QString::fromUtf8("PushButton_VisitAllTeamsMostEfficiently"));
        PushButton_VisitAllTeamsMostEfficiently->setMinimumSize(QSize(131, 41));
        PushButton_VisitAllTeamsMostEfficiently->setFont(font2);
        PushButton_VisitAllTeamsMostEfficiently->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_18->addWidget(PushButton_VisitAllTeamsMostEfficiently);

        TripPlannerStackedWidget->addWidget(CustomOrderTrip_3);
        SummaryPage = new QWidget();
        SummaryPage->setObjectName(QString::fromUtf8("SummaryPage"));
        SummaryListView = new QListView(SummaryPage);
        SummaryListView->setObjectName(QString::fromUtf8("SummaryListView"));
        SummaryListView->setGeometry(QRect(10, 110, 951, 461));
        SummaryListView->setStyleSheet(QString::fromUtf8(""));
        Label_TripSummary = new QLabel(SummaryPage);
        Label_TripSummary->setObjectName(QString::fromUtf8("Label_TripSummary"));
        Label_TripSummary->setGeometry(QRect(40, 0, 891, 51));
        QFont font7;
        font7.setPointSize(18);
        Label_TripSummary->setFont(font7);
        Label_TripSummary->setStyleSheet(QString::fromUtf8(""));
        Label_TripSummary->setFrameShape(QFrame::NoFrame);
        Label_TripSummary->setAlignment(Qt::AlignCenter);
        PushButton_BackToMain_5 = new QPushButton(SummaryPage);
        PushButton_BackToMain_5->setObjectName(QString::fromUtf8("PushButton_BackToMain_5"));
        PushButton_BackToMain_5->setGeometry(QRect(720, 580, 241, 41));
        PushButton_BackToMain_5->setFont(font);
        PushButton_BackToMain_5->setStyleSheet(QString::fromUtf8(""));
        Label_FinalTotalDistance = new QLabel(SummaryPage);
        Label_FinalTotalDistance->setObjectName(QString::fromUtf8("Label_FinalTotalDistance"));
        Label_FinalTotalDistance->setGeometry(QRect(80, 60, 811, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font8.setPointSize(7);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        Label_FinalTotalDistance->setFont(font8);
        Label_FinalTotalDistance->setStyleSheet(QString::fromUtf8("font: 7pt \"MS Shell Dlg 2\";\n"
"color:rgb(0, 0, 0)"));
        Label_FinalTotalDistance->setFrameShape(QFrame::NoFrame);
        Label_FinalTotalDistance->setAlignment(Qt::AlignCenter);
        TripPlannerStackedWidget->addWidget(SummaryPage);

        retranslateUi(TripPlanner);

        TripPlannerStackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(TripPlanner);
    } // setupUi

    void retranslateUi(QDialog *TripPlanner)
    {
        TripPlanner->setWindowTitle(QApplication::translate("TripPlanner", "Dialog", nullptr));
        WelcomeLabel->setText(QApplication::translate("TripPlanner", "Plan a Vacation", nullptr));
        PushButton_CustomMostEfficientTrip->setText(QApplication::translate("TripPlanner", "Most Efficient Trip From Origin", nullptr));
        PushButton_CustomTrip->setText(QApplication::translate("TripPlanner", "Most Efficient Ordered Trip", nullptr));
        PushButton_MostEfficientTrip->setText(QApplication::translate("TripPlanner", "Shortest path from A to B", nullptr));
        PushButton_BackToMain->setText(QApplication::translate("TripPlanner", "Back", nullptr));
        Label_OriginStadium->setText(QApplication::translate("TripPlanner", "Select your Starting Stadium:", nullptr));
        Label_DestinationStadium->setText(QApplication::translate("TripPlanner", "Select your Destination Stadium:", nullptr));
        PushButton_BeginTrip->setText(QApplication::translate("TripPlanner", "Begin Trip", nullptr));
        PushButton_BackToMain_2->setText(QApplication::translate("TripPlanner", "Back", nullptr));
        WelcomeLabel_2->setText(QApplication::translate("TripPlanner", "Start Planing Your Trip!", nullptr));
        Label_TotalDistanceTraveled->setText(QApplication::translate("TripPlanner", "Distance Traveled:", nullptr));
        destinationTeamLabel->setText(QString());
        PushButton_TakeTrip->setText(QApplication::translate("TripPlanner", "Next Team", nullptr));
        PushButton_BackToMain_3->setText(QApplication::translate("TripPlanner", "Cancel", nullptr));
        Label_Souvenirs->setText(QApplication::translate("TripPlanner", "Souvenirs:", nullptr));
        Label_ShoppingCart->setText(QApplication::translate("TripPlanner", "Shopping cart", nullptr));
        Label_CurrentTeam->setText(QApplication::translate("TripPlanner", "Currently Visiting Team:", nullptr));
        Label_CurrentStadium->setText(QApplication::translate("TripPlanner", "Stadium Name:", nullptr));
        WelcomeLabel_3->setText(QApplication::translate("TripPlanner", "Add the teams you wish to visit to the list then press \"Begin Trip\" to start the trip.", nullptr));
        PushButton_BackToMain_4->setText(QApplication::translate("TripPlanner", "Back", nullptr));
        PushButton_AddTeam->setText(QApplication::translate("TripPlanner", "Add Team", nullptr));
        PushButton_BeginCustomTrip->setText(QApplication::translate("TripPlanner", "Begin Trip", nullptr));
        PushButton_VisitAllTeamsMostEfficiently->setText(QApplication::translate("TripPlanner", "Add All Teams to List", nullptr));
        Label_TripSummary->setText(QApplication::translate("TripPlanner", "Trip Summary", nullptr));
        PushButton_BackToMain_5->setText(QApplication::translate("TripPlanner", "Back", nullptr));
        Label_FinalTotalDistance->setText(QApplication::translate("TripPlanner", "Total Distance Traveled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripPlanner: public Ui_TripPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPPLANNER_H
