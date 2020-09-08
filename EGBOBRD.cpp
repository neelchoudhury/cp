#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	ll a[100010];
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		memset(a,0,sizeof(a));
		for(ll i=0;i<n; i++)
			scanf("%lld", &a[i]);
		ll j=0;
		ll ans=1,tmp=k;
		for(ll i=0;i<n; i++)
		{
			if(a[i]<=tmp)
			{
				if(a[i]<tmp)
				tmp-=(a[i]+1);
				else if(a[i]==tmp)
				tmp=0;
			}
			else
			{
				ll y=(a[i]-tmp)/k; 
				if(((a[i]-tmp)%k)==0)
				{ 
					tmp+=(y*k);
					ans+=y;
				}
				else
				{ 
					tmp+=((y+1)*k);
					ans+=(y+1);
				}
				if(a[i]<=tmp)
			{
				if(a[i]<tmp)
				tmp-=(a[i]+1);
				else if(a[i]==tmp)
				tmp=0;
			}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
