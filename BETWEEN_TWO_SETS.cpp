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

ll a[110], b[110];

ll f1(ll x, ll n)
{
	for(ll i=0; i<n; i++)
	{
		if(x%a[i]!=0)
			return 0;
	}
	return 1;
}

ll f2(ll x,ll n)
{
	for(ll i=0; i<n; i++)
	{
		if(b[i]%x!=0)
			return 0;
	}
	return 1;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll mi=INT_MAX,ma=INT_MIN;
	for(ll i=0; i<n;  i++)
	{
		cin>>a[i];
		ma=max(a[i],ma);
	}
	for(ll i=0; i<m;   i++)
	{
		cin>>b[i];
		mi=min(b[i],mi);
	}
	ll ans=0;
	// cout<<ma<<" "<<mi<<endl;
	for(ll i=ma; i<=mi; i++)
	{
		if(f1(i,n) and f2(i,m))
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}