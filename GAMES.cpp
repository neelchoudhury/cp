#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll t;
	ld n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lf", &n);
		ll x=n;
		//printf("x::  %lf\n", x);
		ll i=1;
		float b=x;
		while(abs(n-x)>0.0001)
		{
			n=n*i;
			x=(int)n;
			i++;
		}
		printf("%lld\n", i);
		
	}
}
