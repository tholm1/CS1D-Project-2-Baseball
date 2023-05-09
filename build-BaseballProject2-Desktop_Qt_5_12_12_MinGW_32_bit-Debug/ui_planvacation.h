/********************************************************************************
** Form generated from reading UI file 'planvacation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANVACATION_H
#define UI_PLANVACATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_planVacation
{
public:
    QPushButton *GraphTraversals_pushButton;
    QPushButton *TripPlanner_pushButton;
    QPushButton *back_pushButton;

    void setupUi(QDialog *planVacation)
    {
        if (planVacation->objectName().isEmpty())
            planVacation->setObjectName(QString::fromUtf8("planVacation"));
        planVacation->resize(689, 440);
        planVacation->setStyleSheet(QString::fromUtf8(""));
        GraphTraversals_pushButton = new QPushButton(planVacation);
        GraphTraversals_pushButton->setObjectName(QString::fromUtf8("GraphTraversals_pushButton"));
        GraphTraversals_pushButton->setGeometry(QRect(230, 110, 181, 51));
        TripPlanner_pushButton = new QPushButton(planVacation);
        TripPlanner_pushButton->setObjectName(QString::fromUtf8("TripPlanner_pushButton"));
        TripPlanner_pushButton->setGeometry(QRect(220, 190, 191, 51));
        back_pushButton = new QPushButton(planVacation);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 10, 80, 21));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        retranslateUi(planVacation);

        QMetaObject::connectSlotsByName(planVacation);
    } // setupUi

    void retranslateUi(QDialog *planVacation)
    {
        planVacation->setWindowTitle(QApplication::translate("planVacation", "Dialog", nullptr));
        GraphTraversals_pushButton->setText(QApplication::translate("planVacation", "Graph Traversals", nullptr));
        TripPlanner_pushButton->setText(QApplication::translate("planVacation", "Trip Planner", nullptr));
        back_pushButton->setText(QApplication::translate("planVacation", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planVacation: public Ui_planVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANVACATION_H
