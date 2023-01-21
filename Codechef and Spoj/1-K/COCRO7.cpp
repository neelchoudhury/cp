#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll cnt=0;
	ll a[n];
	for(ll i=0;i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=0;a[i]<k;i++)
	{
		if(a[i]!=a[i-1] or i==0)
		{
			if(a[i]%2!=0)
				cnt++;
		}
	}
	printf("%lld\n", cnt);
	return 0;
}
