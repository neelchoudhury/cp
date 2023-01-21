#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define pb push_back

using namespace std;

int main()
{
	ll t,l,r;
	scanf("%lld", &t);
	for(ll i=1; i<=t;i++)
	{
		printf("Case #%lld: ",i);
		scanf("%lld %lld", &l, &r);
		ll x=min(l,r);
		ll ans=x*(x+1)/2;
		printf("%lld\n", ans);
	}
	return 0;
}