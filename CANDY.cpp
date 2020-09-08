#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,s,a[10000],sum,avg,m;
	scanf("%lld", &n);
	while(n!=-1)
	{
		s=0,sum=0;
		
		for(ll i=0;i<n; i++)
		{
			scanf("%lld", &a[i]);
			s+=a[i];
		}
		if(s%n!=0)
			printf("-1\n");
		else
		{
			avg=s/n;
			for(ll i=0; i<n;i++)
			{
				if(a[i]>avg)
					sum+=(a[i]-avg);
			}
			printf("%lld\n", sum);
		}
		scanf("%lld", &n);
	}
}
