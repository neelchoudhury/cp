#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int i=0;
		ll p;
		for(; i<=9; i++)
		{
			p=pow(2,i);
			if(p<=n)
				continue;
			else
			{
				printf("%lld\n", p);
				break;
			}
		} 
	}
	return 0;
}
