#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a[n];
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll maxi=0,y=0;
	ll i;
	ll flag=0;
	for( i=0;i<n; i++)
	{
		if(a[i]==0)
		{
			flag=1;
			if(maxi==0)
				maxi=i,y=i;
			else
			{
				maxi=max(maxi,i-y-1);
				y=i;
			}
				
		}
	}
	if(a[n-1]!=0)
	maxi=max(maxi,i-y-1);
	
	if(flag==0)
		maxi=n;
	printf("%lld\n", maxi);
	return 0;
}
