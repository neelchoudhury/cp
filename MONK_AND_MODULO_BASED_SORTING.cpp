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

	ll a[10010];
	ll k;
	vector<pair<ll,ll> > v;



	int main()
	{
		ios;
		ll n ;
		cin>>n>>k;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
			v.pb(pair<ll,ll>(a[i]%k, i));
		}
		sort(v.begin(), v.end() );
		for(ll i=0; i<n; i++)
			cout<<a[v[i].second]<<" ";
		cout<<endl;
		return 0;
	}