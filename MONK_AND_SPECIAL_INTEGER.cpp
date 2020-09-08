#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

vector<ll> v;
vector<ll>::iterator ii;
vector<ll> qq;
vector<pair<ll,ll> > pp;

ll inc(ll c)
{
	ll sum=0;
	for(ll i=0; i<c; i++)
	{
		sum+=v[i];
	}
	ll ans=sum;
	for(ll i=c; i<v.size(); i++)
	{
		ans=max(ans, sum-v[i-c]+v[i]);
		sum=sum-v[i-c]+v[i];
	}
	return ans;
}

int main()
{
	ios;
	ll n,x,q;
	cin>>n>>x;
	for(ll i=0; i<n; i++)
	{
		cin>>q;
		v.pb(q);
	}
	ll lo,hi, mid;
 	lo=0, hi=n;
 	while(lo<=hi)
	{
		mid=lo+( hi-lo)/2;
		// cout<<lo<<" "<<hi<<" "<<mid<<endl;
		if(inc(mid)<=x )
		{
			 lo=mid+1;
		}
		else
		{
			 hi=mid-1;
		}
	}
	cout<<lo-1<<endl;

	return 0;
}