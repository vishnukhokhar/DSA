#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int> adj[], int V)
{
    for(int i=0;i<V;i++)
    {
        for(int x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int V=4;
    vector<int>adj[V];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
     printgraph(adj,V);   
}
