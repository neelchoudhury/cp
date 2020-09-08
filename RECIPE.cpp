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
	ll t,n;
	ll a[55];
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		ll g=a[0];
		for(ll i=1; i<n and g!=1;i++)
			g=gcd(g,a[i]);
		for(ll i=0; i<n and g!=1; i++)
			a[i]/=g;
		for(ll i=0; i<n; i++)
			printf("%lld ", a[i]);
		cout<<endl;
	}
	return 0;
}

