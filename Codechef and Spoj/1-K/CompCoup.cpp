#include<iostream>
#include<cstdio>
#include<algorithm>

#define ll long long int

using namespace std;

int main()
{
	ll n,k;
	scanf("%lld%lld", &n,&k);
	ll a[n];
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);	
	}
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n ; j++)
		{
			//cout<<i<<" "<<j<<endl;
			if(j!=i and (a[i]+a[j])==k)
			{
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
	
}
