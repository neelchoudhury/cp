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
#define N 80010
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

vector <ll> v[MAX];
ll cap[MAX][MAX];
ll res[MAX][MAX];
ll par[MAX];
ll act[MAX];
ll a[MAX];

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
	ll n,m,x,y;
	cin>>n;
	while(n>0)
	{
		cin>>m;
		if(m==0)
		{
			for(int i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			cout<<0<<endl;
			cin>>n;
			continue;
		}
		// cout<<n<<" n "<<m<<endl;
		ll sumf=0,sumg=0;
		mem(cap);mem(res);
		mem(a);
		for(ll i=1; i<=n; i++)
		{
			sumg++;
			cin>>x;
			a[i]=x;
			if(x)
			{
				cap[0][i]=1;
				v[0].pb(i); 
			}
			else
			{
				cap[i][n+1]=1;
				v[i].pb(n+1); 
			}
		}
		for(ll i=0; i<m; i++)
		{
			sumf++;
			cin>>x>>y;
			cap[x][y]=1;
			v[x].pb(y);
			cap[y][x]=1;
			v[y].pb(x);
		}
		ll k=find(0,n+1);
		// v[0].clear();
		for(ll i=0; i<=n; i++)
		{
			v[i].clear();
			par[i]=0;
			act[i]=0;
			a[i]=0;
		} 
		cout<<k<<endl;
		cin>>n;
	}
	return 0;
}