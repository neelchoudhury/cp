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

ll x[5010], w[5010];
// ll dp[5010][5010];
set<ll> s;
set<ll>::iterator ii;

int main()
{
	ll n,k;
	ios;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>x[i]>>w[i];
		if(i>0)
		{
			w[i]=w[i]+w[i-1];
		}
	}
	// mem(dp);
	ll ans=0;
	s.insert(0);
	for(ll i=1; i<n; i++)
	{
		ans+=(w[i]*(x[i]-x[0]));
	}
	ll tmp=INT_MIN;
	ll kk=0,l=0,elm=0;
	for(ll i=2; i<=k; i++)
	{
		tmp=INT_MIN;
		ll j=1;
		for( j=1; j<n; j++)
		{
			if(s.find(j)!=s.end())
			{
				ii=s.upper_bound(j);
				if(ii==s.end())
				{
					kk=n-1;
				}
				else
				{
					kk=(*ii)-1;
				}
				ii=s.find(j);
				if(ii!=s.begin())
				{
					l=(*ii)-1;
				}
				else
				{
					l=0;
				}
				if((w[kk]-w[i]*(i-l))<tmp)
				{
					tmp=(w[kk]-w[i]*(i-l));
					elm=j;
				}
			}
		}
		s.insert(j);
		ans+=tmp;
	}
	cout<<ans<<endl;
	return 0;

}