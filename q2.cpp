#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define pb push_back

using namespace std;

ll aa[1010][1010];

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	ll t,a,b,n,k;
	scanf("%lld", &t);
	for(ll ii=1; ii<=t;ii++)
	{
		printf("Case #%lld: ",ii);
		scanf("%lld %lld %lld %lld", &a, &b, &n, &k);
		memset(aa,0,sizeof(aa));
		for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=n;j++)
			{
				if(i!=j)
				{
					aa[i][j]=(power(i,a,k)%k +power(j,b,k)%k)%k;
				}
			}
		}
		ll ans=0;
		for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=n; j++)
			{
				if(i!=j)
				{
					 
					 
					if(( aa[i][j])%k==0)
						ans=(ans+1)%MOD;
				}
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}