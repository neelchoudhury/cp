#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
 
int main()
{
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i=0;i<n;++i)
	{
		scanf("%lld",&a[i]);
	}
	ll max=0;
	ll count=0;
	for(ll i=0;i<n;++i)
	{
		if(a[i]==0)
		{
			if(count>max)
			max=count;
			count=0;
		}
		else
		count++;
	}
	if(count>max)
	max=count;
	cout<<max<<endl;
	return 0;
} 
