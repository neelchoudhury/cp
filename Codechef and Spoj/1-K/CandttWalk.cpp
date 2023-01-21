#include<iostream>
#include<cmath>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n;
	ll d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		scanf("%lld", &d);
		ll s=0;
		if(n==1)
		{
			s=(d-1)*(d)*(2*d-1)/6;
		}
		if(n==2)
		{
			int flag=0;
			for(ll i=0,j=0; i<d and j<d;  )
			{
				s+=(i^j)*(i+j);
				if(flag==1)
				{
					i++;
					flag=0;
				}
				else
				{
					j++;
					
				}
			}
		}
		printf("%lld\n", s);
	}
	return 0;
}
