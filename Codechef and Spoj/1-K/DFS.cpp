#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mem(a) memset(a,0,sizeof(a));

using namespace std;

bool visited[1000];
ll time[1000][2];

void dfs(int node, int *tm)
{
	tm++;
	time[node][0]=tm;
	visited[node]=1;
	for(int i=0; i<v[node].size(); i++)
	{
		if(!visited[v[node][i]] )
			dfs(v[node][i],&tm);
	}
	time[node][1]=tm;
}

int main()
{
	ios;
	cout<<"Program to implemet DFS: "<<endl;
	int n;
	cout<<"Number of edges: "<<endl;
	cin>>n;
	vector<ll> v[n+1];
	int p;
	cout<<"Enter number of pairs to be entered: ";
	cin>>p;
	ll x,y;
	while(p--)
	{
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	for(int i=0; i<n ; i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	cout<<"Enter node on which to perform dfs: ";
	int nd;
	cin>>nd;
	mem(visited);
	int tm=0;
	dfs(nd,&tm);
}
