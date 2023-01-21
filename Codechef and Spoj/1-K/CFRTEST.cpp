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
		vector<ll> v;
		for(int i=0;i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		ll cnt=1;
		sort(a,a+n);
		for(int i=1; i<n; i++)
		{
			if(a[i]!=a[i-1])
				cnt++;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
