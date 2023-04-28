/********************************************************************************
** Form generated from reading UI file 'adddeleteinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELETEINFO_H
#define UI_ADDDELETEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddDeleteInfo
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AddDeleteInfo)
    {
        if (AddDeleteInfo->objectName().isEmpty())
            AddDeleteInfo->setObjectName("AddDeleteInfo");
        AddDeleteInfo->resize(400, 300);
        pushButton = new QPushButton(AddDeleteInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 100, 32));
        pushButton_2 = new QPushButton(AddDeleteInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 100, 100, 32));
        pushButton_3 = new QPushButton(AddDeleteInfo);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 170, 100, 32));

        retranslateUi(AddDeleteInfo);

        QMetaObject::connectSlotsByName(AddDeleteInfo);
    } // setupUi

    void retranslateUi(QDialog *AddDeleteInfo)
    {
        AddDeleteInfo->setWindowTitle(QCoreApplication::translate("AddDeleteInfo", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AddDeleteInfo", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddDeleteInfo", "Add Stadiums", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AddDeleteInfo", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDeleteInfo: public Ui_AddDeleteInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELETEINFO_H
