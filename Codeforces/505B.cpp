#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

vector<ll> adj[110][110];
ll str[110][110];
ll col[110];
ll vis[110],vis2[110];

void dfs(ll n, ll cnt, ll cl)
{
	vis[n]=1;
	str[cl][n]=cnt;
	for(ll i=0; i<adj[cl][n].size(); i++)
	{
		if(!vis[adj[cl][n][i]])
		{
			dfs(adj[cl][n][i],cnt,cl);
		}
	}
}

int main()
{
	ll n,m;
	cin>>n>>m;
	mem(col);
	mem(str);
	ll a,b,c,q,u,v;
	while(m--)
	{
		cin>>a>>b>>c;
		col[c]++;
		adj[c][a].pb(b);
		adj[c][b].pb(a);
	}
	for(ll i=1; i<=100; i++)
	{
		if(col[i])
		{
			mem(vis);
			ll cnt=0;
			for(ll j=1; j<=100;j++)
			{
				
				if(!vis[j])
				{
					mem(vis2);	
					dfs(j,cnt ,i);
					cnt++;
					 
				}
			}
		}
	}
	cin>>q;
	while(q--)
	{
		cin>>u>>v;
		ll ans=0;
		for(ll i=1; i<=100 ; i++)
		{
			if(col[i])
			{
				if(str[i][u]==str[i][v])
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}