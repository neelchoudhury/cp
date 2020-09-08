#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

bool prime(ll n)
{
	for(ll i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		long double et=n;
		ll x=(int)sqrt(n);
		for(ll i=2; i<=x;i++)
		{
			if(prime(i) and n%i==0)
			{
				//cout<<" "<<i<<endl;
				et*=(i-1)/(float)i;
			}
			//cout<<"    "<<et<<endl;
		}
		if (et==n and n>1)
			et-=1;
		printf("%lld\n",(ll)et);
	}
	return 0;
}
