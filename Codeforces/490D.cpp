#include<bits/stdc++.h>
#define ll long long int
#define N 1000010

using namespace std;

ll gcd(ll m,ll n)
{
	 
		ll r=m%n;
		for(; r!=0;)
		{
			m=n;
			n=r;
			r=m%n;
		}
		return n;
	 
}
 
int main()
{
	ll a1,b1,a2,b2;
	scanf("%lld %lld", &a1, &b1);
	scanf("%lld %lld", &a2, &b2);
	ll x=gcd(a1*b1,a2*b2);
	
	ll y,z;
	y=(a1*b1)/x;
	z=(a2*b2)/x;
	while(y%2==0)
	{
		y/=2;
	}
	while(y%3==0)
	{
		y/=3;
	}
	while(z%2==0)
	{
		z/=2;
	}
	while(z%3==0)
	{
		z/=3;
	}
	if(y!=z)
	{
		cout<<-1<<endl;
	}
	else
	{
		printf("%I64d\n",y*x);
	}
		
	return 0;
}
