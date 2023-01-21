#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

vector<pair<ll,ll> > adj[100010];
vector<ll> a;

int main()
{
	ll n,m,k,x,y,l;
	cin>>n>>m>>k;
	while(m--)
	{
		cin>>x>>y>>l;
		adj[x].push_back(pair<ll,ll>(y,l));
		adj[y].push_back(pair<ll,ll>(x,l));
	}
	for(ll i=1; i<=n; i++)
	{
		sort(adj[i].begin(), adj[i].end());
	}
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<adj[i].size(); i++)
		{
			if(adj[i][j].first==adj[i][j-1].first)
			{
				adj[i][j-1].second=min(adj[i][j-1].second, adj[i][j].second);
				adj[i].erase(adj[i].begin()+ j);
			}
		}
	}
	if(k==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		//memset(a,0,sizeof(a));
		ll qq;
		for(ll i=0; i<k; i++)
		{
			cin>>qq;
			a.push_back(qq);
		}
		sort(a.begin(), a.end());
		ll ans=INT_MAX;
		for(ll i=0; i<k; i++)
		{
			for(ll j=0; j<adj[a[i]].size(); j++)
			{
				if(!binary_search(a.begin(), a.end(), adj[a[i]][j].first))
				{
					ans=min(ans,adj[a[i]][j].second);
				}
			}
		}
		if(ans==INT_MAX)
			ans=-1;
		cout<<ans<<endl;
	}
	return 0;
}
