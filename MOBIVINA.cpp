#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 255
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

// ll m[N],v[N];
vector<ll>v[N];
ll cap[N][N];
ll res[N][N];
ll par[N];
ll act[N];

ll find(ll sour,ll sink)
{
	ll curr;
	ll ans=0;
	ll from;
	while(1)
	{
		memset(par,-1,sizeof par);
		queue<int> q;
		q.push(sour);
		par[sour]=-1;
		act[sour]=INF;
		while(!q.empty())
		{
			curr=q.front();
			q.pop();
			for(int i=0;i<v[curr].size();i++)
			{
				if(par[v[curr][i]]==-1 && cap[curr][v[curr][i]]-res[curr][v[curr][i]]>0)
				{
					act[v[curr][i]]=min(act[curr],cap[curr][v[curr][i]]-res[curr][v[curr][i]]);
					par[v[curr][i]]=curr;
					q.push(v[curr][i]);
					if(v[curr][i]==sink)
					{
						ans+=(act[sink]);
						break;
					}
				}
			}
		}
		if(par[sink]==-1)
		{
			break;
		}
		else
		{
			curr=sink;
			while(par[curr]!=-1)
			{
				from=par[curr];
				res[from][curr]+=act[sink];
				res[curr][from]-=act[sink];
				curr=from;
			}
		}
	}
	return ans;
}

int main()
{
	ios;
	ll n;
	cin>>n;
	ll x;
	// mem(m);mem(v);
	mem(cap);mem(res);
	for(ll i=1; i<=n; i++)
	{
		cin>>x;
		v[0].pb(i);
		cap[0][i]=x;
	}
	for(ll i=1; i<=n; i++)
	{
		cin>>x;
		v[i].pb(n+1);
		cap[i][n+1]=x;
	}
	
	
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<=n; j++)
		{
			cin>>x;
			if(x)
			{
				v[i].pb(j);
				v[j].pb(i);
				cap[i][j]=x;
				cap[j][i]=x;
			}
		}
	}
	mem(par);mem(act);
	ll ans=find(0,n+1);
	cout<<ans<<endl;
	return 0;
}