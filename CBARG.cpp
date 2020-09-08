#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0;i<n; i++)
			scanf("%lld", &a[i]);
		ll all=a[0],curr=a[0];
		for(ll i=1; i<n; i++)	
		{
			 if(a[i]>curr)
			 	all+=(a[i]-curr);
			 
			curr=a[i];
		}
		
		printf("%lld\n", all);
	}
	return 0;
}
