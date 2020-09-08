#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<ll> adj[200010];
bool vis[200010];
ll v[200010];

void BFS(ll s, ll val)
{
    // Mark all the vertices as not visited
    
     
 
    // Create a queue for BFS
    list<ll> queue;
 
    // Mark the current node as visited and enqueue it
    vis[s] = true;
    queue.push_back(s);
 
    // 'i' will be used to get all adjacent vertices of a vertex
    vector<ll>::iterator i;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
         
        //cout << s << " ";
        queue.pop_front();
 		val=v[s];
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!vis[*i])
            {
                vis[*i] = true;
                v[*i]=min(v[*i],val+1);
                queue.push_back(*i);
            }
        }
    }
}
 

int main()
{
	ll n;
	cin>>n;
	for(ll i=1; i<=n; i++)
	{
		if(i+1<=n)
			adj[i].pb(i+1);
		if(i-1>=1)
			adj[i].pb(i-1);
	}
	ll x;
	vector<ll>::iterator ii;
	for(ll i=1; i<=n; i++)
	{
		cin>>x;
		ii=find(adj[i].begin(),adj[i].end(), x);
		if(ii==adj[i].end())
			adj[i].pb(x);
	}
	/*for(int i=1; i<=n; i++)
	{
		for(int j=0; j<adj[i].size(); j++)
			cout<<adj[i][j]<<" ";
		cout<<endl;
	}*/
	memset(vis,0,sizeof(vis));
	memset(v,0,sizeof(v));
	for(ll i=1; i<=n; i++)
	{
		v[i]=i-1;
	}
	BFS(1,0);
	for(ll i=1; i<=n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
