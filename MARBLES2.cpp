#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll nck( ll n, ll k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    ll result = n;
    for( ll i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main()
{
	ll t;
	scanf("%lld", &t);
	ll n,k;
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		ll x=nck(n-1,k-1);
		printf("%lld\n", x);
	}
	return 0;
}
