#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0; i<n;i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ll t;
		for(ll i=1; i<n-1; i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		for(ll i=0; i<n;i++)
		{
			printf("%lld ", a[i]);
		}
		cout<<endl;
	}
	return 0;
}
