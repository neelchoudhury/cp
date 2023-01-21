#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 3010
#define MAX 400010

using namespace std;

vector<ll> adj[N];
ll vis[N];
set<ll> st;
ll cost[N];
bool mark[N];
ll f=0;

bool dfs(ll ind, ll par)
{
	vis[ind]=1;
	bool b;
	set<ll>::iterator ii;
	
	for(ll i=0; i<adj[ind].size(); i++)
	{
		if(!vis[adj[ind][i]])
		{ 
			b=dfs(adj[ind][i],ind); 
			if(b)
			{ 
				return true;
			}  
		}
		else if(vis[adj[ind][i]] and adj[ind][i]!=par)
		{ 
			st.insert(ind);
			st.insert(adj[ind][i]);
			st.insert(par);
			mark[ind]=mark[adj[ind][i]]=mark[par]=1;
			return false;
		}
	} 
	if(mark[par] and mark[ind])
	{ 
		return true;
	}
	else
	{
		if(!mark[ind])
			return false;
		else
		{

			mark[par]=1; 
			st.insert(par);
			return false;
		}
	}
	
}

void dfs2(ll ind, ll cnt)
{
	vis[ind]=1;
	if(st.find(ind)!=st.end())
	{
		cost[ind]=0;
	}
	else
	{
		cost[ind]=cnt+1;
	}
	for(ll i=0; i<adj[ind].size(); i++)
	{
		if(!vis[adj[ind][i]])
		{
			dfs2(adj[ind][i],cost[ind]);
		}
	}
}

int main()
{
	ll n,x,y;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	mem(vis);
	mem(mark);
	bool b=dfs(1,-1);
	for(ll i=1; i<=n; i++)
		cost[i]=0;
	mem(vis); 
	dfs2(*st.begin(),0);
	for(ll i=1; i<=n; i++)
		cout<<cost[i]<<" ";
	cout<<endl;
	return 0;
}