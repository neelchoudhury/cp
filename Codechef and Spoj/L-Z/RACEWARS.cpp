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
		ll a[n], b[n];
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		for(ll j=0; j<n; j++)
			scanf("%lld", &b[j]);
		sort(a,a+n);
		sort(b,b+n);
		ll cnt=0,i=0,j=0;
		for(;i<n; )
		{
			if(b[j]<a[i])
			{
				cnt++;
				j++;
				i++;
			}
			else
			{
				i++;
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
