#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<ll> v,v1,v2;

int main()
{
	ll t,n,x,y,q;
	scanf("%lld", &t);
	for(ll ii=1; ii<=t; ii++)
	{
		printf("Case %lld:\n", ii);
		scanf("%lld", &n);
		for(ll i=1; i<=n; i++)
			v.pb(-1);
		for(ll i=1; i<=n;i++)
		{
			scanf("%lld", &x);
			for(ll j=0; j<x; j++)
			{
				scanf("%lld", &y);
				v[y]=i;
			}
		}
		scanf("%lld", &q);
		while(q--)
		{
			scanf("%lld %lld", &x, &y);
			v1.clear();
			v2.clear();
			v1.pb(x);
			v2.pb(y);
			ll i=x;
			while(v[i]!=-1)
			{
				v1.pb(v[i]);
				i=v[i];
			}
			i=y;
			while(v[i]!=-1)
			{
				v2.pb(v[i]);
				i=v[i];
			}
			i=v1.size()-1;
			ll j=v2.size()-1;
			ll f=0;
			for(;i>=0 and j>=0;i--,j--)
			{
				if(v1[i]!=v2[j])
				{
					printf("%lld\n", v1[i+1]);
					f=1;
					break;
				}
			}
			if(f==0)
			{
				if(v1.size()>v2.size())
				{
					printf("%lld\n", v2[0]);
				}
				else
				{
					printf("%lld\n", v1[0]);
				}
			}
		}
	}
	return 0;
}
