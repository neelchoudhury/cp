#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		ll b[n];
		for(ll i=0;i<n; i++)
			b[i]=0;
		b[0]=0;
		ll sum=0;
		for(ll i=1; i<n; i++)
		{
			b[i]=b[i-1]+(i)*(a[i]-a[i-1]);
			sum+=b[i];
		}
		printf("%lld\n", sum);
	}
	return 0;
}

