#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

vector<pair<int, int> > adj[210];
vector<pair<int, int> >::iterator ii;
priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int,int> > > heap;
bool vis[210];
int dis[210];
int n = 200;

void dijkstra()
{
	heap.push({0,1});
	int ans = 0;
	vis[1] = 1;
	for(int i = 1; i<=200; i++)
	{
		dis[i] = 1000000;
	}
	dis[1] = 0;
	while(!heap.empty())
	{
		pair<int,int> p = heap.top();
		heap.pop();
		ans += p.ff;
		if(!vis[p.ss])
			dis[p.ss] =  min(p.ff, INT_MAX);
		vis[p.ss] = 1;

		
		for(int i = 0; i<adj[p.ss].size(); i++)
		{
			if(!vis[adj[p.ss][i].ff])
			{
				if(dis[p.ss] + adj[p.ss][i].ss < dis[adj[p.ss][i].ff])
				{
					
					dis[adj[p.ss][i].ff] = dis[p.ss] + adj[p.ss][i].ss;
					heap.push({dis[adj[p.ss][i].ff], adj[p.ss][i].ff});
				}
				
			}
		}
	}
}

int main()
{
	string s;
	for(int i = 1; i<=n; i++)
	{
		getline(cin, s);
		int flag = 0;
		int num = 0;
		int k = 0;
		for(int j = 0; j<s.length(); j++)
		{
			if(s[j]>= '0' && s[j]<= '9' )
			{
				num = num*10 + s[j] - '0';
			}
			else if(num!=0)
			{
				if(flag == 1)
				{
					adj[i].pb({num, 0});
					flag = 2;
					num = 0;
				}
				else if(flag == 2)
				{
					ii = adj[i].end();
					ii--;
					(ii->ss) = num;
					flag = 1;
					num = 0;
				}
				else
				{	
					num = 0;
					flag = 1;
				}
			}
			if(j == s.length() - 2)
			{
				ii = adj[i].end();
				ii--;
				(ii->ss) = num;
				flag = 0;
				num = 0;
			}
		}
	}

	dijkstra();

	for(int i = 1; i<=n; i++)
	{
		cout<<dis[i]<<endl;
	}

	cout<<dis[7]<<","<<dis[37]<<","<<dis[59]<<","<<dis[82]<<","<<dis[99]<<","<<dis[115]<<","<<dis[133]<<","<<dis[165]<<","<<dis[188]<<","<<dis[197]<<","<<endl;
}