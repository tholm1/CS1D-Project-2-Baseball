/********************************************************************************
** Form generated from reading UI file 'modifyinfomation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYINFOMATION_H
#define UI_MODIFYINFOMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_modifyInfomation
{
public:

    void setupUi(QDialog *modifyInfomation)
    {
        if (modifyInfomation->objectName().isEmpty())
            modifyInfomation->setObjectName(QString::fromUtf8("modifyInfomation"));
        modifyInfomation->resize(400, 300);

        retranslateUi(modifyInfomation);

        QMetaObject::connectSlotsByName(modifyInfomation);
    } // setupUi

    void retranslateUi(QDialog *modifyInfomation)
    {
        modifyInfomation->setWindowTitle(QApplication::translate("modifyInfomation", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyInfomation: public Ui_modifyInfomation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYINFOMATION_H
