/********************************************************************************
** Form generated from reading UI file 'graphtraversals.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHTRAVERSALS_H
#define UI_GRAPHTRAVERSALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphTraversals
{
public:
    QPushButton *back_pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Label_GraphTraversals;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *PushButton_CalcDFS;
    QPushButton *PushButton_CalcBFS;
    QPushButton *PushButton_ViewMSTButton;
    QLabel *Label_TraversalType;
    QLabel *label;
    QTableView *souv_tableView;
    QTableView *souvCart_tableView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *total;
    QComboBox *teamSouvenir_comboBox;
    QSpinBox *quantity_spinBox;
    QPushButton *addToCartpushButton;
    QComboBox *allteams_comboBox;

    void setupUi(QDialog *GraphTraversals)
    {
        if (GraphTraversals->objectName().isEmpty())
            GraphTraversals->setObjectName("GraphTraversals");
        GraphTraversals->resize(1045, 736);
        back_pushButton = new QPushButton(GraphTraversals);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(0, 0, 101, 31));
        back_pushButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(167, 167, 167);"));
        layoutWidget = new QWidget(GraphTraversals);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 30, 1041, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Label_GraphTraversals = new QLabel(layoutWidget);
        Label_GraphTraversals->setObjectName("Label_GraphTraversals");
        QFont font;
        font.setPointSize(16);
        Label_GraphTraversals->setFont(font);
        Label_GraphTraversals->setStyleSheet(QString::fromUtf8(""));
        Label_GraphTraversals->setFrameShape(QFrame::Box);
        Label_GraphTraversals->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label_GraphTraversals);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PushButton_CalcDFS = new QPushButton(layoutWidget);
        PushButton_CalcDFS->setObjectName("PushButton_CalcDFS");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PushButton_CalcDFS->sizePolicy().hasHeightForWidth());
        PushButton_CalcDFS->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        PushButton_CalcDFS->setFont(font1);
        PushButton_CalcDFS->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(PushButton_CalcDFS);

        PushButton_CalcBFS = new QPushButton(layoutWidget);
        PushButton_CalcBFS->setObjectName("PushButton_CalcBFS");
        sizePolicy.setHeightForWidth(PushButton_CalcBFS->sizePolicy().hasHeightForWidth());
        PushButton_CalcBFS->setSizePolicy(sizePolicy);
        PushButton_CalcBFS->setFont(font1);
        PushButton_CalcBFS->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(PushButton_CalcBFS);

        PushButton_ViewMSTButton = new QPushButton(layoutWidget);
        PushButton_ViewMSTButton->setObjectName("PushButton_ViewMSTButton");
        sizePolicy.setHeightForWidth(PushButton_ViewMSTButton->sizePolicy().hasHeightForWidth());
        PushButton_ViewMSTButton->setSizePolicy(sizePolicy);
        PushButton_ViewMSTButton->setFont(font1);
        PushButton_ViewMSTButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(PushButton_ViewMSTButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        Label_TraversalType = new QLabel(layoutWidget);
        Label_TraversalType->setObjectName("Label_TraversalType");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        Label_TraversalType->setFont(font2);
        Label_TraversalType->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"color:rgb(0, 0, 0)"));
        Label_TraversalType->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(Label_TraversalType);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(GraphTraversals);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 140, 161, 41));
        souv_tableView = new QTableView(GraphTraversals);
        souv_tableView->setObjectName("souv_tableView");
        souv_tableView->setGeometry(QRect(50, 230, 256, 361));
        souvCart_tableView = new QTableView(GraphTraversals);
        souvCart_tableView->setObjectName("souvCart_tableView");
        souvCart_tableView->setGeometry(QRect(430, 231, 256, 361));
        label_2 = new QLabel(GraphTraversals);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 170, 161, 41));
        label_3 = new QLabel(GraphTraversals);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 610, 101, 41));
        total = new QLabel(GraphTraversals);
        total->setObjectName("total");
        total->setGeometry(QRect(570, 620, 91, 21));
        teamSouvenir_comboBox = new QComboBox(GraphTraversals);
        teamSouvenir_comboBox->setObjectName("teamSouvenir_comboBox");
        teamSouvenir_comboBox->setGeometry(QRect(50, 600, 191, 32));
        quantity_spinBox = new QSpinBox(GraphTraversals);
        quantity_spinBox->setObjectName("quantity_spinBox");
        quantity_spinBox->setGeometry(QRect(250, 600, 42, 31));
        addToCartpushButton = new QPushButton(GraphTraversals);
        addToCartpushButton->setObjectName("addToCartpushButton");
        addToCartpushButton->setGeometry(QRect(80, 650, 191, 32));
        allteams_comboBox = new QComboBox(GraphTraversals);
        allteams_comboBox->setObjectName("allteams_comboBox");
        allteams_comboBox->setGeometry(QRect(42, 190, 271, 32));

        retranslateUi(GraphTraversals);

        QMetaObject::connectSlotsByName(GraphTraversals);
    } // setupUi

    void retranslateUi(QDialog *GraphTraversals)
    {
        GraphTraversals->setWindowTitle(QCoreApplication::translate("GraphTraversals", "Dialog", nullptr));
        back_pushButton->setText(QCoreApplication::translate("GraphTraversals", "Back", nullptr));
        Label_GraphTraversals->setText(QCoreApplication::translate("GraphTraversals", "Graph Traversals", nullptr));
        PushButton_CalcDFS->setText(QCoreApplication::translate("GraphTraversals", "DFS", nullptr));
        PushButton_CalcBFS->setText(QCoreApplication::translate("GraphTraversals", "BFS", nullptr));
        PushButton_ViewMSTButton->setText(QCoreApplication::translate("GraphTraversals", "MST", nullptr));
        Label_TraversalType->setText(QString());
        label->setText(QCoreApplication::translate("GraphTraversals", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenirs Of:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("GraphTraversals", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; text-decoration: underline;\">Souvenir Cart:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("GraphTraversals", "<html><head/><body><p><span style=\" font-size:18pt;\">Total Cost:  $</span></p></body></html>", nullptr));
        total->setText(QCoreApplication::translate("GraphTraversals", "<html><head/><body><p><span style=\" font-size:18pt;\">0.00</span></p></body></html>", nullptr));
        addToCartpushButton->setText(QCoreApplication::translate("GraphTraversals", "Add to Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphTraversals: public Ui_GraphTraversals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHTRAVERSALS_H
