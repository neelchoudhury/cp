#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll b[100010];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		memset(a,0,sizeof(a));
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		memset(b, 0, sizeof(b));
		b[0]=a[0];
		
		ll ans1=0,ans2=0;
		for(ll i=1; i<n; i++)
		{
			if(b[i-1]+a[i]>a[i])
				b[i]=a[i]+b[i-1];
			else
			{
				b[i]=max(b[i-1], a[i]);
			}
			
		}
		ans1=b[0];
		for(ll i=0; i<n; i++)
		{
			if(b[i]>ans1)
				ans1=b[i];
		}
		for(ll i=0; i<n; i++)
		{ 
			if(a[i]>0)
				ans2+=a[i];
		}
		 
		if(ans2==0)
		{
			ans2=-9999999999;
			for(ll i=0; i<n; i++)
			{
				if(a[i]>ans2)
					ans2=a[i];
			}
		} 
		printf("%lld %lld\n", ans1, ans2);
	}
	return 0;
}
