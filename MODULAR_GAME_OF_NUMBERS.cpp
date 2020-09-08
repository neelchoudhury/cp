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

ll a[4010], b[4010];
ll c[4010];
map<ll,ll> m;
map<ll,ll>::iterator iii;
ll d[8010];
set<ll> s;
set<ll>::iterator ii,jj;

int main()
{
	ll n,p,q,x;
	cin>>n>>p>>q;
	for(ll i=0; i<p; i++)
	{
		cin>>x;
		a[x%n]++;
	}
	for(ll i=0; i<q; i++)
	{
		cin>>x;
		b[x%n]++;
	}
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n; j++)
		{
			c[(i+j)%n]+=(-(a[i]+b[j])%n+n)%n;
		}
	}
	ll ans=INT_MAX, ind=0,cnt=0;
	for(ll i=1; i<=n; i++)
	{
		cnt=0;
		for(ll j=0; j<n; j++)
		{
			if((c[j]+i)%n==0)
			{
				cnt++;
			}
		}
		if(cnt<ans)
		{
			ans=cnt;
			ind=i;
		}
	}

	cout<<ind<<endl;
	return 0;
}