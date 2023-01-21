#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

vector<ll> adj[200010];
vector<ll>::iterator ii;
bool vis[200010];
vector<ll> path;
ll went;

void dfs(ll n)
{
	vis[n] = 1;
	path.pb(n);
	for(vector<ll>::iterator ii = adj[n].begin(); ii != adj[n].end(); ii++)
	{
		
		if(!vis[*ii])
		{
			ll x = *ii;
			dfs(x);
			path.pb(n);
		}
	}
	
}

int main()
{
	ll n, m, k, x, y;
	ios;
	cin>>n>>m>>k;
	mem(vis);
	for(ll i = 0; i < m; i++)
	{
		cin>>x>>y;
		if(x != y)
		{
			adj[x].pb(y);
			adj[y].pb(x);
		}
	}
	// for(ll i = 1; i <= n; i++)
	// {
	// 	for(ii = adj[i].begin(); ii != adj[i].end(); ii++)
	// 		cout<<*ii<<" ";
	// 	cout<<endl;
	// }
	dfs(1);
	// for(ll i = 0; i<path.size(); i++)
	// 	cout<<path[i]<<" ";
	// cout<<endl;
	ll ind = 0;
	ll kk = ((2*n)%k) == 0 ? ((2*n)/k) : ((2*n)/k + 1) ;
	ll mi = min((int)(kk), (int)path.size()-(int)ind); 
	for(ll i = 1 ; i<=k; i++)
	{
		mi = min((int)(kk), (int)path.size()-(int)ind); 
		cout<<mi<<" ";
		for(ll j = ind; j < mi + ind; j++)
			cout<<path[j]<<" ";
		ind += mi;
		cout<<endl;
		if(ind == path.size())
			ind--;
	
		
	}
	return 0;
}