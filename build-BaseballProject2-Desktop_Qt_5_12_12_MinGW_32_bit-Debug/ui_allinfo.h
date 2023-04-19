/********************************************************************************
** Form generated from reading UI file 'allinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINFO_H
#define UI_ALLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Allinfo
{
public:
    QComboBox *teams_combo;
    QLabel *name_label;
    QPushButton *search_button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *stadium;
    QLabel *surface;
    QLabel *distance;
    QLabel *seating;
    QLabel *league;
    QLabel *ballpark;
    QLabel *location;
    QLabel *date;
    QLabel *roof;

    void setupUi(QDialog *Allinfo)
    {
        if (Allinfo->objectName().isEmpty())
            Allinfo->setObjectName(QString::fromUtf8("Allinfo"));
        Allinfo->resize(718, 438);
        teams_combo = new QComboBox(Allinfo);
        teams_combo->setObjectName(QString::fromUtf8("teams_combo"));
        teams_combo->setGeometry(QRect(20, 20, 261, 21));
        name_label = new QLabel(Allinfo);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(40, 50, 331, 31));
        name_label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        search_button = new QPushButton(Allinfo);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(290, 20, 80, 22));
        label = new QLabel(Allinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 90, 91, 16));
        label_2 = new QLabel(Allinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 190, 101, 16));
        label_3 = new QLabel(Allinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 290, 51, 16));
        label_4 = new QLabel(Allinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 90, 111, 16));
        label_5 = new QLabel(Allinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 190, 81, 16));
        label_6 = new QLabel(Allinfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 290, 71, 16));
        label_7 = new QLabel(Allinfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 90, 121, 16));
        label_8 = new QLabel(Allinfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(550, 190, 111, 16));
        label_9 = new QLabel(Allinfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(560, 300, 81, 16));
        stadium = new QLabel(Allinfo);
        stadium->setObjectName(QString::fromUtf8("stadium"));
        stadium->setGeometry(QRect(100, 130, 91, 16));
        surface = new QLabel(Allinfo);
        surface->setObjectName(QString::fromUtf8("surface"));
        surface->setGeometry(QRect(320, 130, 45, 15));
        distance = new QLabel(Allinfo);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(570, 130, 45, 15));
        seating = new QLabel(Allinfo);
        seating->setObjectName(QString::fromUtf8("seating"));
        seating->setGeometry(QRect(100, 230, 45, 15));
        league = new QLabel(Allinfo);
        league->setObjectName(QString::fromUtf8("league"));
        league->setGeometry(QRect(310, 230, 45, 15));
        ballpark = new QLabel(Allinfo);
        ballpark->setObjectName(QString::fromUtf8("ballpark"));
        ballpark->setGeometry(QRect(570, 230, 81, 16));
        location = new QLabel(Allinfo);
        location->setObjectName(QString::fromUtf8("location"));
        location->setGeometry(QRect(90, 340, 121, 16));
        date = new QLabel(Allinfo);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(320, 340, 45, 15));
        roof = new QLabel(Allinfo);
        roof->setObjectName(QString::fromUtf8("roof"));
        roof->setGeometry(QRect(570, 340, 45, 15));

        retranslateUi(Allinfo);

        QMetaObject::connectSlotsByName(Allinfo);
    } // setupUi

    void retranslateUi(QDialog *Allinfo)
    {
        Allinfo->setWindowTitle(QApplication::translate("Allinfo", "Dialog", nullptr));
        name_label->setText(QApplication::translate("Allinfo", "Database", nullptr));
        search_button->setText(QApplication::translate("Allinfo", "Search", nullptr));
        label->setText(QApplication::translate("Allinfo", "Stadium Name", nullptr));
        label_2->setText(QApplication::translate("Allinfo", "Seating Capacity", nullptr));
        label_3->setText(QApplication::translate("Allinfo", "Location", nullptr));
        label_4->setText(QApplication::translate("Allinfo", "Playing Surface", nullptr));
        label_5->setText(QApplication::translate("Allinfo", "League", nullptr));
        label_6->setText(QApplication::translate("Allinfo", "Date Opened", nullptr));
        label_7->setText(QApplication::translate("Allinfo", "Distance to center field", nullptr));
        label_8->setText(QApplication::translate("Allinfo", "Ballpark typology", nullptr));
        label_9->setText(QApplication::translate("Allinfo", "Roof type", nullptr));
        stadium->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        surface->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        distance->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        seating->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        league->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        ballpark->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        location->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        date->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
        roof->setText(QApplication::translate("Allinfo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Allinfo: public Ui_Allinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H
