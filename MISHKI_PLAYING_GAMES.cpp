#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000010];


int main()
{
	ll n,q, l,r;
	scanf("%lld %lld", &n, &q);
	for(ll i=0;i<n; i++)
	{
		scanf("%lld", &a[i]);
		a[i]=(ll)log2(a[i])+1;
		if(i>0)
		{
			a[i]=a[i]+a[i-1];
		}
	}
	while(q--)
	{
		scanf("%lld %lld", &l, &r);
		if(l==1)
		{
			if(a[r-1]%2)
			{
				printf("Mishki\n");
			}
			else
			{
				printf("Hacker\n");
			}
		}
		else
		{
			if((a[r-1]-a[l-2])%2)
			{
				printf("Mishki\n");
			}
			else
			{
				printf("Hacker\n");
			}
		}
	}
	return 0;
}
