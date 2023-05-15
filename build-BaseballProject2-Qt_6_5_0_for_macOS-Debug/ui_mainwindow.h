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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *display_menu;
    QWidget *team_widget;
    QPushButton *one_team;
    QPushButton *filterTeam;
    QPushButton *Trip_button;
    QWidget *widget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *mainpage;
    QPushButton *back_menu;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(738, 635);
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
        maintenance_pushButton->setGeometry(QRect(660, 10, 51, 31));
        maintenance_pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/feather/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        maintenance_pushButton->setIcon(icon);
        maintenance_pushButton->setIconSize(QSize(20, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 80, 451, 271));
        label->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/take_me_out.png);"));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 45, 738, 550));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/image/baseball_stadium.jpg);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 151, 591));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: #4398D8;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #85C1E9\n"
"}\n"
"#frame { border: 2px solid black;\n"
"border-radius:20px;\n"
"background-color:rgba(0,0,0,100); }\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 10, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe Print\";"));
        display_menu = new QPushButton(frame);
        display_menu->setObjectName("display_menu");
        display_menu->setGeometry(QRect(9, 90, 131, 21));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display_menu->sizePolicy().hasHeightForWidth());
        display_menu->setSizePolicy(sizePolicy);
        display_menu->setFocusPolicy(Qt::StrongFocus);
        display_menu->setLayoutDirection(Qt::RightToLeft);
        display_menu->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/feather/arrow-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/feather/arrow-down.svg"), QSize(), QIcon::Normal, QIcon::On);
        display_menu->setIcon(icon1);
        display_menu->setCheckable(true);
        display_menu->setChecked(true);
        team_widget = new QWidget(frame);
        team_widget->setObjectName("team_widget");
        team_widget->setGeometry(QRect(9, 120, 131, 81));
        one_team = new QPushButton(team_widget);
        one_team->setObjectName("one_team");
        one_team->setGeometry(QRect(9, 10, 111, 22));
        one_team->setFocusPolicy(Qt::NoFocus);
        one_team->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        filterTeam = new QPushButton(team_widget);
        filterTeam->setObjectName("filterTeam");
        filterTeam->setGeometry(QRect(9, 50, 111, 22));
        filterTeam->setFocusPolicy(Qt::NoFocus);
        filterTeam->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        Trip_button = new QPushButton(frame);
        Trip_button->setObjectName("Trip_button");
        Trip_button->setGeometry(QRect(9, 210, 131, 21));
        Trip_button->setFocusPolicy(Qt::StrongFocus);
        Trip_button->setLayoutDirection(Qt::RightToLeft);
        Trip_button->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        Trip_button->setIcon(icon1);
        Trip_button->setCheckable(true);
        Trip_button->setChecked(true);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 250, 131, 281));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(9, 0, 111, 22));
        pushButton_4->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(9, 40, 111, 22));
        pushButton_5->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(9, 80, 111, 22));
        pushButton_6->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(9, 120, 111, 22));
        pushButton_7->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(9, 160, 111, 22));
        pushButton_8->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(9, 200, 111, 22));
        pushButton_9->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(9, 240, 111, 22));
        pushButton_10->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        mainpage = new QPushButton(frame);
        mainpage->setObjectName("mainpage");
        mainpage->setGeometry(QRect(10, 50, 131, 31));
        mainpage->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"text-align: left;\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/feather/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mainpage->setIcon(icon2);
        back_menu = new QPushButton(centralwidget);
        back_menu->setObjectName("back_menu");
        back_menu->setGeometry(QRect(35, 10, 61, 31));
        back_menu->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/feather/menu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        back_menu->setIcon(icon3);
        back_menu->setIconSize(QSize(20, 20));
        back_menu->setCheckable(false);
        back_menu->setChecked(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(620, 10, 51, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/feather/shopping-cart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(20, 20));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        back_menu->raise();
        display_pushButton->raise();
        maintenance_pushButton->raise();
        label->raise();
        frame->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 738, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, frame, qOverload<>(&QFrame::hide));
        QObject::connect(back_menu, &QPushButton::clicked, frame, qOverload<>(&QFrame::show));
        QObject::connect(display_menu, &QPushButton::toggled, team_widget, &QWidget::setVisible);
        QObject::connect(Trip_button, &QPushButton::toggled, widget, &QWidget::setVisible);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display_pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        maintenance_pushButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        display_menu->setText(QCoreApplication::translate("MainWindow", "Display", nullptr));
        one_team->setText(QCoreApplication::translate("MainWindow", "One Team", nullptr));
        filterTeam->setText(QCoreApplication::translate("MainWindow", "Filter Team", nullptr));
        Trip_button->setText(QCoreApplication::translate("MainWindow", "Trip", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "DFS/BFS/MST", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "START -- Dodger", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "START -- Marlins", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "CUSTOM -- Shortest", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "CUSTOM -- Recursive", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        mainpage->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        back_menu->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
