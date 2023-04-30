#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "displayinfo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_display_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}


void MainWindow::on_maintenance_pushButton_clicked()
{
    login login;
    login.setModal(true);
    login.exec();
}

