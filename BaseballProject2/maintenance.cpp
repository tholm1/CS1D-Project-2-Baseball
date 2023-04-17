#include "maintenance.h"
#include "ui_maintenance.h"
#include "mainwindow.h"


maintenance::maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintenance)
{
    ui->setupUi(this);
}

maintenance::~maintenance()
{
    delete ui;
}


void maintenance::on_Add_Delete_Info_pushButton_clicked()
{

}


void maintenance::on_modifyInfo_pushButton_clicked()
{

}


void maintenance::on_back_pushButton_clicked()
{
    QList<QWidget*> topLevelWidgets = qApp->topLevelWidgets();
        foreach(QWidget *widget, topLevelWidgets) {
            QMainWindow *mainWindow = qobject_cast<QMainWindow*>(widget);
            if (mainWindow) {
                // Show the main window if it was previously hidden
                if (!mainWindow->isVisible()) {
                    mainWindow->show();
                }
                break;
            }
        }
    hide();
}

