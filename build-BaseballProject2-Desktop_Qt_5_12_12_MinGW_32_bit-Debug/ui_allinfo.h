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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Allinfo
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *teams_combo;
    QPushButton *search_button;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *stadium;
    QLabel *label_2;
    QLabel *seating;
    QLabel *label_3;
    QLabel *location;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *surface;
    QLabel *label_5;
    QLabel *league;
    QLabel *label_6;
    QLabel *date;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *distance;
    QLabel *label_8;
    QLabel *ballpark;
    QLabel *label_9;
    QLabel *roof;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLabel *label;

    void setupUi(QDialog *Allinfo)
    {
        if (Allinfo->objectName().isEmpty())
            Allinfo->setObjectName(QString::fromUtf8("Allinfo"));
        Allinfo->resize(890, 491);
        widget = new QWidget(Allinfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 30, 691, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        teams_combo = new QComboBox(widget);
        teams_combo->setObjectName(QString::fromUtf8("teams_combo"));

        horizontalLayout_2->addWidget(teams_combo);

        search_button = new QPushButton(widget);
        search_button->setObjectName(QString::fromUtf8("search_button"));

        horizontalLayout_2->addWidget(search_button);

        widget1 = new QWidget(Allinfo);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 130, 861, 361));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_10);

        stadium = new QLabel(widget1);
        stadium->setObjectName(QString::fromUtf8("stadium"));
        stadium->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout->addWidget(stadium);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_2);

        seating = new QLabel(widget1);
        seating->setObjectName(QString::fromUtf8("seating"));
        seating->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout->addWidget(seating);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        location = new QLabel(widget1);
        location->setObjectName(QString::fromUtf8("location"));
        location->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout->addWidget(location);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_4);

        surface = new QLabel(widget1);
        surface->setObjectName(QString::fromUtf8("surface"));
        surface->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_2->addWidget(surface);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_5);

        league = new QLabel(widget1);
        league->setObjectName(QString::fromUtf8("league"));
        league->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_2->addWidget(league);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_6);

        date = new QLabel(widget1);
        date->setObjectName(QString::fromUtf8("date"));
        date->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_2->addWidget(date);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_7);

        distance = new QLabel(widget1);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_3->addWidget(distance);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_8);

        ballpark = new QLabel(widget1);
        ballpark->setObjectName(QString::fromUtf8("ballpark"));
        ballpark->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_3->addWidget(ballpark);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_9);

        roof = new QLabel(widget1);
        roof->setObjectName(QString::fromUtf8("roof"));
        roof->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        verticalLayout_3->addWidget(roof);


        horizontalLayout->addLayout(verticalLayout_3);

        widget2 = new QWidget(Allinfo);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 90, 481, 41));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_11);

        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 12pt \"MS Sans Serif\";"));

        horizontalLayout_3->addWidget(label);


        retranslateUi(Allinfo);

        QMetaObject::connectSlotsByName(Allinfo);
    } // setupUi

    void retranslateUi(QDialog *Allinfo)
    {
        Allinfo->setWindowTitle(QApplication::translate("Allinfo", "Dialog", nullptr));
        search_button->setText(QApplication::translate("Allinfo", "Search", nullptr));
        label_10->setText(QApplication::translate("Allinfo", "Stadium Name", nullptr));
        stadium->setText(QString());
        label_2->setText(QApplication::translate("Allinfo", "Seating Capacity", nullptr));
        seating->setText(QString());
        label_3->setText(QApplication::translate("Allinfo", "Location", nullptr));
        location->setText(QString());
        label_4->setText(QApplication::translate("Allinfo", "Playing Surface", nullptr));
        surface->setText(QString());
        label_5->setText(QApplication::translate("Allinfo", "League", nullptr));
        league->setText(QString());
        label_6->setText(QApplication::translate("Allinfo", "Date Opened", nullptr));
        date->setText(QString());
        label_7->setText(QApplication::translate("Allinfo", "Distance to center field", nullptr));
        distance->setText(QString());
        label_8->setText(QApplication::translate("Allinfo", "Ballpark typology", nullptr));
        ballpark->setText(QString());
        label_9->setText(QApplication::translate("Allinfo", "Roof type", nullptr));
        roof->setText(QString());
        label_11->setText(QApplication::translate("Allinfo", "Team Name:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Allinfo: public Ui_Allinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H
