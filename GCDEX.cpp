#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a,ll b)
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
	ll x,s,i,j;
	scanf("%lld", &x);
	while(x!=0)
	{
		s=0;
		for(i=1;i<x; i++)
		{
			for(j=i+1; j<=x;j++)
			{
				s+=(gcd(i,j));
			}
		}
		printf("%lld\n", s);
		scanf("%lld", &x);
	}
	return 0;
}
