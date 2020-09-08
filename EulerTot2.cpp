#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		ll et=1;
		for(ll i=1; i<=n/2;i++)
		{
		 	if(n%i!=0)
		 		et++;
		}
	 
		printf("%lld\n",et);
	}
	return 0;
}
