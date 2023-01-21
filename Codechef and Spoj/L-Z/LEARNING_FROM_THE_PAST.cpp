#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,a[5];
	scanf("%lld", &n);
	ll ans=0;
	while(n--)
	{
		for(ll i=0; i<3; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a,a+3);
		reverse(a,a+3);
		ans=max(ans,a[0]+a[1]);
	}
	printf("%lld\n",ans);
	return 0;
}
