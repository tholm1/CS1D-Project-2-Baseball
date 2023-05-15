/********************************************************************************
** Form generated from reading UI file 'displayinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYINFO_H
#define UI_DISPLAYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_displayInfo
{
public:
    QPushButton *displayTeams_pushButton;
    QPushButton *planVacation_pushButton;
    QPushButton *back_pushButton;
    QLabel *background;

    void setupUi(QDialog *displayInfo)
    {
        if (displayInfo->objectName().isEmpty())
            displayInfo->setObjectName("displayInfo");
        displayInfo->resize(553, 343);
        displayInfo->setStyleSheet(QString::fromUtf8(""));
        displayTeams_pushButton = new QPushButton(displayInfo);
        displayTeams_pushButton->setObjectName("displayTeams_pushButton");
        displayTeams_pushButton->setGeometry(QRect(150, 80, 241, 61));
        displayTeams_pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        planVacation_pushButton = new QPushButton(displayInfo);
        planVacation_pushButton->setObjectName("planVacation_pushButton");
        planVacation_pushButton->setGeometry(QRect(150, 160, 241, 61));
        planVacation_pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        back_pushButton = new QPushButton(displayInfo);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(20, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        background = new QLabel(displayInfo);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 553, 343));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/image/brown_back.jpg);"));
        background->raise();
        displayTeams_pushButton->raise();
        planVacation_pushButton->raise();
        back_pushButton->raise();

        retranslateUi(displayInfo);

        QMetaObject::connectSlotsByName(displayInfo);
    } // setupUi

    void retranslateUi(QDialog *displayInfo)
    {
        displayInfo->setWindowTitle(QCoreApplication::translate("displayInfo", "Dialog", nullptr));
        displayTeams_pushButton->setText(QCoreApplication::translate("displayInfo", "Display Teams", nullptr));
        planVacation_pushButton->setText(QCoreApplication::translate("displayInfo", "Plan a Vacation!", nullptr));
        back_pushButton->setText(QCoreApplication::translate("displayInfo", "Back", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class displayInfo: public Ui_displayInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYINFO_H
