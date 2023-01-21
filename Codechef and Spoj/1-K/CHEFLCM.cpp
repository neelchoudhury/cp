#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	ll n;
	ll s=0;
	while(t--)
	{
		s=0;
		scanf("%lld", &n);
		for(ll i=1; i<=sqrt(n); i++)
		{
			if(n%i==0 and i!=sqrt(n))
			{
				s+=(i+n/i);
			}
			if(i==sqrt(n) and sqrt(n)*sqrt(n)==n)
			{
				s+=i;
			}
		}
		printf("%lld\n", s);
	}
	return 0;
}
