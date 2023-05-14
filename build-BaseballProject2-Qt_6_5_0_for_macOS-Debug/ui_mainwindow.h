/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *display_pushButton;
    QPushButton *maintenance_pushButton;
    QLabel *label;
    QLabel *background;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(738, 550);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        display_pushButton = new QPushButton(centralwidget);
        display_pushButton->setObjectName("display_pushButton");
        display_pushButton->setGeometry(QRect(170, 410, 401, 61));
        display_pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 22pt \"Ravie\";\n"
"color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        maintenance_pushButton = new QPushButton(centralwidget);
        maintenance_pushButton->setObjectName("maintenance_pushButton");
        maintenance_pushButton->setGeometry(QRect(30, 10, 141, 31));
        maintenance_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe Script\";"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 80, 451, 271));
        label->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/take_me_out.png);"));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 20, 738, 550));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/image/baseball_stadium.jpg);"));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        display_pushButton->raise();
        maintenance_pushButton->raise();
        label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 738, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display_pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        maintenance_pushButton->setText(QCoreApplication::translate("MainWindow", "Maintenance", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
