#include "graph.h"
#include <stdio.h>

Graph::Graph(int V)
{
    this->V = V;
    adj = new std::list<Pair>[V];
}

Graph::Graph(const std::unordered_map<std::string, int>& vertexIndexMap, const std::vector<std::tuple<std::string, std::string, int>>& edges) {
    this->vertexIndexMap = vertexIndexMap;
    this->V = vertexIndexMap.size();
    adj = new std::list<Pair>[V];

    for (const auto& edge : edges) {
        int u = vertexIndexMap.at(std::get<0>(edge));
        int v = vertexIndexMap.at(std::get<1>(edge));
        int w = std::get<2>(edge);
        adj[u].push_back(std::make_pair(v, w));
        adj[v].push_back(std::make_pair(u, w));
    }
}

Graph::~Graph()
{
    delete[] adj;
}

void Graph::addEdge(const std::string &u, const std::string &v, int w)
{
    int uIndex = vertexIndexMap[u];
    int vIndex = vertexIndexMap[v];
    adj[uIndex].push_back(std::make_pair(vIndex, w));
    adj[vIndex].push_back(std::make_pair(uIndex, w));
}

int Graph::primMST()
{
    int totalDist = 0;
    std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> pq;
    int src = 0;

    std::vector<int> key(V, std::numeric_limits<int>::max());
    std::vector<int> parent(V, -1);
    std::vector<bool> inMST(V, false);

    pq.push(std::make_pair(0, src));
    key[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        for (auto i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;

            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(std::make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }


    for (int i = 1; i < V; ++i)
    {
        totalDist += key[i];
    }
    return totalDist;
}
int Graph::shortestPath(const std::string& start, const std::string& end)
{
    int totalDist = 0;
    int src = vertexIndexMap.at(start);
    int dest = vertexIndexMap.at(end);
    priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
    vector<int> dist(V, INT_MAX);
    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    totalDist = dist[dest];
    return totalDist;
}


void Graph::setVertexIndexMap(const std::unordered_map<std::string, int> &vertexIndexMap)
{
    this->vertexIndexMap = vertexIndexMap;
}
//------------------------------------------------------------------------------------------
Graphs::Graphs(vector<Edge2> &edges, // IN - Edges in the graph
 int num) // IN - number of vertices in the graph
{
 // Resizes the vector to num number of elements of type vector<Pair>
 adjList.resize(num);
 // Adds edges to the graph
 for(auto &edge : edges)
 {
 int origin = edge.origin;
 int destination = edge.destination;
 int distance = edge.distance;
 adjList[origin].push_back(make_pair(destination, distance));
 adjList[destination].push_back(make_pair(origin, distance));
 }
}


void Graphs::printGraph(int num)const // IN - number of vertices in the graph
{
 for(int i = 0; i < num; i++)
 {
 cout << originNames[i];
 // Prints all adjacent vertices of the given vertex
 for(Pair x : adjList[i])
 {
 cout << " -> " << originNames[x.first] << " (" << x.second << ")";
 }
 cout << endl << endl;
 }
}

int Graphs::DFS(int num, // IN - number of vertices in the graph
 int startFrom)// IN - the integer of the city to start from
{
 // Declare variables
 int current = startFrom; // Current index
 int distance = 0; // Distance
 vector<Pair> route; // Vector to hold route of DFS
 // Initializes boolean vector
 vector<bool> visited(num, false);
 // Calls recursive function for DFS
 DFS_Utility(current, visited, route, distance);
 // Displays the results of the DFS
 cout << endl << endl;
 cout << "DFS Starting from " << originNames[startFrom] << ":" << endl;
 cout << originNames[startFrom] << " -> ";
 for(unsigned i = 0; i < route.size(); i++)
 {
 cout << originNames[route[i].first];
 if(i < route.size() - 1)
 {
 cout << " -> ";
 }
 }
 cout << endl << endl;
 cout << "MILES OF DISCOVERY EDGES: " << distance << endl;
 return distance;
}


void Graphs::DFS_Utility(int current, // Current index
 vector<bool> &visited, // vector keeping track of what has been
 // visited and what has not
 vector<Pair> &route, // vector keeping track of theroute
 int &dist) // total distance traveled on discovery
 // edges
{
 // Declare variables
 vector<Pair>::iterator it; // Iterator
 vector<Pair> path; // Vector to hold adjacent vertices/edges
 unsigned i; // Loop control variable
 int temp; // Temporary variable to change data
 // Initialize variables
 visited[current] = true;
 // Puts unvisited adjacent vertices and their weights into a vector to be sorted
 for(it = adjList[current].begin(); it != adjList[current].end(); it++)
 {
 if(!visited[(*it).first])
 {
 // Inserts as a pair (distance, destination)
 path.push_back(Pair((*it).second, (*it).first));
 }
 }
 // Sorts by distance shortest to longest
 sort(path.begin(), path.end());
 // Loops through entire thing -> goes to every adjacent vertex
 for(i = 0; i < path.size(); i++)
 {
 // If this vertex has been visited
 if(visited[path[i].second])
 {
 // Set as back edge
 cout << left << setw(10) << "Back" << "Edge: "
 << originNames[current] << " -> "
 << originNames[path[i].second] << endl;
 }
 // If this vertex has yet to be visited
 if(!visited[path[i].second])
 {
 // Adds new vertex/edge to route
 route.push_back(Pair(path[i].second, path[i].first));
 // Adds distance to overall distance bc found new vertex
 dist += path[i].first;
 // Sets visited to true for this vertex
 visited[path[i].second] = true;
 // Sets as discovery edge because new vertex found on edge
 cout << left << setw(10) << "Discovery" << "Edge: "
 << originNames[current] << " -> "
 << originNames[path[i].second]
 << "(" << path[i].first << ")" << endl;
 // Sets current to this new vertex found
 current = path[i].second;
 // Recursive call for DFS function
 DFS_Utility(current, visited, route, dist);
 }
 // If the vertex has been visited
 if(visited[current] && current != route[0].first)
 {
 // Move back one. -> backtrack
 for(unsigned j = 0; j < route.size(); j++)
 {
 if(route[j].first == current)
 {
 temp = j-1;
 }
 }
 current = route[temp].first;
 }
 }
}