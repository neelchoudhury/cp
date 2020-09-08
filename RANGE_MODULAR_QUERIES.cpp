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

ll a[40010];
vector<pair<ll,ll> > v;
vector<ll> el[40010];
ll ans[40010];
set<ll> s;
set<ll>::iterator ii; 

int main()
{
	ll n,q,w,x,y,l,r;
	cin>>n>>q;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i]; 
	}
	for(ll i=0; i<q; i++)
	{
		cin>>l>>r>>x>>y;
		el[l].pb(i+1);
		el[r].pb(-(i+1));
		v.pb({x,y});
		 
	}
	//sort(v.begin(),v.end(),cmpr);
	ll kk=0;
	for(ll i=0; i<n; i++)
	{
		// cout<<"start ";
		 for(ll j=0; j<el[i].size(); j++)
		 {
		 	// cout<<el[i][j]<<" ";
		 	if(el[i][j]>0)
		 	{
		 		s.insert(el[i][j]-1);
		 	}
		 	 
		 }
		 // cout<<endl;
		 for(ii=s.begin(); ii!=s.end(); ii++)
		 {
		 	// cout<<i<<" "<<a[i]<<" "<<v[*ii].ff<<" "<<v[*ii].ss<<" "<<(a[i]%v[*ii].ff==v[*ii].ss)<<endl;
		 	ans[*ii]+=((a[i]%v[*ii].ff==v[*ii].ss));
		 }
		 for(ll j=0; j<el[i].size(); j++)
		 {
		 	// cout<<el[i][j]<<" ";
		 	if(el[i][j]<0)
		 	{
		 		s.erase(-el[i][j]-1);
		 	}
		 	 
		 }
	}
	for(ll i=0; i<q; i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}