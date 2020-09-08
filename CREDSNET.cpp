#include<bits/stdc++.h>
#define ll long long int
#define N 100010
 
using namespace std;

ll qw[N+10];
 
// This class represents a directed graph using adjacency list representation
class Graph
{
    ll V;    // No. of vertices
    list<ll> *adj;    // Pointer to an array containing adjacency lists
public:
    Graph(ll V);  // Constructor
    void addEdge(ll v, ll w); // function to add an edge to graph
    void BFS(ll s,ll ctr);  // prints BFS traversal from a given source s
};
 
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<ll>[V];
}
 
void Graph::addEdge(ll v, ll w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::BFS(ll s,ll ctr)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(ll i = 0; i < V; i++)
        visited[i] = false;
 
    // Create a queue for BFS
    list<ll> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 	qw[s]=ctr;
    // 'i' will be used to get all adjacent vertices of a vertex
    list<ll>::iterator i;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        if(qw[s]==0)
        	qw[s]==ctr;
 
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                //cout<<" *i "<<(*i)<<" qw "<<qw[*i]<<endl;
                
                queue.push_back(*i);
            }
        }
       cout<<" qw  "<<endl;
        for(int i=0; i<10; i++)
	{
		cout<<qw[i]<<" ";
	}
	cout<<endl;
    }cout<<endl;
}

using namespace std;

int main()
{
	ll n,t,x,y;
	scanf("%lld", &n);
	Graph g(1000);
	ll qq[n+10];
	memset(qq,0,sizeof(qq));
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &x, &y);
		g.addEdge(y,x);
		qq[x]=1;
		qq[y]=1;
	}
	
	ll ctr=1;
	memset(qw,0,sizeof(qw));
	for(int i=1; i<=n; i++)
	{
		if(qq[i])
		{
			g.BFS(i,ctr);
		}
		ctr++;
	}
	for(int i=0; i<n; i++)
	{
		cout<<qw[i]<<" ";
	}
	cout<<endl;
	ll ww[n+10];
	memset(ww,0,sizeof(ww));
	for(int i=0; i<n; i++)
	{
		ll zx=qw[i];
		ww[zx]++;
	}
	for(int i=0; i<n+10; i++)
		cout<<ww[i]<<" ";
	cout<<endl;
	sort(ww,ww+n+10);
	for(int i=0; i<n+10; i++)
		cout<<ww[i]<<" ";
	cout<<endl;
	ll ans=ww[n+9];
	printf("%lld\n", ans);
	return 0;
}
