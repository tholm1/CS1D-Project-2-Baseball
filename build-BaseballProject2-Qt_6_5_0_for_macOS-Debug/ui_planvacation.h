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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planVacation
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *back_pushButton;
    QWidget *page_2;
    QTableWidget *souvenirtable;
    QPushButton *calculatesouvbtn;
    QPushButton *clearsouvbtn;
    QPushButton *backtotrip;
    QLabel *label;
    QLabel *grandtotal;

    void setupUi(QDialog *planVacation)
    {
        if (planVacation->objectName().isEmpty())
            planVacation->setObjectName("planVacation");
        planVacation->resize(899, 526);
        planVacation->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(planVacation);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 821, 481));
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 50, 511, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        verticalLayout->addWidget(pushButton_5);

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

        back_pushButton = new QPushButton(page);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(30, 10, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"background-color: rgb(0, 0, 0)"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        souvenirtable = new QTableWidget(page_2);
        souvenirtable->setObjectName("souvenirtable");
        souvenirtable->setGeometry(QRect(80, 40, 651, 251));
        souvenirtable->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        calculatesouvbtn = new QPushButton(page_2);
        calculatesouvbtn->setObjectName("calculatesouvbtn");
        calculatesouvbtn->setGeometry(QRect(110, 330, 131, 32));
        clearsouvbtn = new QPushButton(page_2);
        clearsouvbtn->setObjectName("clearsouvbtn");
        clearsouvbtn->setGeometry(QRect(560, 330, 151, 32));
        backtotrip = new QPushButton(page_2);
        backtotrip->setObjectName("backtotrip");
        backtotrip->setGeometry(QRect(350, 400, 151, 32));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 340, 81, 20));
        grandtotal = new QLabel(page_2);
        grandtotal->setObjectName("grandtotal");
        grandtotal->setGeometry(QRect(430, 340, 91, 16));
        stackedWidget->addWidget(page_2);

        retranslateUi(planVacation);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(planVacation);
    } // setupUi

    void retranslateUi(QDialog *planVacation)
    {
        planVacation->setWindowTitle(QCoreApplication::translate("planVacation", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("planVacation", "Plan trip starting from Dodger Stadium", nullptr));
        pushButton_2->setText(QCoreApplication::translate("planVacation", "Plan trip and choose your route", nullptr));
        pushButton_3->setText(QCoreApplication::translate("planVacation", "Plan trip starting from Marlins Park", nullptr));
        pushButton_4->setText(QCoreApplication::translate("planVacation", "Plan trip starting from Marlins Park", nullptr));
        pushButton_5->setText(QCoreApplication::translate("planVacation", "Plan trip......", nullptr));
        pushButton_6->setText(QCoreApplication::translate("planVacation", "Plan trip starting from Oracle Park", nullptr));
        pushButton_7->setText(QCoreApplication::translate("planVacation", "Plan trip starting from Target Field", nullptr));
        back_pushButton->setText(QCoreApplication::translate("planVacation", "Back", nullptr));
        calculatesouvbtn->setText(QCoreApplication::translate("planVacation", "Calculate", nullptr));
        clearsouvbtn->setText(QCoreApplication::translate("planVacation", "Clear", nullptr));
        backtotrip->setText(QCoreApplication::translate("planVacation", "Done", nullptr));
        label->setText(QCoreApplication::translate("planVacation", "Grand Total:", nullptr));
        grandtotal->setText(QCoreApplication::translate("planVacation", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planVacation: public Ui_planVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANVACATION_H
