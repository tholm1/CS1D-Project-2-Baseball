#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_display_pushButton_clicked();

    void on_maintenance_pushButton_clicked();

    void on_one_team_clicked();

    void on_filterTeam_clicked();

    void on_DFS_clicked();

private:
    Ui::MainWindow *ui;
    dbManager m_database;
};
#endif // MAINWINDOW_H
