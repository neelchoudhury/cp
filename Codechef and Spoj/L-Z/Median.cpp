#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	
	ll n;
	scanf("%lld", &n);
	ll a[n];
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a,a+n);
	if(n%2==0)
		printf("%lld\n",a[n/2 -1]);
	else
		printf("%lld\n",a[n/2]);
	return 0;
}
