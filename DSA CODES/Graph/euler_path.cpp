#include<bits/stdc++.h>
using namespace std;
#define V 5
#define pb push_back 
unordered_map<int,vector<int>>adj;

void dfs(int s,vector<bool>&visited)
{
    visited[s]=true;
    for(int i:adj[s])
    {
        if(visited[i]==false)
        {
            dfs(i,visited);
        }
    }
}
bool connected_graph()
{
    vector<bool>visited(V+1,false);
    int node=-1;
    for(int i=0;i<V;i++)
    {
        node=i;
        break;
    
    }
    if(node==-1)
    {
        return true;
    }
    dfs(node,visited);
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false and adj[i].size()>0)
        {
            return false;
        }
    }
return true;
}

int find_eular()
{
  
    if(!connected_graph())
    {
        return 0;
    }
    int odd=0;
    for(int i=0;i<V;i++)
    {
        if(adj[i].size() & 1)
        {
            odd+=1;
        }
    }

    if(odd>2)
    {
        return 0;

    }
    return (odd==0)?2:1;


}
void find_eular_path()
{
    int ret=find_eular();
    if(ret==0)
    {
        cout<<"no";
    }
    else if(ret==1)
    {
        cout<<"semi";
    }
    else
    {
        cout<<"eular";
    }
}

int main()
{
	adj[0].pb(1);
	adj[1].pb(0);
	adj[0].pb(2);
	adj[2].pb(0);
	adj[2].pb(1);
	adj[1].pb(2);
	adj[0].pb(3);
	adj[3].pb(0);
	adj[3].pb(4);
	adj[4].pb(3);
	find_eular_path();

	return 0;
}