#include<iostream>
#include<cstdio>
#include<cmath>
#define ll unsigned long long int

using namespace std;

int main()
{
	ll t;
	ll n,k;
	scanf("%llu", &t);
	while(t--)
	{
		scanf("%llu%llu", &n,&k);
		ll cnt=0;
		ll i=0;
		ll m=0;
		ll p=n;
		if(k==1)
		{
			printf("%llu\n", n);
			continue;
		}
		while(1)
		{
			m=pow(k,i);
			if(n>m)
			{
				i++;
			}
			else
			{
				break;
			}
		}
		i-=1;
		while(n>=1)
		{
			m=pow(k,i);
			cnt+=(n/m);
			n=n%m;
			i-=1;
			
		}
		printf("%llu\n",cnt );
		
	}
	return 0;
}
