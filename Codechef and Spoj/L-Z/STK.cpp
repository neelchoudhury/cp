#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[3003];

int main()
{
	ll t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ll ans=0;
		for(ll i=0; i<k; i++)
			ans-=a[i];
		//cout<<ans<<endl;
		for(ll i=n-1; i>=n-1-k+1; i--)
			ans+=a[i];
		printf("%lld\n", ans);
	}
	return 0;
}
