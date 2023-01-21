#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 100010
#define MAX 400010

using namespace std;

vector<ll> c;
vector<ll> cc;
vector<ll> cost[K];
vector<ll> v[N];
set<ll> st[K];
vector<ll>::iterator i1,i2;
ll vis[N],qq[N]; 

ll dfs( ll ind,ll cnt)
{
	vis[ind ]=1;
	cnt++;
	for(ll i=0; i<v[ind ].size(); i++)
	{
		if(!vis[v[ind ][i]])
			cnt+=dfs( v[ind ][i], 0);
	} 
	return cnt;
}

void floydW(ll ind)
{
    
    ll i, j, k;
    for (k = 0; k < ind; k++)
    {
        for (i = 0; i < ind; i++)
        {
            for (j = 0; j < ind; j++)
            {
                if (cost[i][k] + cost[k][j] < cost[i][j])
                    cost[i][j] = cost[i][k] + cost[k][j];
            }
        }
    }
}

int main()
{
	ios;
	ll n,m,k,u,vv,x;
	cin>>n>>m>>k;
	for(ll i=0; i<k; i++)
	{
		for(ll j=0; j<k; j++)
			cost[i].pb(0);
	}
	mem(qq); 
	for(ll i=0; i<k; i++)
	{
		cin>>x;
		c.pb( x);
		if(i>0)
		{
			c[i]+=c[i-1];
		}
		cc.pb(x); 
	}
	ll qw=1;
	for(ll i=0; i<k; i++)
	{
		for(ll j=0; j<cc[i]; j++)
			st[i].insert(qw++);
	} 
	for(ll i=0; i<k; i++)
	{
		for(ll j=0; j<k; j++)
			cost[i][j]=INT_MAX;
	}
	for(ll i=0; i<m; i++)
	{
		cin>>u>>vv>>x;
		i1=lower_bound(c.begin(),c.end(),u); 
		ll k1=i1-c.begin();
		i1=lower_bound(c.begin(),c.end(),vv); 
		ll k2=i1-c.begin(); 
		cost[k1][k2]=min(cost[k1][k2],x);
		cost[k2][k1]=min(cost[k2][k1],x);
		 
		if( x==0)
		{ 
			qq[k1]=u; 
			qq[k2]=vv;
			
			v[u ].pb(vv );
			v[vv].pb(u); 
		}
	} 
	ll ff=0;
	ll cnt=0;
	if(m==0 and n!=k)
	{
		cout<<"No"<<endl;
		return 0;
	} 
	for(ll i=0; i<k; i++)
	{
		mem(vis); 
		cnt=dfs(*st[i].begin()  ,0); 
		for(set<ll>::iterator ii=st[i].begin(); ii!=st[i].end(); ii++)
		{
			if(!(vis[*ii]))
			{ 
				ff=1;
				break;
			}
		}
		if(ff)
			break;
	}
	if(ff)
	{
		cout<<"No"<<endl;
		return 0;
	}
	else
	{
		cout<<"Yes"<<endl;
		for(ll i=0; i<k; i++)
			cost[i][i]=0;
		floydW(k);
		for(ll i=0; i<k; i++)
		{
			for(ll j=0; j<k; j++)
			{
				if(cost[i][j]==INT_MAX)
					cost[i][j]=-1;
				cout<<cost[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0; 	
}