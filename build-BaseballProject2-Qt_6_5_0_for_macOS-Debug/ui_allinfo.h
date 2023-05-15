/********************************************************************************
** Form generated from reading UI file 'allinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINFO_H
#define UI_ALLINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Allinfo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *teams_combo;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *stadium;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *seating;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *location;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *surface;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *league;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *date;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLabel *distance;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLabel *ballpark;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLabel *roof;
    QPushButton *back_menu;
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

    void setupUi(QDialog *Allinfo)
    {
        if (Allinfo->objectName().isEmpty())
            Allinfo->setObjectName("Allinfo");
        Allinfo->resize(904, 846);
        Allinfo->setStyleSheet(QString::fromUtf8("background color: rgb(0, 0, 255);"));
        layoutWidget = new QWidget(Allinfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 60, 891, 761));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(50, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(100, 0, 150, 30);
        teams_combo = new QComboBox(layoutWidget);
        teams_combo->setObjectName("teams_combo");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teams_combo->sizePolicy().hasHeightForWidth());
        teams_combo->setSizePolicy(sizePolicy);
        teams_combo->setMinimumSize(QSize(0, 30));
        teams_combo->setStyleSheet(QString::fromUtf8("#teams_combo {border-radius:20px;}"));
        teams_combo->setEditable(true);

        horizontalLayout_2->addWidget(teams_combo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_12->addWidget(label_11, 0, Qt::AlignLeft);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_12->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout->addWidget(label_10, 0, Qt::AlignLeft);

        stadium = new QLabel(layoutWidget);
        stadium->setObjectName("stadium");
        stadium->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout->addWidget(stadium);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_4->addWidget(label_2, 0, Qt::AlignLeft);

        seating = new QLabel(layoutWidget);
        seating->setObjectName("seating");
        seating->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_4->addWidget(seating);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_5->addWidget(label_3, 0, Qt::AlignLeft);

        location = new QLabel(layoutWidget);
        location->setObjectName("location");
        location->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_5->addWidget(location);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_6->addWidget(label_4, 0, Qt::AlignLeft);

        surface = new QLabel(layoutWidget);
        surface->setObjectName("surface");
        surface->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_6->addWidget(surface);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_7->addWidget(label_5, 0, Qt::AlignLeft);

        league = new QLabel(layoutWidget);
        league->setObjectName("league");
        league->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_7->addWidget(league);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_8->addWidget(label_6, 0, Qt::AlignLeft);

        date = new QLabel(layoutWidget);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_8->addWidget(date);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_9->addWidget(label_7, 0, Qt::AlignLeft);

        distance = new QLabel(layoutWidget);
        distance->setObjectName("distance");
        distance->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_9->addWidget(distance);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_10->addWidget(label_8, 0, Qt::AlignLeft);

        ballpark = new QLabel(layoutWidget);
        ballpark->setObjectName("ballpark");
        ballpark->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_10->addWidget(ballpark);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_11->addWidget(label_9, 0, Qt::AlignLeft);

        roof = new QLabel(layoutWidget);
        roof->setObjectName("roof");
        roof->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_11->addWidget(roof);


        verticalLayout->addLayout(horizontalLayout_11);

        back_menu = new QPushButton(Allinfo);
        back_menu->setObjectName("back_menu");
        back_menu->setGeometry(QRect(35, 20, 61, 31));
        back_menu->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/feather/menu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        back_menu->setIcon(icon);
        back_menu->setIconSize(QSize(20, 20));
        back_menu->setCheckable(false);
        back_menu->setChecked(false);
        frame = new QFrame(Allinfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 10, 151, 591));
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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display_menu->sizePolicy().hasHeightForWidth());
        display_menu->setSizePolicy(sizePolicy1);
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

        retranslateUi(Allinfo);
        QObject::connect(back_menu, &QPushButton::clicked, frame, qOverload<>(&QFrame::show));
        QObject::connect(pushButton, &QPushButton::clicked, frame, qOverload<>(&QFrame::hide));
        QObject::connect(display_menu, &QPushButton::toggled, team_widget, &QWidget::setVisible);
        QObject::connect(Trip_button, &QPushButton::toggled, widget, &QWidget::setVisible);

        QMetaObject::connectSlotsByName(Allinfo);
    } // setupUi

    void retranslateUi(QDialog *Allinfo)
    {
        Allinfo->setWindowTitle(QCoreApplication::translate("Allinfo", "Dialog", nullptr));
        teams_combo->setPlaceholderText(QCoreApplication::translate("Allinfo", "Search Here, Anything...", nullptr));
        label_11->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Team Name:</span></p></body></html>", nullptr));
        label->setText(QString());
        label_10->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:400; text-decoration: underline;\">Stadium Name:</span></p></body></html>", nullptr));
        stadium->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Seating Capacity:</span></p></body></html>", nullptr));
        seating->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Location:</span></p></body></html>", nullptr));
        location->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Playing Surface:</span></p></body></html>", nullptr));
        surface->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">League:</span></p></body></html>", nullptr));
        league->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Date Opened:</span></p></body></html>", nullptr));
        date->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Distance to Center Field:</span></p></body></html>", nullptr));
        distance->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Ballpark Typology:</span></p></body></html>", nullptr));
        ballpark->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Roof Type:</span></p></body></html>", nullptr));
        roof->setText(QCoreApplication::translate("Allinfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        back_menu->setText(QString());
        pushButton->setText(QCoreApplication::translate("Allinfo", "MENU", nullptr));
        display_menu->setText(QCoreApplication::translate("Allinfo", "Display", nullptr));
        one_team->setText(QCoreApplication::translate("Allinfo", "One Team", nullptr));
        filterTeam->setText(QCoreApplication::translate("Allinfo", "Filter Team", nullptr));
        Trip_button->setText(QCoreApplication::translate("Allinfo", "Trip", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Allinfo", "DFS/BFS/MST", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Allinfo", "START -- Dodger", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Allinfo", "START -- Marlins", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Allinfo", "CUSTOM -- Shortest", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Allinfo", "CUSTOM -- Recursive", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Allinfo", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Allinfo", "PushButton", nullptr));
        mainpage->setText(QCoreApplication::translate("Allinfo", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Allinfo: public Ui_Allinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H
