#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll t,m,n;
	scanf("%lld", &t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%lld %lld", &n, &m);
		for(ll i=0; i<n+m; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n+m);
		reverse(a,a+n+m);
		for(ll i=0; i<n+m; i++)
			printf("%lld ", a[i]);
		printf("\n");
	}
	return 0;
}
