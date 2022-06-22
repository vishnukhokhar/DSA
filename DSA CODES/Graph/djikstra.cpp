#include <bits/stdc++.h>
using namespace std;
#define V 4

vector<int> djikstra(int graph[V][V], int src)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    vector<bool> fin(V, false);

    for (int count = 0; count < V - 1; count++)
    {
        int u = -1;
        for (int i = 0; i < V; i++)
        {
            if (!fin[i] && (u == -1 || dist[i] < dist[u]))
            {
                u = i;
            }
        }

        fin[u] = true;

        for (int j = 0; j < V; j++)
        {
            if (graph[u][j] != 0 && fin[j] == false)
            {
                dist[j] = min(dist[j], dist[u] + graph[u][j]);
            }
        }
    }
    return dist;
}
int main()
{
    int graph[V][V] = {
        {0, 50, 100, 0},
        {50, 0, 30, 200},
        {100, 30, 0, 20},
        {0, 200, 20, 0},
    };

    for (int x : djikstra(graph, 0))
    {
        cout << x << " ";
    }

    return 0;
}