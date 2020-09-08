#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<ll> v[10010];
bool visited[10010];
ll dist[10010];

ll dfs(ll node, ll tm)
{
	tm++;
	dist[node]=tm;
	visited[node]=1;
	ll dis=0,ans=tm;
	for(ll i=0; i<v[node].size(); i++)
	{
		if(!visited[v[node][i]] )
		{
			//tm=dist[node];
			dis=dfs(v[node][i],tm);
			ans=max(dis,ans);
		}
	} 
	return ans;
}

int main()
{
	ll n;
	scanf("%lld", &n);
	ll x,y;
	for(ll i=1; i<=n; i++)
	{
		v[i].clear();
	}
	ll qq=n;
	qq--;
	while(qq--)
	{
		scanf("%lld %lld", &x, &y);
		//cout<<x<<" "<<y<<endl;
		v[x].pb(y);
		v[y].pb(x);
	}
	
	for(ll i=1; i<=n ; i++)
	{
		//cout<<v[1].size()<<" ss"<<endl;
		sort(v[i].begin(), v[i].end());
		/*for(ll j=0; j<v[i].size(); j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;*/
	}
	memset(visited, 0, sizeof(visited));
	memset(dist,0,sizeof(dist));
	ll ans=0,maxi=0,tm=0;
	for(ll i=0; i<=n; i++)
	{
	    memset(visited, 0, sizeof(visited));
	    memset(dist,0,sizeof(dist));
		maxi=dfs(i,tm);
		ans=max(ans,maxi);
		//cout<<i<<" "<<ans<<endl;
	}
	printf("%lld\n", ans-1);
	return 0;
}
