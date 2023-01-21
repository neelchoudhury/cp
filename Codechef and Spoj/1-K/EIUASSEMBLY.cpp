#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll,ll> m;

int main()
{
	ll t,n,m, x,y;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n,&m);
		for(ll i=0; i<n; i++)
		{
			 scanf("%lld %lld", &x, &y);
			 m.insert(pair<ll,ll>(x,y));
		}
		while(m>0)
		{
			x=m[0].first;
			y=m[0].second;
			m.delete(m[0]);
			if(y>m)
			{
				x+=1;
				m-=y;
				m.insert(apir<ll,ll>(x,y));
			}
			else
				m=0;
		}
		printf("%lld\n", &m[0].first);
	}
	return 0;
}
