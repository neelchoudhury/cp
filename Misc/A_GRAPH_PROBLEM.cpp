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

ll adj[55][55];
bool as[55][55];
vector<ll> v[55];
ll a[55][55];
ll vis[55];
queue<ll> q;
set<ll> qw, s2;
ll c=0;

ll bfs(ll x, ll y, ll n)
{
	if(x==y)
		return 1; 
	for(ll i=0; i<n; i++)
	{
		if(adj[x][i] and i==y)
			return 1; 
	} 
	return 0;
}

void dfs(ll n, ll cnt, ll vv)
{
	// cout<<"bang"<<endl;
	vis[n]=1;
	for(ll i=0; i<cnt; i++)
	{
		if(a[n][i] ==vv )
		{
			c++;
			qw.insert(v[i][0]);
			qw.insert(v[i][1]);
			qw.insert(v[i][2]);
			if(!vis[i])
				dfs(i, cnt, vv);
		}
	}
}

int main()
{
	ll n,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n; j++)
		{
			cin>>adj[i][j];
		}
	}
	ll cnt=0;
	mem(as);
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n; j++)
		{
			for(ll k=0; k<n; k++)
			{
				if(adj[i][j] and adj[j][k] and adj[k][i])
				{
					if(!(as[i][j] and as[j][k] and as[k][i]))
					{
						v[cnt].pb(i);
						v[cnt].pb(j);
						v[cnt].pb(k);
						cnt++;
						as[i][j]=as[j][k]=as[k][i]=1;
						as[j][i]=as[k][j]=as[i][k]=1;

					}
				}
			}
		}
	}
	// cout<<" cnt "<<cnt<<endl;
	// cout<<"printing v"<<endl;
	// for(ll i=0; i<cnt; i++)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
	// }
	ll dist=INT_MAX;
	ll vv=0;
	if(cnt>1)
	{
		for(ll i=0; i<cnt; i++)
		{
			for(ll j=0; j<cnt; j++)
			{
				if(i!=j)
				{
					dist=0;
					for(ll k=0; k<3; k++)
					{
						for(ll l=0; l<3; l++)
						{
							// cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
							 // cout<<v[i][k]+1<<" "<<v[j][l]+1<<endl;
							// cout<<"dist "<<bfs(v[i][k],v[j][l],n)<<endl;
							//dist=max(dist, bfs(v[i][k],v[j][l],n));
							a[i][j]+=bfs(v[i][k],v[j][l],n);

						}
					}
					vv=max(vv,a[i][j]);
					//a[i][j]=dist;
					// cout<<i<<" "<<j<<" "<<a[i][j]<<"hey"<<endl;
				}
			}
		}
	}
	// for(ll i=0;i<cnt; i++)
	// {
	// 	for(ll j=0; j<cnt; j++)
	// 		cout<<a[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<"vv "<<vv<<endl;
	// cout<<"done"<<endl;
	long double ans=0;
	mem(vis);
	for(ll i=1; i<cnt; i++)
	{
		c=1;
		qw.insert(v[i][0]);
		qw.insert(v[i][1]);
		qw.insert(v[i][2]);
		dfs(i, cnt, vv);
		// cout<<"hey "<<c<<" "<<qw.size()<<endl;
		if(c*1.0/qw.size()>ans)
		{
			ans=c*1.0/qw.size();
			s2=qw;
			// cout<<"Printing s2"<<endl;
			// for(set<ll>::iterator ii=s2.begin(); ii!=s2.end(); ii++)
			// {
			// 	cout<<(*ii)<<" ";
			// }
			// cout<<endl;
		}
		qw.clear();
	}
	if(cnt==1)
	{
		cout<<3<<endl;
		sort(v[0].begin(), v[0].end());
		for(ll i=0; i<v[0].size(); i++)
			cout<<(v[0][i]+1)<<" ";
		cout<<endl;
		// cout<<v[0][0]+1<<" "<<v[0][1]+1<<" "<<v[0][2]+1<<endl;
		return 0;
	}
	if(cnt==0)
	{
		cout<<0<<endl;
		return 0;
	}
	cout<<s2.size()<<endl;
	for(set<ll>::iterator ii=s2.begin(); ii!=s2.end(); ii++)
	{
		cout<<(*ii)+1<<" ";
	}
	cout<<endl;
	return 0;
}