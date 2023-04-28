/********************************************************************************
** Form generated from reading UI file 'adddelete.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELETE_H
#define UI_ADDDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddDelete
{
public:

    void setupUi(QDialog *AddDelete)
    {
        if (AddDelete->objectName().isEmpty())
            AddDelete->setObjectName("AddDelete");
        AddDelete->resize(400, 300);

        retranslateUi(AddDelete);

        QMetaObject::connectSlotsByName(AddDelete);
    } // setupUi

    void retranslateUi(QDialog *AddDelete)
    {
        AddDelete->setWindowTitle(QCoreApplication::translate("AddDelete", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDelete: public Ui_AddDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELETE_H
