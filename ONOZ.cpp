#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,h,m;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &h,&m);
		ll ans=1;
		ll q=min(h,m);
		ll w=max(h,m);
		h=q;
		m=w;
		for(int i=1; h>9?i<=9:i<h;i++)
		{
			if(i<m)
				ans++;
			if((i*10+i)<m)
				ans++;
		}
		if(min(h,(ll)9)==(ll)9)
		{
			for(int i=11; i<h; i+=11)
			{
				if(i<m)
					ans++;
				if(i/10<m)
					ans++;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
