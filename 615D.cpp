#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

map<ll,ll> pr;
map<ll,ll>::iterator ii;

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

ll a[200010];

int main()
{
	ll n,x,i,f=0,ans=1,temp=1;
	sc(n);
	for(i=0;i<n;i++)
	{
		sc(x);
		a[x]++;
		temp=(temp%MOD*x%MOD)%MOD;
	}

	ll prod=1; 
	for(i=2;i<200010;i++)
	{
		if(a[i]>0)
			prod*=(a[i]+1);
		if( !f && !(prod&1))
		{
			prod/=2;
			f=1;
		}
		prod%=(MOD-1);
	} 
	 

	if(f)
		pr(power(temp,prod,MOD));
	else
	{
		prod/=2;
		for(i=2;i<200010;i++)
		{
			ans= (ans%MOD*power(i,a[i]/2,MOD)%MOD)%MOD;
		}

		ans=(ans%MOD*power(temp,prod,MOD)%MOD)%MOD;
		pr(ans);

	}
}
