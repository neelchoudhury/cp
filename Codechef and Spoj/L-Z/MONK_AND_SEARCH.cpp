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

int main()
{
	ios;
	ll n,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
	ll q,ch;
	cin>>q;
	while(q--)
	{
		cin>>ch>>x;
		if(ch==0)
		{
			ii=lower_bound(v.begin(),v.end(), x);
			cout<<(v.end()-ii)<<endl;
		}
		else
		{
			ii=upper_bound(v.begin(),v.end(), x);
			cout<<(v.end()-ii)<<endl;
		}
	}
	return 0;
}