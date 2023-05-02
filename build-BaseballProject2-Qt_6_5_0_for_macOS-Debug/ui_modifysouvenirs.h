/********************************************************************************
** Form generated from reading UI file 'modifysouvenirs.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSOUVENIRS_H
#define UI_MODIFYSOUVENIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifySouvenirs
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *tab_3;
    QWidget *tab_2;

    void setupUi(QDialog *ModifySouvenirs)
    {
        if (ModifySouvenirs->objectName().isEmpty())
            ModifySouvenirs->setObjectName("ModifySouvenirs");
        ModifySouvenirs->resize(764, 517);
        tabWidget = new QTabWidget(ModifySouvenirs);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 60, 701, 371));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 111, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 141, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 130, 111, 20));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(210, 60, 331, 32));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        retranslateUi(ModifySouvenirs);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModifySouvenirs);
    } // setupUi

    void retranslateUi(QDialog *ModifySouvenirs)
    {
        ModifySouvenirs->setWindowTitle(QCoreApplication::translate("ModifySouvenirs", "Modify Souvenirs", nullptr));
        label->setText(QCoreApplication::translate("ModifySouvenirs", "Team Name:", nullptr));
        label_2->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name:", nullptr));
        label_3->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Cost:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ModifySouvenirs", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ModifySouvenirs", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ModifySouvenirs", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifySouvenirs: public Ui_ModifySouvenirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSOUVENIRS_H
