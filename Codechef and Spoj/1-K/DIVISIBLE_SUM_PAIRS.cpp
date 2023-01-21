#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[110];

int main()
{
	ll n,k;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	ll ans=0;
	for(ll i=1; i<n; i++)
	{
		for(ll j=0; j<i; j++)
		{
			if(((a[i]+a[j])%k)==0)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
