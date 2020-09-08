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

using namespace std;

ll par[2010];
vector<ll> v;
ll vis[2010];
ll val[2010];

void dfs(ll n)
{
	ll cost = a[1], curr = INT_MAX;
	while(n != 1)
	{
		curr = min(curr, val[n]);
		cost += curr;
		n = par[n];
	}
	cout<<cost<<" ";
}

int main()
{
	ll n, x;
	cin>>n;
	par[1] = 1;
	for(ll i = 2; i<=n; i++)
	{
		cin>>x;
		par[i] = x;
	}
	for(ll i = 1; i<=n; i++)
	{
		cin>>val[i];
	}
	cout<<val[1]<<" ";
	for(ll i = 2; i<=n; i++)
	{
		// v.clear();
		// mem(vis);
		dfs(i);
	}
	cout<<endl;
	return 0;
}