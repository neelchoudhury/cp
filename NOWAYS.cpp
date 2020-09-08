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


ll nck(ll n, ll k)
{
	ll result = 1    ;
	for (ll i=1; i<= min(k,n-k); i++)
	{
   		result = ((result%MOD)*((n-i+1)%MOD))%MOD;
   		result = ((result%MOD) *(power(i,MOD-2,MOD)%MOD))%MOD;
	}
	return result%MOD;
}




int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld",&n, &k );
		ll ans;
		if(n==0)
			ans=0;
		else
			ans=nck(n,k);
		printf("%lld\n", ans);
	}
	return 0;
}
