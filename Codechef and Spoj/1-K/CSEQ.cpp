#include<bits/stdc++.h>
#define ll long long int
#define M 1000003

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	ll n,l,r;
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &l, &r);
		ll x=r-l+1;
		ll a[x];
		ll s=0;
		s=x%M;
		for(ll i=0; i<x; i++)
		{
			a[i]=1;
		}
		n-=1;
		s=s%M;
		while(n--)
		{
			s+=1;
			s=s%M;
			for(ll i=1;i<x;i++)
			{
				a[i]=(a[i]%M+a[i-1]%M)%M;
				s+=(a[i]);
				s%=M;
			}
			s=s%M;
		}
		printf("%lld\n", s);
	}
	return 0;
}

