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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
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
    QPushButton *addSouv_button;
    QPushButton *checkout_button;
    QLabel *label;
    QLabel *grandtotal;
    QPushButton *backButton;
    QLabel *label_2;
    QComboBox *selectTeamName;
    QComboBox *souv_comboBox;
    QSpinBox *quanitity_spinBox;
    QTableView *souv_tableView;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *souvCart_tableView;

    void setupUi(QDialog *planVacation)
    {
        if (planVacation->objectName().isEmpty())
            planVacation->setObjectName("planVacation");
        planVacation->resize(899, 580);
        planVacation->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(planVacation);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 0, 821, 541));
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
        addSouv_button = new QPushButton(page_2);
        addSouv_button->setObjectName("addSouv_button");
        addSouv_button->setGeometry(QRect(80, 490, 221, 32));
        checkout_button = new QPushButton(page_2);
        checkout_button->setObjectName("checkout_button");
        checkout_button->setGeometry(QRect(470, 490, 251, 32));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 450, 92, 22));
        grandtotal = new QLabel(page_2);
        grandtotal->setObjectName("grandtotal");
        grandtotal->setGeometry(QRect(610, 450, 81, 22));
        backButton = new QPushButton(page_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 30, 60, 32));
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 70, 171, 31));
        selectTeamName = new QComboBox(page_2);
        selectTeamName->setObjectName("selectTeamName");
        selectTeamName->setGeometry(QRect(50, 110, 271, 32));
        souv_comboBox = new QComboBox(page_2);
        souv_comboBox->setObjectName("souv_comboBox");
        souv_comboBox->setGeometry(QRect(70, 440, 181, 32));
        quanitity_spinBox = new QSpinBox(page_2);
        quanitity_spinBox->setObjectName("quanitity_spinBox");
        quanitity_spinBox->setGeometry(QRect(260, 440, 36, 21));
        souv_tableView = new QTableView(page_2);
        souv_tableView->setObjectName("souv_tableView");
        souv_tableView->setGeometry(QRect(60, 150, 256, 281));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 70, 221, 31));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, 450, 16, 21));
        souvCart_tableView = new QTableView(page_2);
        souvCart_tableView->setObjectName("souvCart_tableView");
        souvCart_tableView->setGeometry(QRect(375, 110, 421, 321));
        stackedWidget->addWidget(page_2);

        retranslateUi(planVacation);

        stackedWidget->setCurrentIndex(1);


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
        addSouv_button->setText(QCoreApplication::translate("planVacation", "Add", nullptr));
        checkout_button->setText(QCoreApplication::translate("planVacation", "Checkout", nullptr));
        label->setText(QCoreApplication::translate("planVacation", "<html><head/><body><p><span style=\" font-size:18pt;\">Grand Total:</span></p></body></html>", nullptr));
        grandtotal->setText(QCoreApplication::translate("planVacation", "<html><head/><body><p><span style=\" font-size:18pt;\">0.00</span></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("planVacation", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("planVacation", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenirs Of:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("planVacation", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenir Cart:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("planVacation", "<html><head/><body><p><span style=\" font-size:18pt;\">$</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planVacation: public Ui_planVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANVACATION_H
