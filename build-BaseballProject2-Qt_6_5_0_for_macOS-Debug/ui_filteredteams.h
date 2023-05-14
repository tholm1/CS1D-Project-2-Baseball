/********************************************************************************
** Form generated from reading UI file 'filteredteams.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTEREDTEAMS_H
#define UI_FILTEREDTEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filteredTeams
{
public:
    QTableView *tableView;
    QPushButton *back_pushButton;
    QLabel *accumulatorLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *noFilter_radioButton;
    QRadioButton *filterByAmericanLeague_radioButton;
    QRadioButton *filterByNationalLeague_radioButton;
    QRadioButton *filterByTypology_radioButton;
    QRadioButton *filterByOpenRoof_radioButton;
    QRadioButton *filterByDateOpen_radioButton;
    QRadioButton *filterBySeatingCapacity_radioButton;
    QRadioButton *filterByDistancetoCF_radioButton;
    QPushButton *filterMaxMin;

    void setupUi(QDialog *filteredTeams)
    {
        if (filteredTeams->objectName().isEmpty())
            filteredTeams->setObjectName("filteredTeams");
        filteredTeams->resize(1618, 755);
        filteredTeams->setStyleSheet(QString::fromUtf8(""));
        tableView = new QTableView(filteredTeams);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(400, 80, 1101, 631));
        tableView->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 101, 101);\n"
"\n"
""));
        back_pushButton = new QPushButton(filteredTeams);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(0, 0, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        accumulatorLabel = new QLabel(filteredTeams);
        accumulatorLabel->setObjectName("accumulatorLabel");
        accumulatorLabel->setGeometry(QRect(740, 30, 591, 41));
        accumulatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
        layoutWidget = new QWidget(filteredTeams);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 80, 391, 631));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        noFilter_radioButton = new QRadioButton(layoutWidget);
        noFilter_radioButton->setObjectName("noFilter_radioButton");

        verticalLayout->addWidget(noFilter_radioButton);

        filterByAmericanLeague_radioButton = new QRadioButton(layoutWidget);
        filterByAmericanLeague_radioButton->setObjectName("filterByAmericanLeague_radioButton");

        verticalLayout->addWidget(filterByAmericanLeague_radioButton);

        filterByNationalLeague_radioButton = new QRadioButton(layoutWidget);
        filterByNationalLeague_radioButton->setObjectName("filterByNationalLeague_radioButton");

        verticalLayout->addWidget(filterByNationalLeague_radioButton);

        filterByTypology_radioButton = new QRadioButton(layoutWidget);
        filterByTypology_radioButton->setObjectName("filterByTypology_radioButton");

        verticalLayout->addWidget(filterByTypology_radioButton);

        filterByOpenRoof_radioButton = new QRadioButton(layoutWidget);
        filterByOpenRoof_radioButton->setObjectName("filterByOpenRoof_radioButton");

        verticalLayout->addWidget(filterByOpenRoof_radioButton);

        filterByDateOpen_radioButton = new QRadioButton(layoutWidget);
        filterByDateOpen_radioButton->setObjectName("filterByDateOpen_radioButton");

        verticalLayout->addWidget(filterByDateOpen_radioButton);

        filterBySeatingCapacity_radioButton = new QRadioButton(layoutWidget);
        filterBySeatingCapacity_radioButton->setObjectName("filterBySeatingCapacity_radioButton");

        verticalLayout->addWidget(filterBySeatingCapacity_radioButton);

        filterByDistancetoCF_radioButton = new QRadioButton(layoutWidget);
        filterByDistancetoCF_radioButton->setObjectName("filterByDistancetoCF_radioButton");

        verticalLayout->addWidget(filterByDistancetoCF_radioButton);

        filterMaxMin = new QPushButton(layoutWidget);
        filterMaxMin->setObjectName("filterMaxMin");

        verticalLayout->addWidget(filterMaxMin);


        retranslateUi(filteredTeams);

        QMetaObject::connectSlotsByName(filteredTeams);
    } // setupUi

    void retranslateUi(QDialog *filteredTeams)
    {
        filteredTeams->setWindowTitle(QCoreApplication::translate("filteredTeams", "Dialog", nullptr));
        back_pushButton->setText(QCoreApplication::translate("filteredTeams", "Back", nullptr));
        accumulatorLabel->setText(QString());
        noFilter_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display with no filter", nullptr));
        filterByAmericanLeague_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display American League", nullptr));
        filterByNationalLeague_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display National League", nullptr));
        filterByTypology_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display Stadium sorted by park typology", nullptr));
        filterByOpenRoof_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display Stadiums with open roof types", nullptr));
        filterByDateOpen_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display Stadiums by date opened", nullptr));
        filterBySeatingCapacity_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display Stadiums sorted by seating capacity", nullptr));
        filterByDistancetoCF_radioButton->setText(QCoreApplication::translate("filteredTeams", "Display stadiums sorted by distance to center field", nullptr));
        filterMaxMin->setText(QCoreApplication::translate("filteredTeams", "Max/Min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filteredTeams: public Ui_filteredTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTEREDTEAMS_H
