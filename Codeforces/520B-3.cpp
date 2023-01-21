#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

vector<ll> adj[10001];
bool vst[10001];
ll dis[100001];

int main()
{
	ll n,m;
	cin>>n>>m;
	for(ll i=10000;i>1;--i)
	{
		vst[i]=false;
		adj[i].pb(i-1);
	}
	vst[1]=false;
	for(ll i=1;2*i<10001;++i)
	{
		adj[i].pb(i*2);
	}
	for(ll i = 0; i<10000; i++)
	{
		for(ll j= 0 ; j<adj[i].size(); j++)
		{
			cout<<adj[i][j]<<" ";

		}
		cout<<endl;
	}
	queue<ll> q;
	q.push(n);
	dis[n]=0;
	vst[n]=true;
	while(q.size())
	{
		ll s=q.front();
		q.pop();
		for(ll i=0;i<adj[s].size();++i)
		{
			if(!vst[adj[s][i]])
			{
				// cout<<adj[s][i]<<" "<<s<<endl;
				vst[adj[s][i]]=true;
				q.push(adj[s][i]);
				dis[adj[s][i]]=dis[s]+1;
			}
		}
	}
	cout<<dis[m]<<endl;
	return 0;
}