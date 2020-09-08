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

ll d[100010], a[100010],f[100010],b[100010];
vector<ll> v[100010];
vector<ll>::iterator ii;

bool compr(ll a, ll b)
{
	return v[a][v[a].size()-1]<v[b][v[b].size()-1];
}

int main()
{
	ios;
	ll n,m;
	cin>>n>>m;
	mem(d); mem(a); mem(f); mem(b);
	for(ll i=0; i<=m; i++)
	{
		v[i].clear();
	}
	for(ll i=0; i<n; i++)
	{
		cin>>d[i];
		if(d[i]!=0)
		{
			v[d[i]].pb(i+1);
		}
	}
	for(ll i=1; i<=m; i++)
	{
		for(ll j=0; j<v[i].size(); j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
	for(ll i=1; i<=m; i++)
		b[i]=i;
	for(ll i=1; i<=m; i++)
		cin>>a[i];
	ll fin=INT_MAX;
	  sort(b+1,b+m+1,compr);
	// for(ll i=1; i<=m; i++)	
	// 	cout<<b[i]<<" ";
	// cout<<endl;
	ll curr=1;
	ll sub=1;
	ll fff=0;
	ll ind=1;
	ll ans=INT_MIN;
	for(ll i=1; i<=m; i++)
	{
		ll q=v[b[i]][v[b[i]].size()-1];
		curr=ind;
		for(ll j=curr; j<curr+a[b[i]]; )
		{
			if(ind==q)
			{
				cout<<ind<<" "<<q<<endl;
				fff=1;
				break;
			}
			else
			{
				if(f[ind]!=1)
				{
					f[ind]=1;
					ind++;
					ans=max(ans,ind);
					j++;
				}
				else
				{
					ind++;
					f[ind]=1;
					ind++;
					ans=max(ans,ind);
					j++;
				}
			}
		}
		if(fff==1)
		{
			break;
		}
		ii=lower_bound(v[b[i]].begin(),v[b[i]].end(), ind);
		f[v[b[i]][ii-v[b[i]].begin()]]=1;
		cout<<"bb "<<v[b[i]][ii-v[b[i]].begin()]<<" nn "<<ind<<endl;
		ans=max(ans,v[b[i]][ii-v[b[i]].begin()]);
	}
	if(fff==1)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		cout<<ans<<endl;
	}
	return 0;
}