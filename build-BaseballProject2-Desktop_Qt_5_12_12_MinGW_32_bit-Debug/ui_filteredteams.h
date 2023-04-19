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
#include <QtWidgets/QComboBox>
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
    QComboBox *comboBox;
    QLabel *accumulatorLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *filterByTypology_radioButton;
    QRadioButton *filterByOpenRoof_radioButton;
    QRadioButton *filterByDateOpen_radioButton;
    QRadioButton *filterBySeatingCapacity_radioButton;
    QRadioButton *filterByDistancetoCF_radioButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *noFilter_radioButton;
    QRadioButton *filterByTeam_radioButton;
    QRadioButton *filterByStadium_radioButton;
    QRadioButton *filterByAmericanLeague_radioButton;
    QRadioButton *filterByNationalLeague_radioButton;

    void setupUi(QDialog *filteredTeams)
    {
        if (filteredTeams->objectName().isEmpty())
            filteredTeams->setObjectName(QString::fromUtf8("filteredTeams"));
        filteredTeams->resize(1310, 819);
        tableView = new QTableView(filteredTeams);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(90, 0, 1141, 451));
        back_pushButton = new QPushButton(filteredTeams);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 0, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        comboBox = new QComboBox(filteredTeams);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(600, 460, 181, 32));
        accumulatorLabel = new QLabel(filteredTeams);
        accumulatorLabel->setObjectName(QString::fromUtf8("accumulatorLabel"));
        accumulatorLabel->setGeometry(QRect(410, 730, 571, 41));
        widget = new QWidget(filteredTeams);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(680, 500, 551, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        widget1 = new QWidget(filteredTeams);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(93, 500, 571, 201));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        noFilter_radioButton = new QRadioButton(widget1);
        noFilter_radioButton->setObjectName(QString::fromUtf8("noFilter_radioButton"));

        verticalLayout_2->addWidget(noFilter_radioButton);

        filterByTeam_radioButton = new QRadioButton(widget1);
        filterByTeam_radioButton->setObjectName(QString::fromUtf8("filterByTeam_radioButton"));

        verticalLayout_2->addWidget(filterByTeam_radioButton);

        filterByStadium_radioButton = new QRadioButton(widget1);
        filterByStadium_radioButton->setObjectName(QString::fromUtf8("filterByStadium_radioButton"));

        verticalLayout_2->addWidget(filterByStadium_radioButton);

        filterByAmericanLeague_radioButton = new QRadioButton(widget1);
        filterByAmericanLeague_radioButton->setObjectName(QString::fromUtf8("filterByAmericanLeague_radioButton"));

        verticalLayout_2->addWidget(filterByAmericanLeague_radioButton);

        filterByNationalLeague_radioButton = new QRadioButton(widget1);
        filterByNationalLeague_radioButton->setObjectName(QString::fromUtf8("filterByNationalLeague_radioButton"));

        verticalLayout_2->addWidget(filterByNationalLeague_radioButton);


        retranslateUi(filteredTeams);

        QMetaObject::connectSlotsByName(filteredTeams);
    } // setupUi

    void retranslateUi(QDialog *filteredTeams)
    {
        filteredTeams->setWindowTitle(QApplication::translate("filteredTeams", "Dialog", nullptr));
        back_pushButton->setText(QApplication::translate("filteredTeams", "Back", nullptr));
        accumulatorLabel->setText(QString());
        filterByTypology_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadium Sorted by Park Typology", nullptr));
        filterByOpenRoof_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums with Open Roof", nullptr));
        filterByDateOpen_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums in Chronological Order", nullptr));
        filterBySeatingCapacity_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums Sorted by Seating Capacity", nullptr));
        filterByDistancetoCF_radioButton->setText(QApplication::translate("filteredTeams", "Display Stadiums Sorted by Distance to Center", nullptr));
        noFilter_radioButton->setText(QApplication::translate("filteredTeams", "Display with no filter", nullptr));
        filterByTeam_radioButton->setText(QApplication::translate("filteredTeams", "Display Teams Stadium Sorted by Team Name", nullptr));
        filterByStadium_radioButton->setText(QApplication::translate("filteredTeams", "Display Teams Stadium Sorted by Stadium Name", nullptr));
        filterByAmericanLeague_radioButton->setText(QApplication::translate("filteredTeams", "Display American League", nullptr));
        filterByNationalLeague_radioButton->setText(QApplication::translate("filteredTeams", "Display National League", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filteredTeams: public Ui_filteredTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTEREDTEAMS_H
