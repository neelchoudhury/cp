#include<iostream>
#include<cmath>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	ll s=0;
	ll x;
	for(int i=0; i<=n; i++)
	{
		x=0;
		for(int j=1; j<=sqrt(i); j++)
		{
			if(i%j==0)
				x++;
		}
		s+=x;
		
	}
	printf("%lld\n",s);
}
