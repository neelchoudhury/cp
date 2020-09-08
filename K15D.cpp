#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

bool prime(ll n)
{
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		scanf("%lld", &n);
		ll k=n;
		ll c;
		for(ll i=n, c=0;k>=0;k/=2)
		{
			if(prime(i))
			{
				while(k>=i)
				{
					c+=1;
					k-=i;
				}
			}
		}
		printf("%lld\n",c);
	}
}
