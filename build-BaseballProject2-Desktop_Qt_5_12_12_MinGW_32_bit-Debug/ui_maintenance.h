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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_maintenance
{
public:
    QPushButton *Add_Delete_Info_pushButton;
    QPushButton *modifyInfo_pushButton;
    QPushButton *back_pushButton;

    void setupUi(QDialog *maintenance)
    {
        if (maintenance->objectName().isEmpty())
            maintenance->setObjectName(QString::fromUtf8("maintenance"));
        maintenance->resize(518, 320);
        Add_Delete_Info_pushButton = new QPushButton(maintenance);
        Add_Delete_Info_pushButton->setObjectName(QString::fromUtf8("Add_Delete_Info_pushButton"));
        Add_Delete_Info_pushButton->setGeometry(QRect(120, 110, 271, 51));
        modifyInfo_pushButton = new QPushButton(maintenance);
        modifyInfo_pushButton->setObjectName(QString::fromUtf8("modifyInfo_pushButton"));
        modifyInfo_pushButton->setGeometry(QRect(120, 180, 271, 51));
        back_pushButton = new QPushButton(maintenance);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(20, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));

        retranslateUi(maintenance);

        QMetaObject::connectSlotsByName(maintenance);
    } // setupUi

    void retranslateUi(QDialog *maintenance)
    {
        maintenance->setWindowTitle(QApplication::translate("maintenance", "Dialog", nullptr));
        Add_Delete_Info_pushButton->setText(QApplication::translate("maintenance", "Add/Delete Information", nullptr));
        modifyInfo_pushButton->setText(QApplication::translate("maintenance", "Modify Information", nullptr));
        back_pushButton->setText(QApplication::translate("maintenance", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maintenance: public Ui_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
