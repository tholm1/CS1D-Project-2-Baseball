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
    const int NUM = 30;
    //push names from database to program

    vector<stadium> data = m_database.loadDistance();
    vector<Edge2> edges;

    qDebug() << data.size();
    for (int row = 0; row < 106; row++){
        int start, end, dis;
        for (int index = 0; index < NUM; index++){
            if (data[row].starting == originNames[index]){
                start = index;
            }
            if (data[row].ending == originNames[index]){
                end = index;
            }
        }
        dis = data[row].distance;
        Edge2 tmp = {start,end,dis};
        edges.emplace_back(tmp);
    }


    Graphs graph(edges, NUM);
    int total = graph.DFS(NUM,23);

    //int total = 10295;
    //actual total = 9370
    QString message = "Total distance for DFS starting at Oracle Park:\n "+QString::number(total) + "\t mileage";
    QMessageBox::information(this, "DFS mileage", message);
}




void planVacation::on_push_BFS_clicked()
{

    const int NUM = 30;
    //push names from database to program

    vector<stadium> data = m_database.loadDistance();
    vector<Edge> edges;

    qDebug() << data.size();
    for (int row = 0; row < 106; row++){
        int start, end, dis;
        for (int index = 0; index < NUM; index++){
            if (data[row].starting == originNames[index]){
                start = index;
            }
            if (data[row].ending == originNames[index]){
                end = index;
            }
        }
        dis = data[row].distance;
        Edge tmp = {start,end,dis};
        edges.emplace_back(tmp);
    }


    Graph graph(edges, NUM);
    int total = graph.BFS(16,graph);

    //int total = 10295;
    //actual total = 12625
    QString message = "Total distance for BFS starting at Target Field:\n "+QString::number(total) + "\t mileage";
    QMessageBox::information(this, "BFS mileage", message);

}

