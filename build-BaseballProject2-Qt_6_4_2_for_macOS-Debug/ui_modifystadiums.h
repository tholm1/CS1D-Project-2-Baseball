/********************************************************************************
** Form generated from reading UI file 'modifystadiums.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTADIUMS_H
#define UI_MODIFYSTADIUMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStadiums
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBtn;
    QPushButton *modBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *delBtn;
    QComboBox *comboBox;
    QLabel *accumulatorLabel;
    QTableView *tableView;
    QWidget *page_2;
    QPushButton *addBack;
    QWidget *page_3;
    QPushButton *modBack;

    void setupUi(QDialog *ModifyStadiums)
    {
        if (ModifyStadiums->objectName().isEmpty())
            ModifyStadiums->setObjectName("ModifyStadiums");
        ModifyStadiums->resize(821, 367);
        verticalLayout_2 = new QVBoxLayout(ModifyStadiums);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(ModifyStadiums);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addBtn = new QPushButton(page);
        addBtn->setObjectName("addBtn");

        horizontalLayout_3->addWidget(addBtn);

        modBtn = new QPushButton(page);
        modBtn->setObjectName("modBtn");

        horizontalLayout_3->addWidget(modBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        delBtn = new QPushButton(page);
        delBtn->setObjectName("delBtn");

        horizontalLayout_3->addWidget(delBtn);

        comboBox = new QComboBox(page);
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        accumulatorLabel = new QLabel(page);
        accumulatorLabel->setObjectName("accumulatorLabel");
        accumulatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(accumulatorLabel);

        tableView = new QTableView(page);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        addBack = new QPushButton(page_2);
        addBack->setObjectName("addBack");
        addBack->setGeometry(QRect(30, 10, 100, 32));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        modBack = new QPushButton(page_3);
        modBack->setObjectName("modBack");
        modBack->setGeometry(QRect(40, 20, 100, 32));
        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(ModifyStadiums);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModifyStadiums);
    } // setupUi

    void retranslateUi(QDialog *ModifyStadiums)
    {
        ModifyStadiums->setWindowTitle(QCoreApplication::translate("ModifyStadiums", "Modify Stadiums", nullptr));
        pushButton->setText(QCoreApplication::translate("ModifyStadiums", "Back", nullptr));
        addBtn->setText(QCoreApplication::translate("ModifyStadiums", "Add Stadium", nullptr));
        modBtn->setText(QCoreApplication::translate("ModifyStadiums", "Modify Stadium", nullptr));
        delBtn->setText(QCoreApplication::translate("ModifyStadiums", "Delete Stadium", nullptr));
        accumulatorLabel->setText(QString());
        addBack->setText(QCoreApplication::translate("ModifyStadiums", "Back", nullptr));
        modBack->setText(QCoreApplication::translate("ModifyStadiums", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyStadiums: public Ui_ModifyStadiums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTADIUMS_H
