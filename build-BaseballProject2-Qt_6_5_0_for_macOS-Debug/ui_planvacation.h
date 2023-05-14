/********************************************************************************
** Form generated from reading UI file 'planvacation.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANVACATION_H
#define UI_PLANVACATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planVacation
{
public:
    QPushButton *back_pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *planVacation)
    {
        if (planVacation->objectName().isEmpty())
            planVacation->setObjectName("planVacation");
        planVacation->resize(689, 440);
        planVacation->setStyleSheet(QString::fromUtf8(""));
        back_pushButton = new QPushButton(planVacation);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(10, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"background-color: rgb(0, 0, 0)"));
        layoutWidget = new QWidget(planVacation);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 10, 511, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_7);


        retranslateUi(planVacation);

        QMetaObject::connectSlotsByName(planVacation);
    } // setupUi

    void retranslateUi(QDialog *planVacation)
    {
        planVacation->setWindowTitle(QCoreApplication::translate("planVacation", "Dialog", nullptr));
        back_pushButton->setText(QCoreApplication::translate("planVacation", "Back", nullptr));
        pushButton_6->setText(QCoreApplication::translate("planVacation", "Graph Traversal", nullptr));
        pushButton_7->setText(QCoreApplication::translate("planVacation", "Trip Planner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planVacation: public Ui_planVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANVACATION_H
