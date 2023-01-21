#include<bits/stdc++.h>
#define ll long long int
#define MOD 10007

using namespace std;

ll a[100010];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		ans=((ans%MOD )+(a[i]%MOD*a[n-i-1]%MOD)%MOD)%MOD;
	}
	cout<<ans<<endl;
	return 0;
}
