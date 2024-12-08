#include <iostream>
#include <vector>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max(); // Representation of infinity

// Function to find the vertex with the minimum key value
int findMinKey(const vector<int>& key, const vector<bool>& inMST, int n) {
    int minValue = INF, minIndex = -1;

    for (int v = 0; v < n; ++v) {
        if (!inMST[v] && key[v] < minValue) {
            minValue = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Prim's Algorithm
void primMST(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> key(n, INF);        // Key values to pick minimum weight edge
    vector<int> parent(n, -1);     // To store the MST
    vector<bool> inMST(n, false);  // To track vertices included in MST

    key[0] = 0; // Start from the first vertex

    for (int count = 0; count < n - 1; ++count) {
        int u = findMinKey(key, inMST, n); // Pick the vertex with the smallest key value
        inMST[u] = true;

        for (int v = 0; v < n; ++v) {
            // Update key and parent only if the edge exists, the vertex is not yet in MST,
            // and the weight of the edge is smaller than the current key value
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    // Print the edges in the MST
    cout << "Edge   Weight\n";
    for (int i = 1; i < n; ++i) {
        cout << parent[i] << " - " << i << "    " << graph[i][parent[i]] << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix (use 0 for no edge):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    primMST(graph);

    return 0;
}
