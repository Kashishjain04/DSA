//
//  adjacencyList.cpp
//  Graphs
//
//  Created by Kashish Jain on 02/03/21.
//

#include <bits/stdc++.h>

using namespace std;

class Graph{
public:
    map<int, vector<int>> graph;
    
    void addEdge(int u, int v){
        vector<int> up = graph[u], down = graph[v];
        up.push_back(v);
        down.push_back(u);
        graph[u] = up;
        graph[v] = down;
    }
};

int main(){
    Graph graph;
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(3, 2);
    graph.addEdge(3, 4);
    
    cout << "Adjacency List: \n";
    for(auto i:graph.graph){
        cout << i.first << " ";
        for(auto j:i.second)
            cout << " -> " << j;
        cout << endl;
    }
}
