#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	ll c;
	while(t--)
	{
		cin>>n;
		scanf("%lld",&c);
		ll a[n];
		for(int i=0;i<n; i++)
			scanf("%lld", &a[i]);
		ll s=0;
		for(int i=0; i<n; i++)
			s+=a[i];
		sort(a,a+n);
		for(int i=0;s>c;i++)
		{
			s-=a[i];
		}
		printf("%lld\n",s);
	}
	return 0;
}
