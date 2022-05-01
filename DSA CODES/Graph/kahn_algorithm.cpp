#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
}

void topological_sort(vector<int>adj[],int V)
{
    vector<int>in_degree(V,0);
    for(int i=0;i<V;i++)
    {
        for(int u:adj[i])
        {
            in_degree[u]++;
        }
    }

    queue<int>q;
    for(int j=0;j<V;j++)
    {
        if(in_degree[j]==0)
        {
            q.push(j);
        }
    }

    while(q.empty()==false)
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";

        for(int k:adj[x])
        {
            if(--in_degree[k]==0)
            {
                q.push(k);
            }
        }
    }
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  
    cout << "Following is a Topological Sort of\n"; 
    topological_sort(adj,V);

	return 0; 
} 