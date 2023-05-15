/********************************************************************************
** Form generated from reading UI file 'tripplanner.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
    QWidget *CustomOrderTrip_3;
    QLabel *WelcomeLabel_3;
    QPushButton *PushButton_BackToMain_4;
    QPushButton *PushButton_BeginCustomTrip;
    QPushButton *PushButton_BeginCustomTrip_Clear;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *TeamListComboBox;
    QPushButton *PushButton_AddTeam;
    QListView *listView;
    QWidget *SouvenirPage;
    QLabel *WelcomeLabel_4;
    QPushButton *PushButton_SouvenirFinishTrip;
    QWidget *SummaryPage;
    QLabel *Label_TripSummary;
    QPushButton *PushButton_BackToMain_5;
    QLabel *Label_FinalTotalDistance;
    QPushButton *PushButton_BackToMain_6;

    void setupUi(QDialog *TripPlanner)
    {
        if (TripPlanner->objectName().isEmpty())
            TripPlanner->setObjectName("TripPlanner");
        TripPlanner->resize(988, 567);
        TripPlannerStackedWidget = new QStackedWidget(TripPlanner);
        TripPlannerStackedWidget->setObjectName("TripPlannerStackedWidget");
        TripPlannerStackedWidget->setGeometry(QRect(0, 0, 991, 631));
        TripPlannerStackedWidget->setStyleSheet(QString::fromUtf8(""));
        MainMenu = new QWidget();
        MainMenu->setObjectName("MainMenu");
        verticalLayoutWidget_2 = new QWidget(MainMenu);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 70, 961, 481));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        WelcomeLabel = new QLabel(verticalLayoutWidget_2);
        WelcomeLabel->setObjectName("WelcomeLabel");
        QFont font;
        font.setPointSize(14);
        WelcomeLabel->setFont(font);
        WelcomeLabel->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(WelcomeLabel);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        PushButton_CustomMostEfficientTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_CustomMostEfficientTrip->setObjectName("PushButton_CustomMostEfficientTrip");
        PushButton_CustomMostEfficientTrip->setMinimumSize(QSize(161, 41));
        QFont font1;
        font1.setPointSize(12);
        PushButton_CustomMostEfficientTrip->setFont(font1);
        PushButton_CustomMostEfficientTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_CustomMostEfficientTrip);

        PushButton_CustomTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_CustomTrip->setObjectName("PushButton_CustomTrip");
        PushButton_CustomTrip->setMinimumSize(QSize(161, 41));
        PushButton_CustomTrip->setFont(font1);
        PushButton_CustomTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_CustomTrip);

        PushButton_MostEfficientTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_MostEfficientTrip->setObjectName("PushButton_MostEfficientTrip");
        PushButton_MostEfficientTrip->setMinimumSize(QSize(211, 41));
        PushButton_MostEfficientTrip->setFont(font1);
        PushButton_MostEfficientTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_MostEfficientTrip);


        verticalLayout_10->addLayout(verticalLayout_11);

        PushButton_BackToMain = new QPushButton(MainMenu);
        PushButton_BackToMain->setObjectName("PushButton_BackToMain");
        PushButton_BackToMain->setGeometry(QRect(10, 10, 101, 21));
        PushButton_BackToMain->setFont(font);
        PushButton_BackToMain->setStyleSheet(QString::fromUtf8(""));
        TripPlannerStackedWidget->addWidget(MainMenu);
        DijkstrasSelectionScreen = new QWidget();
        DijkstrasSelectionScreen->setObjectName("DijkstrasSelectionScreen");
        layoutWidget_8 = new QWidget(DijkstrasSelectionScreen);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(10, 220, 951, 271));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        Label_OriginStadium = new QLabel(layoutWidget_8);
        Label_OriginStadium->setObjectName("Label_OriginStadium");
        Label_OriginStadium->setFont(font1);
        Label_OriginStadium->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(Label_OriginStadium);

        teams_combo = new QComboBox(layoutWidget_8);
        teams_combo->setObjectName("teams_combo");
        teams_combo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout_12->addWidget(teams_combo);

        Label_DestinationStadium = new QLabel(layoutWidget_8);
        Label_DestinationStadium->setObjectName("Label_DestinationStadium");
        Label_DestinationStadium->setFont(font1);
        Label_DestinationStadium->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(Label_DestinationStadium);

        teams_combo_2 = new QComboBox(layoutWidget_8);
        teams_combo_2->setObjectName("teams_combo_2");
        teams_combo_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout_12->addWidget(teams_combo_2);

        PushButton_BeginTrip = new QPushButton(layoutWidget_8);
        PushButton_BeginTrip->setObjectName("PushButton_BeginTrip");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PushButton_BeginTrip->sizePolicy().hasHeightForWidth());
        PushButton_BeginTrip->setSizePolicy(sizePolicy);
        PushButton_BeginTrip->setFont(font1);
        PushButton_BeginTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(PushButton_BeginTrip);

        PushButton_BackToMain_2 = new QPushButton(DijkstrasSelectionScreen);
        PushButton_BackToMain_2->setObjectName("PushButton_BackToMain_2");
        PushButton_BackToMain_2->setGeometry(QRect(730, 560, 231, 51));
        PushButton_BackToMain_2->setFont(font1);
        PushButton_BackToMain_2->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_2 = new QLabel(DijkstrasSelectionScreen);
        WelcomeLabel_2->setObjectName("WelcomeLabel_2");
        WelcomeLabel_2->setGeometry(QRect(90, 70, 791, 81));
        WelcomeLabel_2->setFont(font);
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_2->setFrameShape(QFrame::Box);
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);
        TripPlannerStackedWidget->addWidget(DijkstrasSelectionScreen);
        CustomOrderTrip_3 = new QWidget();
        CustomOrderTrip_3->setObjectName("CustomOrderTrip_3");
        WelcomeLabel_3 = new QLabel(CustomOrderTrip_3);
        WelcomeLabel_3->setObjectName("WelcomeLabel_3");
        WelcomeLabel_3->setGeometry(QRect(10, 10, 921, 51));
        QFont font2;
        font2.setPointSize(9);
        WelcomeLabel_3->setFont(font2);
        WelcomeLabel_3->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_3->setFrameShape(QFrame::Box);
        PushButton_BackToMain_4 = new QPushButton(CustomOrderTrip_3);
        PushButton_BackToMain_4->setObjectName("PushButton_BackToMain_4");
        PushButton_BackToMain_4->setGeometry(QRect(720, 561, 241, 51));
        PushButton_BackToMain_4->setFont(font);
        PushButton_BackToMain_4->setStyleSheet(QString::fromUtf8(""));
        PushButton_BeginCustomTrip = new QPushButton(CustomOrderTrip_3);
        PushButton_BeginCustomTrip->setObjectName("PushButton_BeginCustomTrip");
        PushButton_BeginCustomTrip->setGeometry(QRect(680, 150, 289, 41));
        PushButton_BeginCustomTrip->setMinimumSize(QSize(121, 41));
        QFont font3;
        font3.setPointSize(11);
        PushButton_BeginCustomTrip->setFont(font3);
        PushButton_BeginCustomTrip->setStyleSheet(QString::fromUtf8(""));
        PushButton_BeginCustomTrip_Clear = new QPushButton(CustomOrderTrip_3);
        PushButton_BeginCustomTrip_Clear->setObjectName("PushButton_BeginCustomTrip_Clear");
        PushButton_BeginCustomTrip_Clear->setGeometry(QRect(680, 210, 289, 41));
        PushButton_BeginCustomTrip_Clear->setMinimumSize(QSize(121, 41));
        PushButton_BeginCustomTrip_Clear->setFont(font3);
        PushButton_BeginCustomTrip_Clear->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(CustomOrderTrip_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 621, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        TeamListComboBox = new QComboBox(layoutWidget);
        TeamListComboBox->setObjectName("TeamListComboBox");
        TeamListComboBox->setFont(font3);
        TeamListComboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(TeamListComboBox);

        PushButton_AddTeam = new QPushButton(layoutWidget);
        PushButton_AddTeam->setObjectName("PushButton_AddTeam");
        PushButton_AddTeam->setFont(font3);
        PushButton_AddTeam->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(PushButton_AddTeam);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListView(layoutWidget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);

        TripPlannerStackedWidget->addWidget(CustomOrderTrip_3);
        SouvenirPage = new QWidget();
        SouvenirPage->setObjectName("SouvenirPage");
        WelcomeLabel_4 = new QLabel(SouvenirPage);
        WelcomeLabel_4->setObjectName("WelcomeLabel_4");
        WelcomeLabel_4->setGeometry(QRect(10, 10, 921, 51));
        WelcomeLabel_4->setFont(font2);
        WelcomeLabel_4->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_4->setFrameShape(QFrame::Box);
        PushButton_SouvenirFinishTrip = new QPushButton(SouvenirPage);
        PushButton_SouvenirFinishTrip->setObjectName("PushButton_SouvenirFinishTrip");
        PushButton_SouvenirFinishTrip->setGeometry(QRect(690, 130, 289, 41));
        PushButton_SouvenirFinishTrip->setMinimumSize(QSize(121, 41));
        PushButton_SouvenirFinishTrip->setFont(font3);
        PushButton_SouvenirFinishTrip->setStyleSheet(QString::fromUtf8(""));
        TripPlannerStackedWidget->addWidget(SouvenirPage);
        SummaryPage = new QWidget();
        SummaryPage->setObjectName("SummaryPage");
        Label_TripSummary = new QLabel(SummaryPage);
        Label_TripSummary->setObjectName("Label_TripSummary");
        Label_TripSummary->setGeometry(QRect(290, 0, 641, 51));
        QFont font4;
        font4.setPointSize(18);
        Label_TripSummary->setFont(font4);
        Label_TripSummary->setStyleSheet(QString::fromUtf8(""));
        Label_TripSummary->setFrameShape(QFrame::NoFrame);
        Label_TripSummary->setAlignment(Qt::AlignCenter);
        PushButton_BackToMain_5 = new QPushButton(SummaryPage);
        PushButton_BackToMain_5->setObjectName("PushButton_BackToMain_5");
        PushButton_BackToMain_5->setGeometry(QRect(720, 580, 241, 41));
        PushButton_BackToMain_5->setFont(font);
        PushButton_BackToMain_5->setStyleSheet(QString::fromUtf8(""));
        Label_FinalTotalDistance = new QLabel(SummaryPage);
        Label_FinalTotalDistance->setObjectName("Label_FinalTotalDistance");
        Label_FinalTotalDistance->setGeometry(QRect(80, 60, 811, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font5.setPointSize(7);
        font5.setBold(false);
        font5.setItalic(false);
        Label_FinalTotalDistance->setFont(font5);
        Label_FinalTotalDistance->setStyleSheet(QString::fromUtf8("font: 7pt \"MS Shell Dlg 2\";\n"
"color:rgb(0, 0, 0)"));
        Label_FinalTotalDistance->setFrameShape(QFrame::NoFrame);
        Label_FinalTotalDistance->setAlignment(Qt::AlignCenter);
        PushButton_BackToMain_6 = new QPushButton(SummaryPage);
        PushButton_BackToMain_6->setObjectName("PushButton_BackToMain_6");
        PushButton_BackToMain_6->setGeometry(QRect(10, 10, 101, 21));
        PushButton_BackToMain_6->setFont(font);
        PushButton_BackToMain_6->setStyleSheet(QString::fromUtf8(""));
        TripPlannerStackedWidget->addWidget(SummaryPage);

        retranslateUi(TripPlanner);

        TripPlannerStackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(TripPlanner);
    } // setupUi

    void retranslateUi(QDialog *TripPlanner)
    {
        TripPlanner->setWindowTitle(QCoreApplication::translate("TripPlanner", "Dialog", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("TripPlanner", "Plan a Vacation", nullptr));
        PushButton_CustomMostEfficientTrip->setText(QCoreApplication::translate("TripPlanner", "Custom Trip Shortest Distance", nullptr));
        PushButton_CustomTrip->setText(QCoreApplication::translate("TripPlanner", "Marlin Park traversal", nullptr));
        PushButton_MostEfficientTrip->setText(QCoreApplication::translate("TripPlanner", "Shortest path from A to B", nullptr));
        PushButton_BackToMain->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        Label_OriginStadium->setText(QCoreApplication::translate("TripPlanner", "Select your Starting Stadium:", nullptr));
        Label_DestinationStadium->setText(QCoreApplication::translate("TripPlanner", "Select your Destination Stadium:", nullptr));
        PushButton_BeginTrip->setText(QCoreApplication::translate("TripPlanner", "Begin Trip", nullptr));
        PushButton_BackToMain_2->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        WelcomeLabel_2->setText(QCoreApplication::translate("TripPlanner", "Start Planing Your Trip!", nullptr));
        WelcomeLabel_3->setText(QCoreApplication::translate("TripPlanner", "Add the teams you wish to visit to the list then press \"Begin Trip\" to start the trip.", nullptr));
        PushButton_BackToMain_4->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        PushButton_BeginCustomTrip->setText(QCoreApplication::translate("TripPlanner", "Begin Trip", nullptr));
        PushButton_BeginCustomTrip_Clear->setText(QCoreApplication::translate("TripPlanner", "Clear list to restart", nullptr));
        PushButton_AddTeam->setText(QCoreApplication::translate("TripPlanner", "Add Team", nullptr));
        WelcomeLabel_4->setText(QCoreApplication::translate("TripPlanner", "What souvenirs would you like to buy?", nullptr));
        PushButton_SouvenirFinishTrip->setText(QCoreApplication::translate("TripPlanner", "Finish Trip", nullptr));
        Label_TripSummary->setText(QCoreApplication::translate("TripPlanner", "Trip Summary", nullptr));
        PushButton_BackToMain_5->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        Label_FinalTotalDistance->setText(QCoreApplication::translate("TripPlanner", "Total Distance Traveled", nullptr));
        PushButton_BackToMain_6->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripPlanner: public Ui_TripPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPPLANNER_H
