#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max(); // Representation of infinity

// Function to perform Dijkstra's Algorithm
void dijkstra(int source, int target, const vector<vector<pair<int, int>>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INF);        // Distance from the source to each vertex
    vector<int> parent(n, -1);      // To reconstruct the path
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    dist[source] = 0; // Distance to the source is 0
    pq.push({0, source}); // {distance, vertex}

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // If we reach the target, break early
        if (u == target) break;

        // Skip processing if we found a better path already
        if (d > dist[u]) continue;

        for (const auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // Relaxation step
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    // Output the shortest distance
    if (dist[target] == INF) {
        cout << "No path exists between " << source << " and " << target << "." << endl;
    } else {
        cout << "Shortest distance from " << source << " to " << target << " is " << dist[target] << "." << endl;

        // Reconstruct the path
        vector<int> path;
        for (int v = target; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());

        cout << "Path: ";
        for (int v : path) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n); // Adjacency list representation
    cout << "Enter the edges (u, v, weight):" << endl;
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w); // Remove this line if the graph is directed
    }

    int source, target;
    cout << "Enter the source and target vertices: ";
    cin >> source >> target;

    dijkstra(source, target, graph);

    return 0;
}
