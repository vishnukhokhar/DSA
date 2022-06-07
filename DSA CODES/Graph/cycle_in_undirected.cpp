#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int DFSrec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            if (DFSrec(adj, u, visited, s) == true)
            {
                return true;
            }
            else if (u != parent)
            {
                return true;
            }
        }
        return false;
    }
}
int DFS(vector<int> adj[], int V)
{
    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (DFSrec(adj, i, visited, -1) == true)
            ;
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    if (DFS(adj, V))
        cout << "Cycle found";
    else
        cout << "No cycle found";

    return 0;
}
