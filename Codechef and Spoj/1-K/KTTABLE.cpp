#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[10010], b[10010];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		for(ll i=0; i<n; i++)
			scanf("%lld", &b[i]);
		for(ll i=n-1; i>=0; i--)
			a[i]=a[i]-a[i-1];
		ll ans=0;
		for(ll i=0; i<n;i++)
		{
			if(a[i]>=b[i])
				ans++;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
