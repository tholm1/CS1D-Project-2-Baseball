/********************************************************************************
** Form generated from reading UI file 'maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_H
#define UI_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_maintenance
{
public:

    void setupUi(QDialog *maintenance)
    {
        if (maintenance->objectName().isEmpty())
            maintenance->setObjectName(QString::fromUtf8("maintenance"));
        maintenance->resize(400, 300);

        retranslateUi(maintenance);

        QMetaObject::connectSlotsByName(maintenance);
    } // setupUi

    void retranslateUi(QDialog *maintenance)
    {
        maintenance->setWindowTitle(QApplication::translate("maintenance", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maintenance: public Ui_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
