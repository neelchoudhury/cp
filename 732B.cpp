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

ll a[510],b[510];

int main()
{
	ios;
	ll n,k;
	cin>>n>>k;
	for(ll i=0;i<n; i++)
		cin>>a[i];
	mem(b);
	b[0]=a[0];
	ll ans=0;
	for(ll i=1; i<n; i++)
	{
		ll x=max((ll)0,k-a[i-1]-a[i]);
		ans+=x;
		a[i]+=x;
		b[i]=x;
	}
	cout<<ans<<endl;
	for(ll i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;	
}