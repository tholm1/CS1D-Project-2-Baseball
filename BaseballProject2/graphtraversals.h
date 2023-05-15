#ifndef GRAPHTRAVERSALS_H
#define GRAPHTRAVERSALS_H

#include "graph.h"
#include "dbmanager.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

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
};

#endif // GRAPHTRAVERSALS_H


