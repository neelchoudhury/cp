#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll t,n,m,x;
	scanf("%lld", &t);
	for(ll i=1; i<=t; i++)
	{
		scanf("%lld %lld", &n, &m);
		for(ll i=0; i<n; i++)
			a[i]=0;
		for(ll i=0; i<m; i++)
		{
			scanf("%lld", &x);
			a[x-1]=1;
		}
		ll ans=m;
		for(ll i=0; i<n; i++)
		{
			if(a[i]==0)
			{
				if(i>0 and a[i-1]==1)
				{
					ans++;
					//a[i-1]=-1;
				}
				else if(i<n-1 and a[i+1]==1)
				{
					ans++;
					//a[i+1]=-1;
				}
			}
		}
		printf("Case %lld: %lld\n",i, ans);
	}
}
