#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

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

ll a[1000010];
ll b[1000010];

int main()
{
	ll n,k;
	sc(n);
	sc(k);
	mem(a);
	mem(b);
	for(ll i=1; i<=n; i++)
	{
		sc(a[i]);
	}
	ll ans=0;
	ll sum=1,j=1;
	for(ll i=1; i<=n; i++)
	{
		
		
		sum=(sum+power(j,2,MOD))%MOD;
		if(i>(n-k+1))
			sum=(sum-power(j-k+1,2,MOD )+ MOD)%MOD;
		b[i]=sum;
		j++;
	}
	for(ll i=1;i<=n; i++)
	{
		ans=(ans%MOD + (b[i]*a[i])%MOD )%MOD;
	}
	printf("%lld\n", ans);
	return 0;
}
