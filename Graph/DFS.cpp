//
//  DFS.cpp
//  Graphs
//
//  Created by Kashish Jain on 03/03/21.
//

#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Graph{
public:
    map<T, vector<T>> graph;
    
    void addEdge(T u, T v){
        vector<T> up = graph[u], down = graph[v];
        up.push_back(v);
        down.push_back(u);
        graph[u] = up;
        graph[v] = down;
    }
    
    void adjacencyList(){
        cout << "Adjacency List: \n";
        for(auto i:graph){
            cout << i.first << " ";
            for(auto j:i.second)
                cout << " -> " << j;
            cout << endl;
        }
    }
    
    void recDFS(T start, map<T, bool> &v){
        
        v[start] = true;
        cout << start << "  ";
        
        for(auto x:graph[start]){
            if(!v[x]){
                recDFS(x, v);
            }
        }
    }

    void DFS(T start){
        map<T, bool> v;
        for(auto x:graph){
            v[x.first] = false;
        }
        recDFS(start, v);
    }

};

int main(){
    Graph<int>intGraph;
    Graph<string>charGraph;
    intGraph.addEdge(0, 1);
    intGraph.addEdge(0, 4);
    intGraph.addEdge(1, 1);
    intGraph.addEdge(1, 2);
    intGraph.addEdge(1, 3);
    intGraph.addEdge(1, 4);
    intGraph.addEdge(3, 2);
    intGraph.addEdge(3, 4);
    
    charGraph.addEdge((string)"zero", (string)"one");
    charGraph.addEdge((string)"zero", (string)"four");
    charGraph.addEdge((string)"one", (string)"one");
    charGraph.addEdge((string)"one", (string)"two");
    charGraph.addEdge((string)"one", (string)"three");
    charGraph.addEdge((string)"one", (string)"four");
    charGraph.addEdge((string)"three", (string)"two");
    charGraph.addEdge((string)"three", (string)"four");
    
    intGraph.adjacencyList();
    cout << endl;
    charGraph.adjacencyList();
    cout << endl;
    intGraph.DFS(3);
    cout << endl;
    charGraph.DFS((string)"zero");
    cout << endl;
    cout << endl;
}

