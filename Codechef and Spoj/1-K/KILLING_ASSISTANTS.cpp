#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
	ll r=(a%b);
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
	ll t,n,m;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &m);
		ll x=gcd(9*m, 8*n+m);
		printf("%lld/%lld\n",(9*m)/x,(8*n+m)/x);
	}
	return 0;
}
