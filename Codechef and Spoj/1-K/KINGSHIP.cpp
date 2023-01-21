#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N];

int main()
{
	ll t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld", &n);
		for(int i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ll ans=0;
		for(int i=1; i<n; i++)
		{
			ans+=a[i];
		} 
		ans*=a[0];
		printf("%lld\n", ans );
	}
	return 0;
	
}
