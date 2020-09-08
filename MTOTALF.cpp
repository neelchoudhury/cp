#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

bool visited[V+10];
ll parent[V+10];
ll graph[V+10][V+10];
ll rGraph[V+10][V+10];

bool bfs(ll s, ll t, ll parent[])
{ 
    queue <ll> q;
    q.push(s);
    mem(visited);
    visited[s] = true;
    parent[s] = -1;
  
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
 
        for (ll v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return (visited[t] == true);
}
  
ll fordFulkerson( ll s, ll t)
{
    ll u, v;  

    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v]; 

 	mem(parent);
    ll max_flow = 0;  

    while (bfs( s, t, parent))
    { 
        ll path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
  
        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        } 
        max_flow += path_flow;
    }
  
    return max_flow;
}

int main()
{
	ios;
	ll n,v;
	char x,y;
	ll q=0,w=0;
	cin>>n;
	mem(graph);
	mem(rGraph);
	while(n--)
	{
		cin>>x>>y>>v;
		if(x>='a' and x<='z')
			q=x-'a';
		else
			q=x-'A'+26;
		if(y>='a' and y<='z')
			w=y-'a';
		else
			w=y-'A'+26;
		graph[q][w]+=v;

	}
	ll ans=fordFulkerson(26,51);
	cout<<ans<<endl;
	return 0;
}