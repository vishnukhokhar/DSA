#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfsrec(vector<int>adj[],int s, bool visited[])
{
    visited[s]=true;


    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            dfsrec(adj,u,visited);
        }

    }
}

int  dfs(vector<int>adj[],int V)
{
    bool visited[V];
    int count=0;
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }

    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            dfsrec(adj,i,visited);
            count++;
        }

    }
    return count;

}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);

	cout << "Number of connected components: "<< dfs(adj,V); 

	return 0; 
} 