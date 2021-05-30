//
//  Dijkstra'sAlgorithm.cpp
//  Greedy Algorithms
//
//  Created by Kashish Jain on 25/05/21.
//

#include <bits/stdc++.h>
using namespace std;
#define MAX_DIST 10000000

class Node{
public:
    char id;
    int distance;
    Node* prev;
    Node(char id):
    id(id), distance(MAX_DIST), prev(NULL){};
};

class Edge{
public:
    Node *src, *dest;
    int distance;
    Edge(Node* src, Node* dest, int dist):
    src(src), dest(dest), distance(dist){};
};

int main(){
    Node* a = new Node('a');
    Node* b = new Node('b');
    Node* c = new Node('c');
    Node* d = new Node('d');
    Node* e = new Node('e');
    Node* f = new Node('f');
    Node* g = new Node('g');

    Edge* e1 = new Edge(a, c, 1);
    Edge* e2 = new Edge(a, d, 2);
    Edge* e3 = new Edge(b, c, 2);
    Edge* e4 = new Edge(c, d, 1);
    Edge* e5 = new Edge(b, f, 3);
    Edge* e6 = new Edge(c, e, 3);
    Edge* e7 = new Edge(e, f, 2);
    Edge* e8 = new Edge(d, g, 1);
    Edge* e9 = new Edge(g, f, 1);
    a->distance = 0;
    return 0;
}

