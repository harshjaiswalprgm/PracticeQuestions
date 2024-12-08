#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

#define INF 1e9  // Represents infinity

void dijkstra(int start, const vector<vector<pair<int, int>>>& graph, vector<int>& dist) {
    dist[start] = 0;  // Starting node distance is 0
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (currDist > dist[node]) continue;  // Skip outdated distances

        for (auto& neighbor : graph[node]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            if (dist[node] + weight < dist[nextNode]) {
                dist[nextNode] = dist[node] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
}

int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    vector<vector<pair<int, int>>> graph(nodes);
    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});  // For undirected graphs
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    vector<int> dist(nodes, INF);  // Initialize distances to infinity
    dijkstra(start, graph, dist);

    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < nodes; i++) {
        if (dist[i] == INF)
            cout << "Node " << i << ": Unreachable" << endl;
        else
            cout << "Node " << i << ": " << dist[i] << endl;
    }

    return 0;
}
