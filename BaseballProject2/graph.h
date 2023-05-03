#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;


struct Edge2
 {
 int origin; // Origin city (starting vertex)
 int destination; // Destination city (ending vertex)
 int distance; // Distance between the two cities
 };

typedef pair<int, int> Pair;


// City names

const string originNames[] =
{
 "Seattle", "San Francisco", "Denver", "Chicago", "Los Angeles",
 "Kansas City", "Dallas", "Houston", "Miami", "Atlanta", "New York",
 "Boston"
};


class Graphs
{
public:
 Graphs(vector<Edge2> &edges, int num);
 int DFS(int num, int startFrom);
 void printGraph(int num)const;
private:
 vector< vector<Pair> > adjList; // Adjacent List
 // Recursive functions for DFS with weights
 void DFS_Utility(int current, vector<bool> &visited, vector<Pair> &route, int &dist);
};

#endif // GRAPH_H
