#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 210
#define N 200010
#define MAX 400010

using namespace std;

bool visited[V+10];
ll parent[V+10];
ll graph[V+10][V+10];
ll rGraph[V+10][V+10];
vector<ll> adj[V+10];

bool bfs(ll s, ll t, ll parent[], ll val, ll n)
{ 
    queue <ll> q;
    q.push(s);
    for(ll i=0; i<n+2; i++)
 		visited[i]=0;
    visited[s] = true;
    for(ll i=0; i<n+2; i++)
 		parent[i]=0;
    parent[s] = -1;
  	
    while (!q.empty())
    {
    	// cout<<"bfs "<<s<<" "<<t<<endl;
        ll u = q.front();
        q.pop();
 
        for (ll v=0; v<adj[u].size(); v++)
        {
        	// cout<<" jj "<<u<<" "<<v<<endl;
        	ll qqq=adj[u][v];
        	if(u!=0 and qqq!=n+1 and u!=n+1 and qqq!=0)
        	{
	            if (rGraph[u][qqq] >0 and visited[qqq]==false    and graph[u][qqq]<=val)
	            {
	                q.push(qqq);
	                parent[qqq] = u;
	                visited[qqq] = true;
	            }
        	}
        	else
        	{
        		if (rGraph[u][qqq] >0  and visited[qqq]==false  )
	            {
	                q.push(qqq);
	                parent[qqq] = u;
	                visited[qqq] = true;
	            }
        	}
        }
    }
    return (visited[t] == true);
}

ll ford( ll s, ll t, ll val, ll n)
{
    ll u, v;  
    // cout<<n+1<<endl;
    for (u = 0; u < n+2; u++)
        for (v = 0; v < n+2; v++)
             rGraph[u][v] = graph[u][v]; 

 	for(ll i=0; i<n+2; i++)
 		parent[i]=0;
    ll max_flow = 0;   
    while (bfs( s, t, parent, val,n))
    { 
    	// cout<<"bing"<<endl;
        ll path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            // cout<<"val "<<u<<" "<<v<<endl;
            // cout<<rGraph[u][v]<<endl;
            path_flow = min(path_flow, rGraph[u][v]);
        }
  		// cout<<"path "<<path_flow<<endl;
        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
             
            	rGraph[u][v] -= path_flow;
            	rGraph[v][u] += path_flow;
             
        } 
        //if(path_flow==0)
        max_flow += path_flow;
        // cout<<"max "<<max_flow<<endl; 
    }
  
    return max_flow;
}

int main()
{
	ios;
	ll t,n,m,k,l,g,a,b,c;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m>>k>>l>>g;
		for(ll i=0; i<n+2; i++)
		{
			for(ll j=0; j<n+2; j++)
				graph[i][j]=0;
		}
		ll mi=INT_MAX, ma=INT_MIN;
		while(m--)
		{
			cin>>a>>b>>c;
			graph[a][b]=c;
			graph[b][a]=c;
			mi=min(c,mi);
			ma=max(c,ma);
			adj[a].pb(b);
			adj[b].pb(a);
		}
		while(k--)
		{
			cin>>a;
			graph[0][a]=INT_MAX;
			graph[a][0]=INT_MAX;
			adj[a].pb(0);
			adj[0].pb(a);
			 
		}
		while(l--)
		{
			cin>>a;	
			 graph[n+1][a]=INT_MAX;
			graph[a][n+1]=INT_MAX;
			 adj[a].pb(n+1);
			adj[n+1].pb(a);
			 
		}

		ll lo=mi, hi=ma;
		ll ans=0;
		// cout<<ford(0,n+1,INT_MAX,n);
		ll val=ma;
		// cout<<bfs( 0, n+1, parent, val,n);
		while(lo<hi)
		{
			ll mid=lo+(hi-lo)/2;
			
			if(ford(0,n+1,mid,n))
			{
				// ans=ford(0,101,mid);
				hi=mid;
			}
			else
			{
				// ans=ford(0,101,mid);
				lo=mid+1;
			}
			// cout<<ans<<" "<<lo<<" "<<hi<<endl;
		}

		cout<<lo*100<<endl;
	}
}