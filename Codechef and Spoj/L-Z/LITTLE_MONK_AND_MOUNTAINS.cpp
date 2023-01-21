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
vector<ll >::iterator ii;
vector<pair<ll,ll> > vv;
vector<pair<ll,ll> >::iterator iii;

int main()
{
	ios;
	ll n,q,x,y;
	cin>>n>>q;
	for(ll i=0; i<n; i++)
	{
		cin>>x>>y;
		vv.pb(pair<ll,ll>(x,y));
		if(i==0)
			v.pb(y-x+1);
		else
			v.pb(y-x+1+v[i-1]);

	}
	ll r;
	 
	while(q--)
	{
		cin>>r;
		ii=lower_bound(v.begin(),v.end(), r);
		ll i=ii-v.begin();
		if(v[i]==r)
			cout<<vv[i].ss<<endl;
		else
		{
			ll k=v[i]-r;
			cout<<vv[i].ss-k<<endl;
		}
	}
	return 0;	
}