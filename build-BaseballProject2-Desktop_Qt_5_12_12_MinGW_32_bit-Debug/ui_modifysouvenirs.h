/********************************************************************************
** Form generated from reading UI file 'modifysouvenirs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSOUVENIRS_H
#define UI_MODIFYSOUVENIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ModifySouvenirs
{
public:

    void setupUi(QDialog *ModifySouvenirs)
    {
        if (ModifySouvenirs->objectName().isEmpty())
            ModifySouvenirs->setObjectName(QString::fromUtf8("ModifySouvenirs"));
        ModifySouvenirs->resize(400, 300);

        retranslateUi(ModifySouvenirs);

        QMetaObject::connectSlotsByName(ModifySouvenirs);
    } // setupUi

    void retranslateUi(QDialog *ModifySouvenirs)
    {
        ModifySouvenirs->setWindowTitle(QApplication::translate("ModifySouvenirs", "Modify Souvenirs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifySouvenirs: public Ui_ModifySouvenirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSOUVENIRS_H
