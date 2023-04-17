/********************************************************************************
** Form generated from reading UI file 'displayteams.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYTEAMS_H
#define UI_DISPLAYTEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayTeams
{
public:
    QTableView *tableView;
    QPushButton *teamInfo_pushButton;
    QPushButton *majorLeagueTeamName_pushButton;
    QPushButton *majorLeagueStadiumName_pushButton;
    QPushButton *AmericanLeague_pushButton;
    QPushButton *nationalLeague_pushButton;
    QPushButton *parkTypology_pushButton;
    QPushButton *openRoof_pushButton;
    QPushButton *dateOpened_pushButton;
    QPushButton *centerField_pushButton;

    void setupUi(QWidget *displayTeams)
    {
        if (displayTeams->objectName().isEmpty())
            displayTeams->setObjectName(QString::fromUtf8("displayTeams"));
        displayTeams->resize(776, 520);
        tableView = new QTableView(displayTeams);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(290, 30, 481, 441));
        teamInfo_pushButton = new QPushButton(displayTeams);
        teamInfo_pushButton->setObjectName(QString::fromUtf8("teamInfo_pushButton"));
        teamInfo_pushButton->setGeometry(QRect(10, 40, 271, 31));
        majorLeagueTeamName_pushButton = new QPushButton(displayTeams);
        majorLeagueTeamName_pushButton->setObjectName(QString::fromUtf8("majorLeagueTeamName_pushButton"));
        majorLeagueTeamName_pushButton->setGeometry(QRect(10, 80, 271, 31));
        majorLeagueStadiumName_pushButton = new QPushButton(displayTeams);
        majorLeagueStadiumName_pushButton->setObjectName(QString::fromUtf8("majorLeagueStadiumName_pushButton"));
        majorLeagueStadiumName_pushButton->setGeometry(QRect(10, 120, 271, 31));
        AmericanLeague_pushButton = new QPushButton(displayTeams);
        AmericanLeague_pushButton->setObjectName(QString::fromUtf8("AmericanLeague_pushButton"));
        AmericanLeague_pushButton->setGeometry(QRect(10, 160, 271, 31));
        nationalLeague_pushButton = new QPushButton(displayTeams);
        nationalLeague_pushButton->setObjectName(QString::fromUtf8("nationalLeague_pushButton"));
        nationalLeague_pushButton->setGeometry(QRect(10, 200, 271, 31));
        parkTypology_pushButton = new QPushButton(displayTeams);
        parkTypology_pushButton->setObjectName(QString::fromUtf8("parkTypology_pushButton"));
        parkTypology_pushButton->setGeometry(QRect(10, 240, 271, 31));
        openRoof_pushButton = new QPushButton(displayTeams);
        openRoof_pushButton->setObjectName(QString::fromUtf8("openRoof_pushButton"));
        openRoof_pushButton->setGeometry(QRect(10, 280, 271, 31));
        dateOpened_pushButton = new QPushButton(displayTeams);
        dateOpened_pushButton->setObjectName(QString::fromUtf8("dateOpened_pushButton"));
        dateOpened_pushButton->setGeometry(QRect(10, 320, 271, 31));
        centerField_pushButton = new QPushButton(displayTeams);
        centerField_pushButton->setObjectName(QString::fromUtf8("centerField_pushButton"));
        centerField_pushButton->setGeometry(QRect(10, 360, 271, 31));

        retranslateUi(displayTeams);

        QMetaObject::connectSlotsByName(displayTeams);
    } // setupUi

    void retranslateUi(QWidget *displayTeams)
    {
        displayTeams->setWindowTitle(QApplication::translate("displayTeams", "Form", nullptr));
        teamInfo_pushButton->setText(QApplication::translate("displayTeams", "Display all team info", nullptr));
        majorLeagueTeamName_pushButton->setText(QApplication::translate("displayTeams", "Display all Major League teams by team name", nullptr));
        majorLeagueStadiumName_pushButton->setText(QApplication::translate("displayTeams", "Display all Major League teams by stadium name", nullptr));
        AmericanLeague_pushButton->setText(QApplication::translate("displayTeams", "Display all American League teams by team name", nullptr));
        nationalLeague_pushButton->setText(QApplication::translate("displayTeams", "Display all National League teams by stadium name", nullptr));
        parkTypology_pushButton->setText(QApplication::translate("displayTeams", "Display teams by park typology", nullptr));
        openRoof_pushButton->setText(QApplication::translate("displayTeams", "Display stadiums with open roof types", nullptr));
        dateOpened_pushButton->setText(QApplication::translate("displayTeams", "Display stadium by date opened", nullptr));
        centerField_pushButton->setText(QApplication::translate("displayTeams", "Display stadium by distance to center field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayTeams: public Ui_displayTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTEAMS_H
