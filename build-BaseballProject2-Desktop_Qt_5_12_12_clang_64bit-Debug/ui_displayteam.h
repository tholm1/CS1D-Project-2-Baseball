/********************************************************************************
** Form generated from reading UI file 'displayteam.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYTEAM_H
#define UI_DISPLAYTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayTeam
{
public:
    QPushButton *back_pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *displayAllInfo;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;

    void setupUi(QDialog *displayTeam)
    {
        if (displayTeam->objectName().isEmpty())
            displayTeam->setObjectName(QString::fromUtf8("displayTeam"));
        displayTeam->resize(875, 540);
        back_pushButton = new QPushButton(displayTeam);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(20, 10, 80, 22));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        layoutWidget = new QWidget(displayTeam);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 10, 651, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        displayAllInfo = new QPushButton(layoutWidget);
        displayAllInfo->setObjectName(QString::fromUtf8("displayAllInfo"));

        verticalLayout->addWidget(displayAllInfo);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);


        retranslateUi(displayTeam);

        QMetaObject::connectSlotsByName(displayTeam);
    } // setupUi

    void retranslateUi(QDialog *displayTeam)
    {
        displayTeam->setWindowTitle(QApplication::translate("displayTeam", "Dialog", nullptr));
        back_pushButton->setText(QApplication::translate("displayTeam", "Back", nullptr));
        displayAllInfo->setText(QApplication::translate("displayTeam", "Display all information", nullptr));
        pushButton_2->setText(QApplication::translate("displayTeam", "Display Major League teams by team name", nullptr));
        pushButton_3->setText(QApplication::translate("displayTeam", "Display Major League teams by stadium name", nullptr));
        pushButton_4->setText(QApplication::translate("displayTeam", "Display American League teams by team name", nullptr));
        pushButton_5->setText(QApplication::translate("displayTeam", "Display National League teams by stadium name", nullptr));
        pushButton_6->setText(QApplication::translate("displayTeam", "Display teams by park typology", nullptr));
        pushButton_7->setText(QApplication::translate("displayTeam", "Display teams by open roof type", nullptr));
        pushButton_8->setText(QApplication::translate("displayTeam", "Display teams by date opened", nullptr));
        pushButton_10->setText(QApplication::translate("displayTeam", "Display teams by distance to center field", nullptr));
        pushButton_9->setText(QApplication::translate("displayTeam", "Display teams by seating capacity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayTeam: public Ui_displayTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTEAM_H
