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

QT_BEGIN_NAMESPACE

class Ui_displayInfo
{
public:

    void setupUi(QDialog *displayInfo)
    {
        if (displayInfo->objectName().isEmpty())
            displayInfo->setObjectName(QString::fromUtf8("displayInfo"));
        displayInfo->resize(400, 300);

        retranslateUi(displayInfo);

        QMetaObject::connectSlotsByName(displayInfo);
    } // setupUi

    void retranslateUi(QDialog *displayInfo)
    {
        displayInfo->setWindowTitle(QApplication::translate("displayInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayInfo: public Ui_displayInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYINFO_H
