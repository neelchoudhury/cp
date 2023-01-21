#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000003 

using namespace std;
 
ll fact[1000010];
 
ll pow(ll a, ll b)
{
	a=a%MOD;
	ll ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b>>1;
	}
	return ans;
}
 
ll C(ll n,ll r)
{
	if(n<r)
	return 0;
	else if(n==0&&r==0)
	return 1;
	else
	return (fact[n]*pow(fact[r]*fact[n-r],MOD-2))%MOD;
}
 
ll lucas(ll n,ll r)
{
	if(n==0&&r==0)
	return 1;
	else if(n<r)
	return 0;
	else if(r==0)
	return 1;
	else
	return (C(n%MOD,r%MOD)*lucas(n/MOD,r/MOD))%MOD;
}
 
int main()
{
	fact[0]=1;
	for(int i=1;i<MOD;++i)
	{
		fact[i]=(fact[i-1]*i)%MOD;
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,l,r;
		scanf("%lld%lld%lld",&n,&l,&r);
		cout<<(lucas(n+r-l+1,n)-1+MOD)%MOD<<endl;
	}
	return 0;
}
