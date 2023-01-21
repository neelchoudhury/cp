#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll ans= (power(4,n,MOD) - (2%MOD)*(power(3,n,MOD)%MOD)%MOD +MOD + power(2,n,MOD))%MOD;
		printf("%lld\n", ans);
	}
	return 0;
}
