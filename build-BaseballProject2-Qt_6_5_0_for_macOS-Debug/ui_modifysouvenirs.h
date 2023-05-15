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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifySouvenirs
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *team_comboBox;
    QLineEdit *souvName_lineEdit;
    QLineEdit *souvPrice_lineEdit;
    QPushButton *addSouvButton;
    QPushButton *addSouvenirFileButton;
    QLabel *errorLabel;
    QWidget *tab_3;
    QPushButton *modifySouvenirButton;
    QLineEdit *souvPrice_lineEdit_2;
    QLabel *label_6;
    QComboBox *team2_comboBox;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *souv2_lineEdit;
    QWidget *tab_2;
    QPushButton *deleteSouvenir_pushButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *team3_comboBox;
    QLineEdit *souv_lineEdit;
    QPushButton *backButton;

    void setupUi(QDialog *ModifySouvenirs)
    {
        if (ModifySouvenirs->objectName().isEmpty())
            ModifySouvenirs->setObjectName("ModifySouvenirs");
        ModifySouvenirs->resize(889, 540);
        tabWidget = new QTabWidget(ModifySouvenirs);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(40, 50, 781, 441));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 80, 91, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(207, 120, 101, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 170, 121, 20));
        team_comboBox = new QComboBox(tab);
        team_comboBox->setObjectName("team_comboBox");
        team_comboBox->setGeometry(QRect(322, 70, 201, 32));
        souvName_lineEdit = new QLineEdit(tab);
        souvName_lineEdit->setObjectName("souvName_lineEdit");
        souvName_lineEdit->setGeometry(QRect(330, 120, 181, 21));
        souvPrice_lineEdit = new QLineEdit(tab);
        souvPrice_lineEdit->setObjectName("souvPrice_lineEdit");
        souvPrice_lineEdit->setGeometry(QRect(330, 170, 181, 21));
        addSouvButton = new QPushButton(tab);
        addSouvButton->setObjectName("addSouvButton");
        addSouvButton->setGeometry(QRect(270, 210, 161, 32));
        addSouvenirFileButton = new QPushButton(tab);
        addSouvenirFileButton->setObjectName("addSouvenirFileButton");
        addSouvenirFileButton->setGeometry(QRect(270, 250, 161, 32));
        errorLabel = new QLabel(tab);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(130, 160, 8, 213));
        errorLabel->setStyleSheet(QString::fromUtf8("color: #df4f4a;"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        modifySouvenirButton = new QPushButton(tab_3);
        modifySouvenirButton->setObjectName("modifySouvenirButton");
        modifySouvenirButton->setGeometry(QRect(350, 200, 141, 32));
        souvPrice_lineEdit_2 = new QLineEdit(tab_3);
        souvPrice_lineEdit_2->setObjectName("souvPrice_lineEdit_2");
        souvPrice_lineEdit_2->setGeometry(QRect(370, 150, 171, 21));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 150, 41, 20));
        team2_comboBox = new QComboBox(tab_3);
        team2_comboBox->setObjectName("team2_comboBox");
        team2_comboBox->setGeometry(QRect(360, 60, 191, 32));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 60, 91, 20));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 110, 71, 20));
        souv2_lineEdit = new QLineEdit(tab_3);
        souv2_lineEdit->setObjectName("souv2_lineEdit");
        souv2_lineEdit->setGeometry(QRect(370, 110, 171, 21));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        deleteSouvenir_pushButton = new QPushButton(tab_2);
        deleteSouvenir_pushButton->setObjectName("deleteSouvenir_pushButton");
        deleteSouvenir_pushButton->setGeometry(QRect(310, 220, 141, 32));
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 80, 58, 21));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 140, 81, 21));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(320, 70, 211, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        team3_comboBox = new QComboBox(layoutWidget);
        team3_comboBox->setObjectName("team3_comboBox");

        verticalLayout->addWidget(team3_comboBox);

        souv_lineEdit = new QLineEdit(layoutWidget);
        souv_lineEdit->setObjectName("souv_lineEdit");

        verticalLayout->addWidget(souv_lineEdit);

        tabWidget->addTab(tab_2, QString());
        backButton = new QPushButton(ModifySouvenirs);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 10, 100, 32));

        retranslateUi(ModifySouvenirs);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModifySouvenirs);
    } // setupUi

    void retranslateUi(QDialog *ModifySouvenirs)
    {
        ModifySouvenirs->setWindowTitle(QCoreApplication::translate("ModifySouvenirs", "Modify Souvenirs", nullptr));
        label_3->setText(QCoreApplication::translate("ModifySouvenirs", "Team Name:", nullptr));
        label_4->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name:", nullptr));
        label_5->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Price:", nullptr));
        souvName_lineEdit->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name", nullptr));
        souvPrice_lineEdit->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Price", nullptr));
        addSouvButton->setText(QCoreApplication::translate("ModifySouvenirs", "Add Souvenir", nullptr));
        addSouvenirFileButton->setText(QCoreApplication::translate("ModifySouvenirs", "Add Souvenir Input File", nullptr));
        errorLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ModifySouvenirs", "Add Souvenir", nullptr));
        modifySouvenirButton->setText(QCoreApplication::translate("ModifySouvenirs", "Modify Souvenir", nullptr));
        souvPrice_lineEdit_2->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Price", nullptr));
        label_6->setText(QCoreApplication::translate("ModifySouvenirs", "Price:", nullptr));
        label_7->setText(QCoreApplication::translate("ModifySouvenirs", "Team Name:", nullptr));
        label_8->setText(QCoreApplication::translate("ModifySouvenirs", "Souvenir:", nullptr));
        souv2_lineEdit->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ModifySouvenirs", "Modify Souvenir", nullptr));
        deleteSouvenir_pushButton->setText(QCoreApplication::translate("ModifySouvenirs", "Delete Souvenir", nullptr));
        label->setText(QCoreApplication::translate("ModifySouvenirs", "<html><head/><body><p><span style=\" font-size:18pt;\">Team:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ModifySouvenirs", "<html><head/><body><p><span style=\" font-size:18pt;\">Souvenir:</span></p></body></html>", nullptr));
        souv_lineEdit->setPlaceholderText(QCoreApplication::translate("ModifySouvenirs", "Souvenir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ModifySouvenirs", "Delete Souvenir", nullptr));
        backButton->setText(QCoreApplication::translate("ModifySouvenirs", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifySouvenirs: public Ui_ModifySouvenirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSOUVENIRS_H
