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

vector<ll> adj[150010];
ll vis[150010];
vector<ll>::iterator ii;
ll qq;
bool f;
ll cnt=0, edg=0;

void dfs(ll n)
{
	vis[n]=1;
	cnt++;
	edg+=adj[n].size();
	// cout<<"cc "<<cnt<<" "<<edg<<endl;
	for(ll i=0; i<adj[n].size(); i++)
	{
		
		if(!vis[adj[n][i]])
		{
			dfs(adj[n][i]);
		}	 
	}
	// vis[n]=0;
	// cout<<n<<" ni sss"<<endl;
	// return true;
}

int main()
{
	ll n,m,x,y;
	ios;
	cin>>n>>m;
	for(ll i=0; i<m; i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ll f=1;
	// for(ll i=1; i<=n; i++)
	// {
	// 	sort(adj[i].begin(), adj[i].end());
	// }
	mem(vis);
	for(ll i=1; i<=n; i++)
	{
		cnt=0,edg=0;
		if(!vis[i])
		{
			dfs(i);
			// cout<<cnt<<" "<<edg<<endl;
			if(edg!=cnt*(cnt-1))
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		
	}
	cout<<"YES"<<endl;
	return 0;
}