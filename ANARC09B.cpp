#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll w,h;
	scanf("%lld %lld", &w, &h);
	while(w!=0)
	{
		ll g=gcd(w,h);
		ll x=w*h/g;
		//ll ans=(x*x)/(w*h);
		ll ans=(w*h)/(g*g);
		printf("%lld\n", ans);
		scanf("%lld %lld", &w, &h);
	}
	return 0;
}
