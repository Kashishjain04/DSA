//
//  Kruskal'sAlgorithm.cpp
//  Greedy Algorithms
//
//  Created by Kashish Jain on 24/05/21.
//
// Kruksal's Algorithm to create Minimum Spanning Tree from Weighted Graph

#include <bits/stdc++.h>

using namespace std;

bool compareEdges(pair<int, pair<int,int>> e1, pair<int, pair<int,int>> e2){
    return e1.first <= e2.first;
}

int find(int* parent, int i){
    if(parent[i] == -1) return i;
    return (find(parent, parent[i]));
}

void Union(int* parent, int i, int j){
    int iSet = find(parent, i);
    int jSet = find(parent, j);
    parent[iSet] = jSet;
}

class Graph{
public:
    int V;
    // pair<weight, pair<src, dest>>
    vector<pair<int, pair<int,int>>> edges;
    
    Graph( int V):
    V(V) {};
    
    void addEdge(int u, int v, int w){
        edges.push_back(make_pair(w, make_pair(u, v)));
    }
    // find & union method
    bool isCycle(vector<pair<int, pair<int,int>>> edges){
        int* parent = new int[this->V];
        for(int i=0; i<this->V; i++) parent[i] = -1;
        
        for (auto edge : edges) {
            int xParent = find(parent, edge.second.first);
            int yParent = find(parent, edge.second.second);
            if(xParent == yParent) return true;
            Union(parent, xParent, yParent);
        }
        return false;
    }
    
    void createMST(){
        vector<pair<int, pair<int,int>>> sortedEdges = edges, mstEdges;
        sort(sortedEdges.begin(), sortedEdges.end(), compareEdges);
        for(auto edge : sortedEdges){
            mstEdges.push_back(edge);
            if(isCycle(mstEdges)) mstEdges.pop_back();
        }
        int cost = 0;
        for(auto edge : mstEdges){
            cout << edge.second.first << " <--> " << edge.second.second << endl;
            cost += edge.first;
        }
        cout << cost << endl;
    }
};

int main(){
//Cyclic Graph
    Graph graph(5);
    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 4, 2);
    graph.addEdge(1, 1, 1);
    graph.addEdge(1, 2, 3);
    graph.addEdge(1, 3, 5);
    graph.addEdge(1, 4, 7);
    graph.addEdge(3, 2, 1);
    graph.addEdge(3, 4, 2);
    
    graph.createMST();
    stack<int> st;
}
