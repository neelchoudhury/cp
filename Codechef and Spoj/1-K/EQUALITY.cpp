#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	ll a[50005];
	ll s;
	ll n;
	while(t--)
	{
		scanf("%lld", &n);
		s=0;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			s+=a[i];
		}
		s/=(n-1);
		for(ll i=0; i<n; i++)
		{
			printf("%lld ",s-a[i]);
		}
		printf("\n");
	}
	return 0;
}

