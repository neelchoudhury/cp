#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010],b[100010];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		ll p=0,s=1;
		sort(a,a+n);
		b[n-1]=a[n-1];
		
		for(ll i=n-2; i>=0; i--)
		{
			b[i]=a[i]+b[i+1];
		}
		for(ll i=0; i<n; i++)
		{
			b[i]=b[i]*(i+1);
			p=max(p,b[i]);
		}
	/*	for(ll i=0; i<n; i++)
		{
			
		}*/
		printf("%lld\n", p);
		
	}
	return 0;
}
