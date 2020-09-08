#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	ll ans=0;
	ll j=1;
	for(ll i=0; i<n; i++)
	{
		a[i]=min(j,a[i]);
		j=a[i]+1;
	}
	ans=j;
	cout<<ans<<endl;
	return 0;
}
