#include<iostream>
#include<cstdio>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll t;
	ll n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll sum=0;	
		ll f0=0;
		ll f1=1;
		ll f2=1;
		ll f3=f1+f2;
		if(m<=3)
		{
			if(n<=1)
				cout<<4<<endl;
			else if(n==2)
				cout<<3<<endl;
			else if(n==3)
				cout<<2<<endl;
				 
			continue;
		}
		for(ll i=3;i<=m;i++)
		{
			f3=(f1+f2)%MOD;
		
			if(i>=n)
				sum+=(f3%MOD);
			if(sum>=MOD)
				sum%=MOD;
			f3%=MOD;
			f1=f2%MOD;
			f2=f3%MOD;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
