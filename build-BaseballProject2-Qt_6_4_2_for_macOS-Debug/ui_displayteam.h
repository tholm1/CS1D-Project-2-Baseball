/********************************************************************************
** Form generated from reading UI file 'displayteam.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYTEAM_H
#define UI_DISPLAYTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_displayTeam
{
public:
    QPushButton *displaySingleTeam_pushButton;
    QPushButton *displayWithFilter_pushButton;
    QPushButton *back_pushButton;

    void setupUi(QDialog *displayTeam)
    {
        if (displayTeam->objectName().isEmpty())
            displayTeam->setObjectName("displayTeam");
        displayTeam->resize(747, 540);
        displayTeam->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 51, 255)"));
        displaySingleTeam_pushButton = new QPushButton(displayTeam);
        displaySingleTeam_pushButton->setObjectName("displaySingleTeam_pushButton");
        displaySingleTeam_pushButton->setGeometry(QRect(190, 130, 371, 121));
        displaySingleTeam_pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        displayWithFilter_pushButton = new QPushButton(displayTeam);
        displayWithFilter_pushButton->setObjectName("displayWithFilter_pushButton");
        displayWithFilter_pushButton->setGeometry(QRect(190, 270, 371, 121));
        displayWithFilter_pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        back_pushButton = new QPushButton(displayTeam);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(30, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        retranslateUi(displayTeam);

        QMetaObject::connectSlotsByName(displayTeam);
    } // setupUi

    void retranslateUi(QDialog *displayTeam)
    {
        displayTeam->setWindowTitle(QCoreApplication::translate("displayTeam", "Dialog", nullptr));
        displaySingleTeam_pushButton->setText(QCoreApplication::translate("displayTeam", "Display a Single Team", nullptr));
        displayWithFilter_pushButton->setText(QCoreApplication::translate("displayTeam", "Display Teams with Filters", nullptr));
        back_pushButton->setText(QCoreApplication::translate("displayTeam", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayTeam: public Ui_displayTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTEAM_H
