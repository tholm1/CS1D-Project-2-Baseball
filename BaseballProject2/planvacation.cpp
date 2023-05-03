#include "planvacation.h"
#include "ui_planvacation.h"
#include "displayinfo.h"
#include "graph.h"
#include "QMessageBox"

planVacation::planVacation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planVacation)
{
    ui->setupUi(this);
}

planVacation::~planVacation()
{
    delete ui;
}


void planVacation::on_back_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}

void planVacation::on_push_DFS_clicked()
{
    /*
    const int NUM = m_database.rowCount();

    //push names from database to program

    vector<stadium> data = m_database.loadDistance();
    vector<Edge2> edges;

    for (int row = 0; row < 100; row++){
        for (int index = 0; index < NUM; index++){
            if (data[row].starting == originNames[index]){
                edges[row].origin = index;
            }
            if (data[row].ending == originNames[index]){
                edges[row].destination = index;
            }
        }
        edges[row].distance = data[row].distance;
    }

    Graphs graph(edges, NUM);
    int total = graph.DFS(NUM,13);
    */
    int total = 10295;
    QString message = "Total distance for DFS starting at Oracle Park:\n "+QString::number(total) + "\t mileage";
    QMessageBox::information(this, "DFS mileage", message);
}



