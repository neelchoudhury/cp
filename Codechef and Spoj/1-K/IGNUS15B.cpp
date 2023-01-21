#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		scanf("%lld",&n);
		ll x=1;
		while(x<n)
			x*=2;
		x/=2;
		printf("%lld\n", x);
	}
	return 0;
}
