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
		ll ans=0,x;
		x=sqrt(n+sqrt(n));
		if(x*x<n)
			ans=2*x;
		else
			ans=2*x-1;
		printf("%lld\n", ans);
	}
	return 0;
}
