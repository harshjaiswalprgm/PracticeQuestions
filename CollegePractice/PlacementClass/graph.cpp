#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "Adjacency list of vertex " << v << ": ";
        for (const auto &u : adj[v])
        {
            cout << u << " ";
        }
        cout << endl
    }
}

int main()
{
    int V, E;
    cout << "Enter the number of vertices: " cin >> V;
    cout << "Enter the number of 
            edges : ";
                    cin >>
        E;

    vector<int> adj[V];

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; ++i)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    printGraph(adj, V);

    return 0
}