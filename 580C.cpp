#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))

using namespace std;

ll a[100010];
vector<ll> v[100010];
ll cat[100010];
bool visited[100010];
ll ans=0;
ll n,m;

void dfs(int node,int val )
{
	if(a[node]==1)
		val+=1;
	else
		val=0;
	visited[node]=1;
	cat[node]=val;
	if(cat[node]>m)
		return;
	else
	{
		int f=0;
		for(int i=0; i<v[node].size(); i++)
		{
			if(!visited[v[node][i]] )
			{
				f=1;
				dfs(v[node][i],val);
			}
		}
 		if(f==0)
 		{
 			ans++;
 		}
	}
}

int main()
{
	ios;
	mem(visited);
	mem(a);
	mem(cat);
	cin>>n>>m;
	for(ll i=1;i<=n; i++)
		cin>>a[i];
	ll x,y;
	for(ll i=1; i<=n-1; i++)
	{
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	} 
	dfs(1,a[0]);
	cout<<ans<<endl;
}
