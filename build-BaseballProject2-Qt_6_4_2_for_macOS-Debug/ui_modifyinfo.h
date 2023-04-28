/********************************************************************************
** Form generated from reading UI file 'modifyinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYINFO_H
#define UI_MODIFYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModifyInfo
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *ModifyInfo)
    {
        if (ModifyInfo->objectName().isEmpty())
            ModifyInfo->setObjectName("ModifyInfo");
        ModifyInfo->resize(400, 300);
        pushButton = new QPushButton(ModifyInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 100, 32));

        retranslateUi(ModifyInfo);

        QMetaObject::connectSlotsByName(ModifyInfo);
    } // setupUi

    void retranslateUi(QDialog *ModifyInfo)
    {
        ModifyInfo->setWindowTitle(QCoreApplication::translate("ModifyInfo", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ModifyInfo", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyInfo: public Ui_ModifyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYINFO_H
