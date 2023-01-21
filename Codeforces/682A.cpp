#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[6],b[6];

int main()
{
	ll n,m;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(ll i=1; i<=n; i++)
	{
		a[i%5]++;
	}
	for(ll i=1; i<=m; i++)
	{
		b[i%5]++;
	}
	ll ans=a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1];
	cout<<ans<<endl;
	return 0;
}
