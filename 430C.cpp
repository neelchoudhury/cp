#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

vector<ll> adj[100010];
 
vector<ll>v,vis,ini,fin,ans;

void dfs(ll x,ll odd, ll even, ll level)
{
	// cout<<"dfs "<<x<<endl;
	vis[x]=1;
	ll cnt=0;
	 
	 // cout<<x<<" "<<cnt<<endl;
	 
	 ll f=0;
	 if(((ini[x]+odd)%2!=fin[x]) and level%2==1  )
	 {
	 	ans[x]=!ini[x];
	 	 
	 	odd++;
	 }
	 else if(   ((ini[x]+odd)%2==fin[x]) and level%2==1)
	 {
	 	ans[x]=ini[x];
	 }
	 else if(   ((ini[x]+even)%2!=fin[x]) and level%2==0)
	 {
	 	ans[x]=!ini[x];
	 	even++;
	 }
	 else if(   ((ini[x]+even)%2==fin[x]) and level%2==0)
	 {
	 	ans[x]=ini[x];
	 }
	for(ll i=0; i<adj[x].size(); i++)
	{
		if(!vis[adj[x][i]])
		  dfs(adj[x][i],odd,even,level+1);
		 
	}
	// if(ini[x]!=ans[x])
	// {
	// 	v.pop_back();
	// }
}

int main()
{
	ios;
	ll n,u,v1,qq;
	cin>>n;
	for(ll i=0; i<n-1; i++)
	{
		cin>>u>>v1;
		adj[u].pb(v1);
		adj[v1].pb(u);
	}
	// mem(vis),mem(ini),mem(fin),mem(ans);
	for(ll i=0; i<=n; i++)
	{
		if(i==0)
			ini.pb(0);
		else
		{
			cin>>qq;
			ini.pb(qq);
		}
	}
	for(ll i=0; i<=n; i++)
	{
		if(i==0)
			fin.pb(0);
		else
		{
			cin>>qq;
			fin.pb(qq);
		}
	}
	for(ll i=0; i<=n; i++)
	{
		vis.pb(0); 
		ans.pb(0);
	}

	dfs(1,0,0,1);
	ll ans1=0;
	for(ll i=1; i<=n; i++)
	{
		if(ini[i]!=ans[i])
			ans1++;
	}
	cout<<ans1<<endl;
	for(ll i=0; i<=n; i++)
	{
		if(ini[i]!=ans[i])
		{
			cout<<i<<endl;
		}
	}
	return 0;
}