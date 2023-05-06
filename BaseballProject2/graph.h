#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// Data structure to store a graph edge
struct Edge {
    int source;
    int destination;
    int weight;
};
struct Edge2
 {
 int origin; // Origin city (starting vertex)
 int destination; // Destination city (ending vertex)
 int distance; // Distance between the two cities
 };

typedef pair<int, int> Pair;


// City names

const string originNames[] = {"Chase Field", "SunTrust Park", "Oriole Parkat Camden Yards","Fenway Park","Wrigley Field"
                             ,"Guaranteed Rate Field","Great American Ball Park","Progressive Field","Coors Field","Comerica Park"
                             ,"Minute Maid Park","Kauffman Stadium","Angel Stadium","Dodger Stadium","Marlins Park","Miller Park"
                             ,"Target Field","Citi Field","Yankee Stadium","Oakland-Alameda County Coliseum","Citizens Bank Park"
                             ,"PNC Park","Petco Park","Oracle Park","Safeco Field","Busch Stadium","Tropicana Field","Globe Life Park in Arlington"
                             ,"Rogers Centre","Nationals Park"};


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

// Data structure to store a graph
class Graph {
 public:
 // Vector to store adjacency list for each vertex
 vector<vector<pair<int, int>>> adjacencyList;

 // Constructor to initialize graph with given edges
 Graph(vector<Edge> const &edges, int N) {
     // Resize the adjacency list to N elements of type vector<pair<int, int>>
     adjacencyList.resize(N);

     // Add edges to the graph
     for (auto &edge : edges) {
         int source      = edge.source;
         int destination = edge.destination;
         int weight      = edge.weight;

         // Add edge to the adjacency list
         adjacencyList[source].push_back(make_pair(destination, weight));
     }

     // Sort the adjacency list of each vertex in ascending order of the weights of the edges
     for (auto &list : adjacencyList) {
         sort(list.begin(), list.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
             return a.second < b.second;
         });
     }
 }
 int BFS(int node, const Graph &g) {
     //vector to store each vertex hat has been visited, the parent of each vertex, and the distance of each vertex
     vector<bool> visited(N, false);
     vector<int> parent(N, -1);
     vector<int> distance(N, 0);
     queue<int> q;

     //mark the current node as visited
     visited[node] = true;
     q.push(node);
     const string cityArray[] = {"Chase Field", "SunTrust Park", "Oriole Parkat Camden Yards","Fenway Park","Wrigley Field"
                                 ,"Guaranteed Rate Field","Great American Ball Park","Progressive Field","Coors Field","Comerica Park"
                                 ,"Minute Maid Park","Kauffman Stadium","Angel Stadium","Dodger Stadium","Marlins Park","Miller Park"
                                 ,"Target Field","Citi Field","Yankee Stadium","Oakland-Alameda County Coliseum","Citizens Bank Park"
                                 ,"PNC Park","Petco Park","Oracle Park","Safeco Field","Busch Stadium","Tropicana Field","Globe Life Park in Arlington"
                                 ,"Rogers Centre","Nationals Park"};

     while (!q.empty()) {
         // Dequeue a vertex from the front of the queue and visit it
         int u = q.front();
         q.pop();

         // Traverse all the neighbors of the current vertex
         for (auto &neighbor : g.adjacencyList[u]) {
             int v = neighbor.first;
             int weight = neighbor.second;

             // Choose the neighbor with the smallest weight as the next vertex to visit
             if (!visited[v]) {
                 // Mark edge as discovery edge
                 parent[v] = u;
                 distance[v] = distance[u] + weight;
                 totalDistance += weight;
                 cout << "Discovery edge: " << cityArray[u] << " -> " << cityArray[v] << endl;

                 // Mark the neighbor as visited and enqueue it
                 visited[v] = true;
                 q.push(v);
             } else if (parent[u] != v && parent[v] != u) {
                 // Mark edge as cross edge
                 cout << "Cross edge: " << cityArray[u] << " -> " << cityArray[v] << endl;
             }
         }
     }
     return totalDistance;

 }
 private:
 const int N = 30;

 //implementing a BFS starting at Dallas
 int totalDistance = 0;
};




#endif // GRAPH_H
