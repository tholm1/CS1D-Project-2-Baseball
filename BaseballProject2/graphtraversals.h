#ifndef GRAPHTRAVERSALS_H
#define GRAPHTRAVERSALS_H

#include "graph.h"
#include "dbmanager.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include "tripplanner.h"

namespace Ui {
class GraphTraversals;
}
class GraphTraversals : public QDialog
{
    Q_OBJECT

public:
    GraphTraversals(QWidget *parent = nullptr);

private slots:
    void on_PushButton_ViewMSTButton_clicked();
    void on_back_pushButton_clicked();

    void on_PushButton_CalcDFS_clicked();

    void on_PushButton_CalcBFS_clicked();

private:
    Ui::GraphTraversals *ui;
    Graph* graph; // Pointer to the Graph object
    dbManager dbManager; // Database manager object
    QPushButton *primMSTButton;
    QVBoxLayout *layout;
    QLabel *distanceLabel;
    /**
     * @brief initializeGraph Initializes the graph object.
     */
    void initializeGraph();
    double totalCost; // Double to hold the total cost when buying souvenirs
    QString sQry; //QString to display that the item has been added to the cart succesfully
    QStack<SouvenirTableModel> souvenirCart; //Stack to hold the cart
    QVector<QString> selectedTeams; //Vector to store the teams
};

#endif // GRAPHTRAVERSALS_H


