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
#define P 31
#define Q 491

using namespace std;

queue< ll> q;
ll vis[10010];
ll ht[10010];
vector<ll> adj[10010];

void bfs(ll n, ll m)
{
	vis[n] = 1;
	q.push(n);
	ht[n] = 0;
	// cout<<"qinf "<<endl;
	// pair<ll,ll> p;
	ll p;
	ll cnt =300;
	while(!q.empty())
	{
		p = q.front();
		q.pop();
		// cout<<"bing"<<endl;
		for(ll i = 0; i< adj[p].size(); i++)
		{
			// cout<<"hi"<<endl;
			if(!vis[adj[p][i]])
			{
				// cout<<adj[p][i]<<" "<<p<<endl;
				vis[adj[p][i]] = 1;
				q.push(adj[p][i]);
				ht[adj[p][i]] = ht[p] + 1;
				// if(adj[p.ff][i] == m)
				// 	return p.ss + 1;
			}
		}
		// cout<<q.size()<<" sz"<<endl;
	}
	// return 0;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	mem(vis);
	for(ll i = 1; i<= 10000; i++)
	{
		adj[i].pb(i-1);
		if(i*2 <=10000)
			adj[i].pb(i*2);
		// cout<<"japp"<<endl;
	}
	for(ll i = 0; i<10000; i++)
	{
		for(ll j= 0 ; j<adj[i].size(); j++)
		{
			// cout<<adj[i][j]<<" ";

		}
		// cout<<endl;
	}
	bfs(n,m);
	cout<<ht[m]<<endl;
	return 0;
}