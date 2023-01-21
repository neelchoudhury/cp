#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;

vector<ll> adj[10010];
bool vis[10010];

void dfs(ll n)
{
	vis[n]=1;
	for(ll i=0; i<adj[n].size(); i++)
	{
		if(!vis[adj[n][i]])
		{
			dfs(adj[n][i]);
		}
	}
}

int main()
{
	ll n,x;
	cin>>n;
	for(ll i=1;i<=n; i++)
	{
		cin>>x;
		adj[i].pb(x);
		adj[x].pb(i);
	}
	mem(vis);
	ll ans=0;
	for(ll i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			ans++;
			dfs(i);
		}
	}
	cout<<ans<<endl;
	return 0;
}