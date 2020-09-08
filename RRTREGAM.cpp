#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[100010];
vector<ll> v[100010];
ll vis[100010];
ll sum[100010];
ll ans=0;

void dfs(ll n)
{
	vis[n]=1;
	// cout<<n<<" "<<sum[n]<<endl;
	for(ll i=0; i<v[n].size(); i++)
	{
		if(vis[v[n][i]]==0)
		{
			 sum[v[n][i]]=sum[n]+1;
			 dfs(v[n][i]);
		}
	}

}

int main()
{
	ios;
	ll n;
	cin>>n;
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	 mem(vis);mem(sum);
	ll x,y;
	for(ll i=1; i<=n-1; i++)
	{
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	// for(ll i=1; i<=n; i++)
	// {
	// 	for(ll j=0; j<v[i].size(); j++)
	// 		cout<<v[i][j]<<" ";
	// 	cout<<endl;
	// }
	 dfs(1);
	 /*for(ll i=1; i<=n; i++)	
	 	cout<<sum[i]<<" ";
	 cout<<endl;*/
	ll ans =0;
	for(ll i=1; i<=n; i++)
	{
		if((a[i]/2)%2==1)
			ans^=sum[i];
	}
	if(ans!=0)
		cout<<"Rachel"<<endl;
	else
		cout<<"Ross"<<endl;
	return 0;
}