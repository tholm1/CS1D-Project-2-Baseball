/********************************************************************************
** Form generated from reading UI file 'modifysouvenirs.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSOUVENIRS_H
#define UI_MODIFYSOUVENIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifySouvenirs
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *teamNameAddLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *teamNameAddLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *souvenirNameAddLabel;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *souvenirNameAddLine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *souvenirPriceAddLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *souvenirPriceAddLine;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmAddBtn;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_3;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *stadiumDelComboBox;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QComboBox *stadiumDelComboBox_2;
    QPushButton *delBtn_2;
    QSpacerItem *horizontalSpacer_9;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer_10;
    QTableView *tableView;
    QLabel *accumulatorLabel;

    void setupUi(QDialog *ModifySouvenirs)
    {
        if (ModifySouvenirs->objectName().isEmpty())
            ModifySouvenirs->setObjectName("ModifySouvenirs");
        ModifySouvenirs->resize(808, 669);
        tabWidget = new QTabWidget(ModifySouvenirs);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 60, 741, 451));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 10, 471, 400));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        teamNameAddLabel = new QLabel(layoutWidget);
        teamNameAddLabel->setObjectName("teamNameAddLabel");

        horizontalLayout_5->addWidget(teamNameAddLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        teamNameAddLine = new QLineEdit(layoutWidget);
        teamNameAddLine->setObjectName("teamNameAddLine");

        horizontalLayout_5->addWidget(teamNameAddLine);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        souvenirNameAddLabel = new QLabel(layoutWidget);
        souvenirNameAddLabel->setObjectName("souvenirNameAddLabel");

        horizontalLayout_6->addWidget(souvenirNameAddLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        souvenirNameAddLine = new QLineEdit(layoutWidget);
        souvenirNameAddLine->setObjectName("souvenirNameAddLine");

        horizontalLayout_6->addWidget(souvenirNameAddLine);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        souvenirPriceAddLabel = new QLabel(layoutWidget);
        souvenirPriceAddLabel->setObjectName("souvenirPriceAddLabel");

        horizontalLayout_7->addWidget(souvenirPriceAddLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        souvenirPriceAddLine = new QLineEdit(layoutWidget);
        souvenirPriceAddLine->setObjectName("souvenirPriceAddLine");

        horizontalLayout_7->addWidget(souvenirPriceAddLine);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        confirmAddBtn = new QPushButton(layoutWidget);
        confirmAddBtn->setObjectName("confirmAddBtn");

        horizontalLayout_2->addWidget(confirmAddBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 210, 661, 38));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_15->addWidget(label_2);

        stadiumDelComboBox = new QComboBox(layoutWidget_2);
        stadiumDelComboBox->setObjectName("stadiumDelComboBox");

        horizontalLayout_15->addWidget(stadiumDelComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_8);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 260, 661, 38));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_4);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_16->addWidget(label_3);

        stadiumDelComboBox_2 = new QComboBox(layoutWidget_3);
        stadiumDelComboBox_2->setObjectName("stadiumDelComboBox_2");

        horizontalLayout_16->addWidget(stadiumDelComboBox_2);

        delBtn_2 = new QPushButton(layoutWidget_3);
        delBtn_2->setObjectName("delBtn_2");

        horizontalLayout_16->addWidget(delBtn_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);

        tabWidget->addTab(tab_2, QString());
        layoutWidget_4 = new QWidget(ModifySouvenirs);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(30, 20, 701, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backBtn = new QPushButton(layoutWidget_4);
        backBtn->setObjectName("backBtn");

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        tableView = new QTableView(ModifySouvenirs);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 580, 781, 74));
        accumulatorLabel = new QLabel(ModifySouvenirs);
        accumulatorLabel->setObjectName("accumulatorLabel");
        accumulatorLabel->setGeometry(QRect(10, 540, 781, 20));
        accumulatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        retranslateUi(ModifySouvenirs);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ModifySouvenirs);
    } // setupUi

    void retranslateUi(QDialog *ModifySouvenirs)
    {
        ModifySouvenirs->setWindowTitle(QCoreApplication::translate("ModifySouvenirs", "Modify Souvenirs", nullptr));
        teamNameAddLabel->setText(QCoreApplication::translate("ModifySouvenirs", "Team Name", nullptr));
        teamNameAddLine->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Team Name", nullptr));
        souvenirNameAddLabel->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name", nullptr));
        souvenirNameAddLine->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name", nullptr));
        souvenirPriceAddLabel->setText(QCoreApplication::translate("ModifySouvenirs", " Souvenir Price       ", nullptr));
        souvenirPriceAddLine->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Stadium Price", nullptr));
        confirmAddBtn->setText(QCoreApplication::translate("ModifySouvenirs", "Add Souvenir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ModifySouvenirs", "Add Souvenir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ModifySouvenirs", "Modify Souvenir", nullptr));
        label_2->setText(QCoreApplication::translate("ModifySouvenirs", "Choose Team:", nullptr));
        label_3->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir:", nullptr));
        delBtn_2->setText(QCoreApplication::translate("ModifySouvenirs", "Delete Souvenir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ModifySouvenirs", "Delete Souvenir", nullptr));
        backBtn->setText(QCoreApplication::translate("ModifySouvenirs", "Back", nullptr));
        accumulatorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModifySouvenirs: public Ui_ModifySouvenirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSOUVENIRS_H
