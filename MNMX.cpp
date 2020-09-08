#include<bits/stdc++.h>
#define ll long long int
#define N 500010

using namespace std;

ll a[N];

int main()
{
	ll t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		printf("%lld\n", a[0]*(n-1));
	}
	return 0;
}
