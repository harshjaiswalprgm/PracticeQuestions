#include <limits.h>   // Include library for INT_MAX, which is the largest possible integer
#include <stdbool.h>  // Include library to use boolean data types like true/false
#include <stdio.h>    // Include standard input/output library for printf

#define V 6  // Number of vertices in the graph, represented as a constant

// Function to find the vertex with the minimum key value, from the set of vertices not yet included in MST
int minKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;  // Initialize min value as INT_MAX and min_index for the vertex
    
    // Loop through all vertices to find the minimum key vertex not yet included in the MST
    for (int v = 0; v < V; v++) {
        if (mstSet[v] == false && key[v] < min) {  // If vertex v is not in MST and has a smaller key
            min = key[v];          // Update the minimum value
            min_index = v;         // Update the index of the minimum value
        }
    }
    return min_index;  // Return the index of the vertex with the minimum key
}

// Function to print the constructed MST stored in parent[]
void printMST(int parent[], int graph[V][V]) {
    printf("Edge \tWeight\n");  // Print the header for the output
    for (int i = 1; i < V; i++) {  // Start from 1 as 0 is the root of the MST
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);  // Print the edge and its weight
    }
}

// Function to construct and print the MST using Prim's algorithm
void primMST(int graph[V][V]) {
    int parent[V];  // Array to store the constructed MST
    int key[V];     // Array to store the minimum key values for each vertex
    bool mstSet[V]; // Boolean array to represent the set of vertices included in the MST

    // Initialize all keys as infinite (INT_MAX) and mstSet[] as false
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;  // Set key value of each vertex to infinity initially
        mstSet[i] = false; // Mark all vertices as not yet included in the MST
    }

    key[0] = 0;      // Make the key value of the first vertex 0 so it gets picked first
    parent[0] = -1;  // The first node (vertex 0) is the root of the MST, so it has no parent

    // The MST will have V vertices, so we perform V-1 iterations
    for (int count = 0; count < V - 1; count++) {
        // Pick the vertex with the minimum key value that is not yet included in the MST
        int u = minKey(key, mstSet);

        mstSet[u] = true;  // Mark the picked vertex as included in the MST

        // Update the key values and parent index of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++) {
            // Update the key only if graph[u][v] is not zero (i.e., there's an edge between u and v),
            // vertex v is not in mstSet, and the weight of the edge u-v is smaller than the current key of v
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;  // Update parent of vertex v as u
                key[v] = graph[u][v];  // Update the key value of vertex v
            }
        }
    }

    // Print the constructed MST
    printMST(parent, graph);
}

int main() {
    // The graph is represented using an adjacency matrix where each element represents the weight of the edge
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 8, 0, 3},
        {0, 8, 0, 0, 1},
        {6, 0, 0, 0, 12},
        {0, 3, 1, 12, 0}
    };

    // Call the Prim's MST function with the graph as input
    primMST(graph);

    return 0;  // Return 0 to indicate the program has successfully executed
}




// Header Files:

// #include <limits.h>: Provides INT_MAX, used to initialize key values to a large number.
// #include <stdbool.h>: Provides boolean data types (true, false).
// #include <stdio.h>: Provides functions like printf to output text.f
// Graph Size:

// #define V 6: Defines the number of vertices in the graph (6 in this case).
// Function minKey:

// Finds the vertex with the smallest key that hasn't been included in the MST. The function iterates over all vertices and returns the index of the vertex with the smallest key value.
// Function printMST:

// Prints the edges of the MST and their weights by using the parent[] array which stores the MST structure.
// Function primMST:

// Implements Prim's Algorithm:
// It initializes all vertices with infinite key values except for the first vertex.
// In each iteration, it picks the vertex with the smallest key value that hasn't been included in the MST.
// Then, it updates the key values of adjacent vertices, ensuring that only the minimum weight edges are considered.
// Main Function:

// Creates a graph using an adjacency matrix.
// Calls primMST(graph) to compute and print the MST.
// This code constructs the MST for the input graph and prints the edges and their respective weights.
