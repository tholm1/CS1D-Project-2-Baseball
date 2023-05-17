#include "graphtraversals.h"
#include "ui_graphtraversals.h"
#include "planvacation.h"
#include <QMessageBox>


//BFS:12810
//DFS:9420
//MST:7060
GraphTraversals::GraphTraversals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphTraversals)
{
    ui->setupUi(this);
    ui->allteams_comboBox->setModel(dbManager.loadTeamNamesOnly());

       initializeGraph();

}

/**
 * @brief Initialize the graph by loading vertex index map and edges from the database.
 *        Create a new Graph instance and add edges based on the loaded data.
 */
void GraphTraversals::initializeGraph()
{
    // Load vertex index map and edges from the database
    std::unordered_map<std::string, int> vertexIndexMap;
    std::vector<std::tuple<std::string, std::string, int>> edges;
    dbManager.loadGraph(vertexIndexMap, edges);

    // Create a new Graph instance with the number of vertices
    int V = vertexIndexMap.size();
    graph = new Graph(V);
    graph->setVertexIndexMap(vertexIndexMap);

    // Add edges to the graph based on the loaded data
    for (const auto& edge : edges)
    {
        const std::string& u = std::get<0>(edge);
        const std::string& v = std::get<1>(edge);
        int w = std::get<2>(edge);
        graph->addEdge(u, v, w);
    }
}

void GraphTraversals::on_PushButton_ViewMSTButton_clicked()
{
    if (graph != nullptr)
    {
        int distance = graph->primMST();
        QString message = "The minimum spanning tree (MST) connecting all the MLB stadiums is: "+QString::number(distance) + " miles";
        QMessageBox::information(this, "MST mileage", message);
        ui->Label_TraversalType->setText(QString("Total Distance: %1").arg(distance));

    }
}

void GraphTraversals::on_back_pushButton_clicked()
{
    planVacation plan;
    plan.setModal(true);
    hide();
    plan.exec();
}

//--------------------------------------------------------------------------
void GraphTraversals::on_PushButton_CalcDFS_clicked()
{
    const int NUM = 30;
        //push names from database to program

        vector<stadium> data = dbManager.loadDistance();
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
        //actual total = 9370// 9420
        QString message = "Total distance for DFS starting at Oracle Park: "+QString::number(total) + " miles";
        QMessageBox::information(this, "DFS mileage", message);
        ui->Label_TraversalType->setText(QString("Total Distance: %1").arg(total));
}


void GraphTraversals::on_PushButton_CalcBFS_clicked()
{
    const int NUM = 30;
        //push names from database to program

        vector<stadium> data = dbManager.loadDistance();
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

        //int total = 12810;
        //actual total = 12625 //12810
        QString message = "Total distance for BFS starting at Target Field: "+QString::number(total) + " miles";
        QMessageBox::information(this, "BFS mileage", message);
        ui->Label_TraversalType->setText(QString("Total Distance: %1").arg(total));

}

