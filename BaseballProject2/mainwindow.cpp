#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "displayinfo.h"
#include "allinfo.h"
#include "filteredteams.h"
#include "tripplanner.h"
#include "ui_tripplanner.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_display_pushButton_clicked()
{
    TripPlanner info;
    info.setModal(true);
    hide();
    info.exec();
}


void MainWindow::on_maintenance_pushButton_clicked()
{
    login login;
    login.setModal(true);
    login.exec();
}


void MainWindow::on_one_team_clicked()
{
    Allinfo info;
    info.setModal(true);
    hide();
    info.exec();

}


void MainWindow::on_filterTeam_clicked()
{
    filteredTeams info;
    info.setModal(true);
    hide();
    info.exec();
}


void MainWindow::on_DFS_clicked()
{
    TripPlanner info;
    info.setModal(true);
    hide();
    info.exec();
}

