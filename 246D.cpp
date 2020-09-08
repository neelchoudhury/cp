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
#define N 100010
#define MAX 400010

using namespace std;

ll c[N];
vector<ll> adj[N];
ll vis[N];
set<ll> st[N];

ll dfs(ll ind)
{
	vis[ind]=1;
	for(ll i=0; i<adj[ind].size(); i++)
	{
		if(c[adj[ind][i]]!=c[ind])
		{
			st[c[ind]].insert(c[adj[ind][i]]);
		}
		if(!vis[adj[ind][i]])
			dfs(adj[ind][i]);
	}
}

int main()
{
	ios;
	ll n,m,x,y;
	cin>>n>>m;
	mem(c);
	for(ll i=1; i<=n; i++)
		cin>>c[i];
	for(ll i=0; i<m; i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	mem(vis);
	for(ll i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			dfs(i);
		}
	}
	ll ans=0,co=INT_MAX;
	for(ll i=1; i<=n; i++)
	{
		// cout<<st[c[i]].size()<<endl;
		if(st[c[i]].size()>ans)
		{
			ans=st[c[i]].size();
			co=c[i];
		}
		else if(st[c[i]].size()==ans)
		{
			if(c[i]<co)
			{
				co=c[i];
			}
		}
	}
	cout<<co<<endl;
	return 0;

}