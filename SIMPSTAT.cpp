#include<bits/stdc++.h>
#define ld long double
#define ll long long int
#define e 0.000001
 
using namespace std;
 
ll a[10010];
 
int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		memset(a,0,sizeof(a));
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ld ans=0;
		for(ll i=k; i<n-k; i++)
		{
			ans+=a[i] ;
		}
		//cout<<ans<<endl;
		ans=ans/(n-2*k);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(9);
		cout<<ans<<endl;
		 
		//printf("%LG\n", ans);
	}
	return 0;
} 
