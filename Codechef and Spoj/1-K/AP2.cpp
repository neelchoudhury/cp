#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll f3,l3,s;
	ll n,d;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld%lld", &f3, &l3, &s);
		n=2*s/(f3+l3);
		d=(l3-f3)/(n-5);
		ll a=f3-2*d;
		printf("%lld\n", n);
		for(ll i=0; i<n; i++)
			printf("%lld ",(a+i*d));
		cout<<endl;
	}
	return 0;
}
