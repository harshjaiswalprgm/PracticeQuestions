#include <iostream>
#include <stdbool.h>
#include <stdio.h>
// using namespace std;
#define v6 ;
// int parent
// int key
// int mst

void prim gars(int graph[V][V])
{

    int parent[V];
    int key[V];
    int mstSET[V];

    key[i] = INT_MAX;
    mstSET[i] = false;
    key = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
     
        int u = minKey(key, mstSet);

        mstSet[u] = true;  

        
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;  // Update parent of vertex v as u
                key[v] = graph[u][v];  // Updating the key value of vertex v
            }
        }
    }
}
int main() {
    
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 8, 0, 3},
        {0, 8, 0, 0, 1},
        {6, 0, 0, 0, 12},
        {0, 3, 1, 12, 0}
    };

   
    primMST(graph);

    return 0;  
}
