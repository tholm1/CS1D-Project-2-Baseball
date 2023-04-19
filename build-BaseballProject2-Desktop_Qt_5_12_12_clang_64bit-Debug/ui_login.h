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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLineEdit *username_LineEdit;
    QFrame *line;
    QLineEdit *password_LineEdit;
    QFrame *line_3;
    QSpacerItem *verticalSpacer;
    QPushButton *login_pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(332, 519);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 334, 520));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        widget->setStyleSheet(QString::fromUtf8(".QWidget{background-color: rgb(0, 0, 127);}\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 15, -1, -1);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(175, 105));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/baselogo.png);"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(50, 35, 59, -1);
        username_LineEdit = new QLineEdit(widget);
        username_LineEdit->setObjectName(QString::fromUtf8("username_LineEdit"));
        username_LineEdit->setMinimumSize(QSize(0, 40));
        username_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                                                                color: rgb(231, 231, 231);\n"
"                                                                font: 15pt \"Verdana\";\n"
"                                                                border: None;\n"
"                                                                border-bottom-color: white;\n"
"                                                                border-radius: 10px;\n"
"                                                                padding: 0 8px;\n"
"                                                                background: rgb(25, 25, 40);\n"
"                                                                selection-background-color: darkgray;\n"
"                                                                }"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, username_LineEdit);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, line);

        password_LineEdit = new QLineEdit(widget);
        password_LineEdit->setObjectName(QString::fromUtf8("password_LineEdit"));
        password_LineEdit->setMinimumSize(QSize(0, 40));
        password_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                                                                color: rgb(231, 231, 231);\n"
"                                                                font: 15pt \"Verdana\";\n"
"                                                                border: None;\n"
"                                                                border-bottom-color: white;\n"
"                                                                border-radius: 10px;\n"
"                                                                padding: 0 8px;\n"
"                                                                background: rgb(25, 25, 40);\n"
"                                                                selection-background-color: darkgray;\n"
"                                                                }"));
        password_LineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, password_LineEdit);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, line_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(6, QFormLayout::SpanningRole, verticalSpacer);

        login_pushButton = new QPushButton(widget);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login_pushButton->sizePolicy().hasHeightForWidth());
        login_pushButton->setSizePolicy(sizePolicy);
        login_pushButton->setMinimumSize(QSize(0, 60));
        login_pushButton->setAutoFillBackground(false);
        login_pushButton->setStyleSheet(QString::fromUtf8("color: rgb(231, 231, 231);\n"
"                                                                font: 17pt \"Verdana\";\n"
"                                                                border: 2px solid orange;\n"
"                                                                padding: 5px;\n"
"                                                                border-radius: 3px;\n"
"                                                                opacity: 200;\n"
"                                                            "));
        login_pushButton->setAutoDefault(false);
        login_pushButton->setFlat(false);

        formLayout_2->setWidget(7, QFormLayout::SpanningRole, login_pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(231, 231, 231);\n"
"                                                                font: 17pt \"Verdana\";\n"
"                                                                border: 2px solid orange;\n"
"                                                                padding: 5px;\n"
"                                                                border-radius: 3px;\n"
"                                                                opacity: 200;\n"
"                                                            "));
        pushButton_2->setFlat(false);

        formLayout_2->setWidget(8, QFormLayout::SpanningRole, pushButton_2);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addWidget(widget);

        horizontalLayout_3->setStretch(0, 1);

        retranslateUi(login);

        login_pushButton->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        label->setText(QString());
        username_LineEdit->setPlaceholderText(QApplication::translate("login", "USERNAME", nullptr));
        password_LineEdit->setText(QString());
        password_LineEdit->setPlaceholderText(QApplication::translate("login", "PASSWORD", nullptr));
        login_pushButton->setText(QApplication::translate("login", "Sign In", nullptr));
        pushButton_2->setText(QApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
