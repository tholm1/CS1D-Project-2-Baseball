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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planVacation
{
public:
    QPushButton *back_pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *planVacation)
    {
        if (planVacation->objectName().isEmpty())
            planVacation->setObjectName(QString::fromUtf8("planVacation"));
        planVacation->resize(689, 440);
        back_pushButton = new QPushButton(planVacation);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(10, 20, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        widget = new QWidget(planVacation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 10, 511, 421));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);


        retranslateUi(planVacation);

        QMetaObject::connectSlotsByName(planVacation);
    } // setupUi

    void retranslateUi(QDialog *planVacation)
    {
        planVacation->setWindowTitle(QApplication::translate("planVacation", "Dialog", nullptr));
        back_pushButton->setText(QApplication::translate("planVacation", "Back", nullptr));
        pushButton->setText(QApplication::translate("planVacation", "Plan trip starting from Dodger Stadium", nullptr));
        pushButton_2->setText(QApplication::translate("planVacation", "Plan trip and choose your route", nullptr));
        pushButton_3->setText(QApplication::translate("planVacation", "Plan trip starting from Marlins Park", nullptr));
        pushButton_4->setText(QApplication::translate("planVacation", "Plan trip starting from Marlins Park", nullptr));
        pushButton_5->setText(QApplication::translate("planVacation", "Plan trip......", nullptr));
        pushButton_6->setText(QApplication::translate("planVacation", "Plan trip starting from Oracle Park", nullptr));
        pushButton_7->setText(QApplication::translate("planVacation", "Plan trip starting from Target Field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planVacation: public Ui_planVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANVACATION_H
