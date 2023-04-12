/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *username_label;
    QLineEdit *username_LineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password_label;
    QLineEdit *password_LineEdit;
    QPushButton *login_pushButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(648, 261);
        gridLayout_2 = new QGridLayout(login);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        username_label = new QLabel(login);
        username_label->setObjectName(QString::fromUtf8("username_label"));

        horizontalLayout->addWidget(username_label);

        username_LineEdit = new QLineEdit(login);
        username_LineEdit->setObjectName(QString::fromUtf8("username_LineEdit"));

        horizontalLayout->addWidget(username_LineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        password_label = new QLabel(login);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        horizontalLayout_2->addWidget(password_label);

        password_LineEdit = new QLineEdit(login);
        password_LineEdit->setObjectName(QString::fromUtf8("password_LineEdit"));
        password_LineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password_LineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        login_pushButton = new QPushButton(login);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));

        gridLayout->addWidget(login_pushButton, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        username_label->setText(QApplication::translate("login", "Username:", nullptr));
        password_label->setText(QApplication::translate("login", "Password:", nullptr));
        login_pushButton->setText(QApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
