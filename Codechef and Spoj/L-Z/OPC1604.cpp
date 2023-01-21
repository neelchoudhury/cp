#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll ans=0;
	ll i=1;
	while(i<n)
	{
		if(n&i)
			ans++;
		i=i<<1;
	}
	i=1;
	i=i<<ans;
	printf("%lld\n", i);
	return 0;
}
