#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,k;
	scanf("%lld", &t);
	int x=1;
	while(t--)
	{
		scanf("%lld", &k);
		ll a[k],b[k];
		for(ll i=0;i<k; i++)
			scanf("%lld", &a[i]);
		for(ll i=0;i<k; i++)
			scanf("%lld", &b[i]);
		sort(a,a+k);
		sort(b,b+k);
		ll sum=0;
		for(int i=0;i<k; i++)
			sum+=(abs(a[i]-b[i]));
		printf("Case %d: %lld\n", x,sum);
		x++;
	}
	return 0;
}
