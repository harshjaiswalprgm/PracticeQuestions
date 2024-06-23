//Q3 Write a code to represent a graph with at least five nodes (Note Assume any graph to encode) with the help of adjacency list. 

#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }

    void printGraph() {
        for (int v = 0; v < V; ++v) {
            cout << "Adjacency list of vertex " << v << endl;
            cout << "head";
            for (auto it = adj[v].begin(); it != adj[v].end(); ++it)
                cout << " -> " << *it;
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Print the adjacency list representation of the graph
    graph.printGraph();

    return 0;
}