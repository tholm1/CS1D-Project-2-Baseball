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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
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
    QPushButton *PushButton_CustomTrip;
    QPushButton *PushButton_MarlinParkTrip;
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
    QWidget *CustomTrip;
    QLabel *WelcomeLabel_3;
    QPushButton *PushButton_BackToMain_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *TeamListComboBox;
    QPushButton *PushButton_AddTeam;
    QListView *listView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PushButton_BeginCustomTrip;
    QPushButton *PushButton_BeginCustomTrip_2;
    QPushButton *PushButton_BeginCustomTrip_Clear;
    QWidget *SouvenirPage;
    QLabel *WelcomeLabel_4;
    QPushButton *PushButton_SouvenirFinishTrip;
    QTableView *souv_tableView;
    QTableView *souvCart_tableView;
    QLabel *label;
    QLabel *label_2;
    QComboBox *team_comboBox;
    QLabel *label_3;
    QLabel *grandTotal;
    QPushButton *addSouvenirButton;
    QComboBox *souv_comboBox;
    QSpinBox *spinBox;
    QWidget *SummaryPage;
    QLabel *Label_TripSummary;
    QLabel *Label_FinalTotalDistance;
    QPushButton *PushButton_BackToMain_6;

    void setupUi(QDialog *TripPlanner)
    {
        if (TripPlanner->objectName().isEmpty())
            TripPlanner->setObjectName("TripPlanner");
        TripPlanner->resize(998, 609);
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
        PushButton_CustomTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_CustomTrip->setObjectName("PushButton_CustomTrip");
        PushButton_CustomTrip->setMinimumSize(QSize(161, 41));
        QFont font1;
        font1.setPointSize(12);
        PushButton_CustomTrip->setFont(font1);
        PushButton_CustomTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_CustomTrip);

        PushButton_MarlinParkTrip = new QPushButton(verticalLayoutWidget_2);
        PushButton_MarlinParkTrip->setObjectName("PushButton_MarlinParkTrip");
        PushButton_MarlinParkTrip->setMinimumSize(QSize(161, 41));
        PushButton_MarlinParkTrip->setFont(font1);
        PushButton_MarlinParkTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(PushButton_MarlinParkTrip);

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
        PushButton_BackToMain_2->setGeometry(QRect(20, 10, 101, 31));
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
        CustomTrip = new QWidget();
        CustomTrip->setObjectName("CustomTrip");
        WelcomeLabel_3 = new QLabel(CustomTrip);
        WelcomeLabel_3->setObjectName("WelcomeLabel_3");
        WelcomeLabel_3->setGeometry(QRect(10, 40, 981, 41));
        QFont font2;
        font2.setPointSize(9);
        WelcomeLabel_3->setFont(font2);
        WelcomeLabel_3->setStyleSheet(QString::fromUtf8(""));
        WelcomeLabel_3->setFrameShape(QFrame::Box);
        PushButton_BackToMain_4 = new QPushButton(CustomTrip);
        PushButton_BackToMain_4->setObjectName("PushButton_BackToMain_4");
        PushButton_BackToMain_4->setGeometry(QRect(20, 0, 81, 21));
        PushButton_BackToMain_4->setFont(font);
        PushButton_BackToMain_4->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(CustomTrip);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 110, 621, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        TeamListComboBox = new QComboBox(layoutWidget);
        TeamListComboBox->setObjectName("TeamListComboBox");
        QFont font3;
        font3.setPointSize(11);
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

        layoutWidget1 = new QWidget(CustomTrip);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(670, 150, 261, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PushButton_BeginCustomTrip = new QPushButton(layoutWidget1);
        PushButton_BeginCustomTrip->setObjectName("PushButton_BeginCustomTrip");
        PushButton_BeginCustomTrip->setMinimumSize(QSize(121, 41));
        PushButton_BeginCustomTrip->setFont(font3);
        PushButton_BeginCustomTrip->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(PushButton_BeginCustomTrip);

        PushButton_BeginCustomTrip_2 = new QPushButton(layoutWidget1);
        PushButton_BeginCustomTrip_2->setObjectName("PushButton_BeginCustomTrip_2");
        PushButton_BeginCustomTrip_2->setMinimumSize(QSize(121, 41));
        PushButton_BeginCustomTrip_2->setFont(font3);
        PushButton_BeginCustomTrip_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(PushButton_BeginCustomTrip_2);

        PushButton_BeginCustomTrip_Clear = new QPushButton(layoutWidget1);
        PushButton_BeginCustomTrip_Clear->setObjectName("PushButton_BeginCustomTrip_Clear");
        PushButton_BeginCustomTrip_Clear->setMinimumSize(QSize(121, 41));
        PushButton_BeginCustomTrip_Clear->setFont(font3);
        PushButton_BeginCustomTrip_Clear->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(PushButton_BeginCustomTrip_Clear);

        TripPlannerStackedWidget->addWidget(CustomTrip);
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
        souv_tableView = new QTableView(SouvenirPage);
        souv_tableView->setObjectName("souv_tableView");
        souv_tableView->setGeometry(QRect(40, 150, 256, 281));
        souvCart_tableView = new QTableView(SouvenirPage);
        souvCart_tableView->setObjectName("souvCart_tableView");
        souvCart_tableView->setGeometry(QRect(380, 120, 256, 391));
        label = new QLabel(SouvenirPage);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 251, 51));
        label_2 = new QLabel(SouvenirPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 70, 241, 51));
        team_comboBox = new QComboBox(SouvenirPage);
        team_comboBox->setObjectName("team_comboBox");
        team_comboBox->setGeometry(QRect(40, 110, 261, 32));
        label_3 = new QLabel(SouvenirPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 520, 58, 21));
        grandTotal = new QLabel(SouvenirPage);
        grandTotal->setObjectName("grandTotal");
        grandTotal->setGeometry(QRect(510, 520, 58, 21));
        addSouvenirButton = new QPushButton(SouvenirPage);
        addSouvenirButton->setObjectName("addSouvenirButton");
        addSouvenirButton->setGeometry(QRect(110, 490, 131, 32));
        souv_comboBox = new QComboBox(SouvenirPage);
        souv_comboBox->setObjectName("souv_comboBox");
        souv_comboBox->setGeometry(QRect(40, 440, 181, 32));
        spinBox = new QSpinBox(SouvenirPage);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(230, 440, 42, 31));
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

        TripPlannerStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(TripPlanner);
    } // setupUi

    void retranslateUi(QDialog *TripPlanner)
    {
        TripPlanner->setWindowTitle(QCoreApplication::translate("TripPlanner", "Dialog", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("TripPlanner", "Plan a Vacation", nullptr));
        PushButton_CustomTrip->setText(QCoreApplication::translate("TripPlanner", "Custom Trip", nullptr));
        PushButton_MarlinParkTrip->setText(QCoreApplication::translate("TripPlanner", "Marlin Park traversal", nullptr));
        PushButton_MostEfficientTrip->setText(QCoreApplication::translate("TripPlanner", "Shortest path from A to B", nullptr));
        PushButton_BackToMain->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        Label_OriginStadium->setText(QCoreApplication::translate("TripPlanner", "Select your Starting Stadium:", nullptr));
        Label_DestinationStadium->setText(QCoreApplication::translate("TripPlanner", "Select your Destination Stadium:", nullptr));
        PushButton_BeginTrip->setText(QCoreApplication::translate("TripPlanner", "Begin Trip", nullptr));
        PushButton_BackToMain_2->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        WelcomeLabel_2->setText(QCoreApplication::translate("TripPlanner", "Start Planing Your Trip!", nullptr));
        WelcomeLabel_3->setText(QCoreApplication::translate("TripPlanner", "Add the teams you wish to visit to the list then press the type of trip you would like to take.", nullptr));
        PushButton_BackToMain_4->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
        PushButton_AddTeam->setText(QCoreApplication::translate("TripPlanner", "Add Team", nullptr));
        PushButton_BeginCustomTrip->setText(QCoreApplication::translate("TripPlanner", "Shortest Path", nullptr));
        PushButton_BeginCustomTrip_2->setText(QCoreApplication::translate("TripPlanner", "Most Efficient Order", nullptr));
        PushButton_BeginCustomTrip_Clear->setText(QCoreApplication::translate("TripPlanner", "Clear list to restart", nullptr));
        WelcomeLabel_4->setText(QCoreApplication::translate("TripPlanner", "What souvenirs would you like to buy?", nullptr));
        PushButton_SouvenirFinishTrip->setText(QCoreApplication::translate("TripPlanner", "Finish Trip", nullptr));
        label->setText(QCoreApplication::translate("TripPlanner", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenirs Of:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("TripPlanner", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenir Cart:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TripPlanner", "<html><head/><body><p><span style=\" font-size:18pt;\">Total: $</span></p></body></html>", nullptr));
        grandTotal->setText(QCoreApplication::translate("TripPlanner", "<html><head/><body><p><span style=\" font-size:18pt;\">0.00</span></p></body></html>", nullptr));
        addSouvenirButton->setText(QCoreApplication::translate("TripPlanner", "Add Souvenir", nullptr));
        Label_TripSummary->setText(QCoreApplication::translate("TripPlanner", "Trip Summary", nullptr));
        Label_FinalTotalDistance->setText(QCoreApplication::translate("TripPlanner", "Total Distance Traveled", nullptr));
        PushButton_BackToMain_6->setText(QCoreApplication::translate("TripPlanner", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripPlanner: public Ui_TripPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPPLANNER_H
