#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a[n];
	for(ll i=0;i<n; i++)
		scanf("%lld", &a[i]);
	ll m,x,y;
	scanf("%lld %lld %lld", &m, &x, &y);
	ll s=0;
	ll ma,mi;
	ll maxi;
	while(m--)
	{
		ma=max(x,y);
		mi=min(x,y);
		maxi=a[mi];
		for(ll i=mi+1; i<=ma; i++)
		{
			if(a[i]>maxi)
				maxi=a[i];
		}
		s+=maxi;
		x=(x+7)%(n-1);
		y=(y+11)%(n);
	}
	printf("%lld\n", s);
	return 0;
}

