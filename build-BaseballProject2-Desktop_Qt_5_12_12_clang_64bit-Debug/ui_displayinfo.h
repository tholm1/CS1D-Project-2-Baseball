/********************************************************************************
** Form generated from reading UI file 'displayinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYINFO_H
#define UI_DISPLAYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_displayInfo
{
public:
    QPushButton *displayTeams_pushButton;
    QPushButton *planVacation_pushButton;
    QPushButton *back_pushButton;

    void setupUi(QDialog *displayInfo)
    {
        if (displayInfo->objectName().isEmpty())
            displayInfo->setObjectName(QString::fromUtf8("displayInfo"));
        displayInfo->resize(557, 343);
        displayTeams_pushButton = new QPushButton(displayInfo);
        displayTeams_pushButton->setObjectName(QString::fromUtf8("displayTeams_pushButton"));
        displayTeams_pushButton->setGeometry(QRect(150, 80, 241, 61));
        planVacation_pushButton = new QPushButton(displayInfo);
        planVacation_pushButton->setObjectName(QString::fromUtf8("planVacation_pushButton"));
        planVacation_pushButton->setGeometry(QRect(150, 160, 241, 61));
        back_pushButton = new QPushButton(displayInfo);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(20, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));

        retranslateUi(displayInfo);

        QMetaObject::connectSlotsByName(displayInfo);
    } // setupUi

    void retranslateUi(QDialog *displayInfo)
    {
        displayInfo->setWindowTitle(QApplication::translate("displayInfo", "Dialog", nullptr));
        displayTeams_pushButton->setText(QApplication::translate("displayInfo", "Display Teams", nullptr));
        planVacation_pushButton->setText(QApplication::translate("displayInfo", "Plan a vacation", nullptr));
        back_pushButton->setText(QApplication::translate("displayInfo", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayInfo: public Ui_displayInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYINFO_H
