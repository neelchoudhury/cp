#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	int n;
	scanf("%lld",&t);
	while(t--)
	{
		cin>>n;
		if(n<2)
			continue;
		ll a[n];
		ll mf=0;
		for(int i=0;i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a,a+n);
		 mf=a[n-1]-a[0];
		printf("%lld\n", mf);
	}
	return 0;
}
