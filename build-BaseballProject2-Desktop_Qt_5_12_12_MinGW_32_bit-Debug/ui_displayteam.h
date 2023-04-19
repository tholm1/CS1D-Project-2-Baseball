/********************************************************************************
** Form generated from reading UI file 'displayteam.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
            displayTeam->setObjectName(QString::fromUtf8("displayTeam"));
        displayTeam->resize(875, 540);
        displaySingleTeam_pushButton = new QPushButton(displayTeam);
        displaySingleTeam_pushButton->setObjectName(QString::fromUtf8("displaySingleTeam_pushButton"));
        displaySingleTeam_pushButton->setGeometry(QRect(190, 130, 371, 121));
        displayWithFilter_pushButton = new QPushButton(displayTeam);
        displayWithFilter_pushButton->setObjectName(QString::fromUtf8("displayWithFilter_pushButton"));
        displayWithFilter_pushButton->setGeometry(QRect(190, 270, 371, 121));
        back_pushButton = new QPushButton(displayTeam);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(30, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));

        retranslateUi(displayTeam);

        QMetaObject::connectSlotsByName(displayTeam);
    } // setupUi

    void retranslateUi(QDialog *displayTeam)
    {
        displayTeam->setWindowTitle(QApplication::translate("displayTeam", "Dialog", nullptr));
        displaySingleTeam_pushButton->setText(QApplication::translate("displayTeam", "Display a single team", nullptr));
        displayWithFilter_pushButton->setText(QApplication::translate("displayTeam", "Display with filters", nullptr));
        back_pushButton->setText(QApplication::translate("displayTeam", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayTeam: public Ui_displayTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTEAM_H
