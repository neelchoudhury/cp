#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

vector<int> adj[50001];
bool visit[50001];

void addedge(int v,int w)
{
	adj[v].pb(w);
}

void DFS(int s)
{
	visit[s]=true;
	for(int i=0;i<adj[s].size();++i)
	{
		if(visit[adj[s][i]]==false)
		{
			DFS(adj[s][i]);
			//cout<<"dsa	"<<endl;
		}
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;++i)
		{
			int x;
			scanf("%d",&x);
			addedge(i+1,x);
		}
		for(int i=0;i<=n;++i)
		visit[i]=false;
		int count=0;
		for(int i=1;i<=n;++i)
		{
			if(visit[i]==false)
			{
				DFS(i);
				count++;
			}
		}
		cout<<count-1<<endl;
		for(int i=0;i<=n;++i)
		{
			adj[i].clear();
		}
	}
	return 0;
}
