/********************************************************************************
** Form generated from reading UI file 'filteredteams.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *noFilter_radioButton;
    QRadioButton *filterByAmericanLeague_radioButton;
    QRadioButton *filterByNationalLeague_radioButton;
    QRadioButton *filterByTypology_radioButton;
    QRadioButton *filterByOpenRoof_radioButton;
    QRadioButton *filterByDateOpen_radioButton;
    QRadioButton *filterBySeatingCapacity_radioButton;
    QRadioButton *filterByDistancetoCF_radioButton;

    void setupUi(QDialog *filteredTeams)
    {
        if (filteredTeams->objectName().isEmpty())
            filteredTeams->setObjectName(QString::fromUtf8("filteredTeams"));
        filteredTeams->resize(1899, 755);
        tableView = new QTableView(filteredTeams);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(550, 80, 1311, 631));
        back_pushButton = new QPushButton(filteredTeams);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 0, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        accumulatorLabel = new QLabel(filteredTeams);
        accumulatorLabel->setObjectName(QString::fromUtf8("accumulatorLabel"));
        accumulatorLabel->setGeometry(QRect(550, 30, 1301, 41));
        widget = new QWidget(filteredTeams);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 541, 631));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        noFilter_radioButton = new QRadioButton(widget);
        noFilter_radioButton->setObjectName(QString::fromUtf8("noFilter_radioButton"));

        verticalLayout->addWidget(noFilter_radioButton);

        filterByAmericanLeague_radioButton = new QRadioButton(widget);
        filterByAmericanLeague_radioButton->setObjectName(QString::fromUtf8("filterByAmericanLeague_radioButton"));

        verticalLayout->addWidget(filterByAmericanLeague_radioButton);

        filterByNationalLeague_radioButton = new QRadioButton(widget);
        filterByNationalLeague_radioButton->setObjectName(QString::fromUtf8("filterByNationalLeague_radioButton"));

        verticalLayout->addWidget(filterByNationalLeague_radioButton);

        filterByTypology_radioButton = new QRadioButton(widget);
        filterByTypology_radioButton->setObjectName(QString::fromUtf8("filterByTypology_radioButton"));

        verticalLayout->addWidget(filterByTypology_radioButton);

        filterByOpenRoof_radioButton = new QRadioButton(widget);
        filterByOpenRoof_radioButton->setObjectName(QString::fromUtf8("filterByOpenRoof_radioButton"));

        verticalLayout->addWidget(filterByOpenRoof_radioButton);

        filterByDateOpen_radioButton = new QRadioButton(widget);
        filterByDateOpen_radioButton->setObjectName(QString::fromUtf8("filterByDateOpen_radioButton"));

        verticalLayout->addWidget(filterByDateOpen_radioButton);

        filterBySeatingCapacity_radioButton = new QRadioButton(widget);
        filterBySeatingCapacity_radioButton->setObjectName(QString::fromUtf8("filterBySeatingCapacity_radioButton"));

        verticalLayout->addWidget(filterBySeatingCapacity_radioButton);

        filterByDistancetoCF_radioButton = new QRadioButton(widget);
        filterByDistancetoCF_radioButton->setObjectName(QString::fromUtf8("filterByDistancetoCF_radioButton"));

        verticalLayout->addWidget(filterByDistancetoCF_radioButton);


        retranslateUi(filteredTeams);

        QMetaObject::connectSlotsByName(filteredTeams);
    } // setupUi

    void retranslateUi(QDialog *filteredTeams)
    {
        filteredTeams->setWindowTitle(QApplication::translate("filteredTeams", "Dialog", nullptr));
        back_pushButton->setText(QApplication::translate("filteredTeams", "Back", nullptr));
        accumulatorLabel->setText(QString());
        noFilter_radioButton->setText(QApplication::translate("filteredTeams", "Display with no filter", nullptr));
        filterByAmericanLeague_radioButton->setText(QApplication::translate("filteredTeams", "Display American League", nullptr));
        filterByNationalLeague_radioButton->setText(QApplication::translate("filteredTeams", "Display National League", nullptr));
        filterByTypology_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadium sorted by park typology", nullptr));
        filterByOpenRoof_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums with open roof types", nullptr));
        filterByDateOpen_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums by date opened", nullptr));
        filterBySeatingCapacity_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums sorted by seating capacity", nullptr));
        filterByDistancetoCF_radioButton->setText(QApplication::translate("filteredTeams", "Display stadiums sorted by distance to center field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filteredTeams: public Ui_filteredTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTEREDTEAMS_H
