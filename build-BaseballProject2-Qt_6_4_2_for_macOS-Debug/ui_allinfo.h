/********************************************************************************
** Form generated from reading UI file 'allinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINFO_H
#define UI_ALLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Allinfo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *teams_combo;
    QPushButton *search_button;
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

    void setupUi(QDialog *Allinfo)
    {
        if (Allinfo->objectName().isEmpty())
            Allinfo->setObjectName("Allinfo");
        Allinfo->resize(1156, 659);
        Allinfo->setStyleSheet(QString::fromUtf8("background color: rgb(0, 0, 255);"));
        gridLayout = new QGridLayout(Allinfo);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        teams_combo = new QComboBox(Allinfo);
        teams_combo->setObjectName("teams_combo");
        teams_combo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        horizontalLayout_2->addWidget(teams_combo);

        search_button = new QPushButton(Allinfo);
        search_button->setObjectName("search_button");
        search_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));

        horizontalLayout_2->addWidget(search_button);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_11 = new QLabel(Allinfo);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_12->addWidget(label_11, 0, Qt::AlignLeft);

        label = new QLabel(Allinfo);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_12->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(Allinfo);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout->addWidget(label_10, 0, Qt::AlignLeft);

        stadium = new QLabel(Allinfo);
        stadium->setObjectName("stadium");
        stadium->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout->addWidget(stadium);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(Allinfo);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_4->addWidget(label_2, 0, Qt::AlignLeft);

        seating = new QLabel(Allinfo);
        seating->setObjectName("seating");
        seating->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_4->addWidget(seating);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(Allinfo);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_5->addWidget(label_3, 0, Qt::AlignLeft);

        location = new QLabel(Allinfo);
        location->setObjectName("location");
        location->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_5->addWidget(location);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(Allinfo);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_6->addWidget(label_4, 0, Qt::AlignLeft);

        surface = new QLabel(Allinfo);
        surface->setObjectName("surface");
        surface->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_6->addWidget(surface);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(Allinfo);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_7->addWidget(label_5, 0, Qt::AlignLeft);

        league = new QLabel(Allinfo);
        league->setObjectName("league");
        league->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_7->addWidget(league);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(Allinfo);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_8->addWidget(label_6, 0, Qt::AlignLeft);

        date = new QLabel(Allinfo);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_8->addWidget(date);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(Allinfo);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_9->addWidget(label_7, 0, Qt::AlignLeft);

        distance = new QLabel(Allinfo);
        distance->setObjectName("distance");
        distance->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_9->addWidget(distance);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(Allinfo);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_10->addWidget(label_8, 0, Qt::AlignLeft);

        ballpark = new QLabel(Allinfo);
        ballpark->setObjectName("ballpark");
        ballpark->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_10->addWidget(ballpark);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(Allinfo);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Times New Roman\";\n"
"text-decoration: underline;"));

        horizontalLayout_11->addWidget(label_9, 0, Qt::AlignLeft);

        roof = new QLabel(Allinfo);
        roof->setObjectName("roof");
        roof->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_11->addWidget(roof);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Allinfo);

        QMetaObject::connectSlotsByName(Allinfo);
    } // setupUi

    void retranslateUi(QDialog *Allinfo)
    {
        Allinfo->setWindowTitle(QCoreApplication::translate("Allinfo", "Dialog", nullptr));
        search_button->setText(QCoreApplication::translate("Allinfo", "Search", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class Allinfo: public Ui_Allinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H
