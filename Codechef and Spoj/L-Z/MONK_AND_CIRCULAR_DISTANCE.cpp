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
	map<pair<ll,ll>,ll > vv;
	map<pair<ll,ll>,ll >::iterator jj;

	int main()
	{
		ios;
		ll n,x,y;
		ll q,r;
		cin>>n;
		for(ll i=0; i<n; i++)
		{
			cin>>x>>y;
			//jj= vv.find(pair<ll,ll> (x,y));
			//if(jj==vv.end())
		 
				//vv.insert(pair<pair<ll,ll>, ll> (pair<ll,ll>(x,y),1));
				v.pb(ceil(sqrt(x*x+y*y)));
		 
		}
		sort(v.begin(),v.end());
		cin>>q;
		while(q--)
		{
			cin>>r;
			ii=upper_bound(v.begin(), v.end(), r);

			cout<<(ii-v.begin())<<endl;
		}
		return 0;
	}