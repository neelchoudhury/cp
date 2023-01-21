#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

ll fac[100010],fact[100010];

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
	mem(fac);
	fac[0]=0,fac[1]=1;
	mem(fact);
	fact[0]=1;
	for(ll i=1; i<=100010; i++)
	{
		fact[i]=(fact[i-1]*i)%MOD;
	}
	for(ll i=2; i<=100000; i++)
	{
		if(i%2==0)
		{
			fac[i]=(fac[i-1]-power(fact[i],MOD-2,MOD)+MOD)%MOD;
		}
		else
		{
			fac[i]=(fac[i-1]+power(fact[i],MOD-2,MOD)+MOD)%MOD;
		}
	}
	ios;
	ll t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<fac[x]<<endl;
	}
	return 0;
}