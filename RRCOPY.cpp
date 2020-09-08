#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0;i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ll cnt=1;
		for(ll i=1;i<n; i++)
			if(a[i]!=a[i-1])
				cnt++;
		printf("%lld\n", cnt);
	}
	return 0;
}
