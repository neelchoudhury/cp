#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int


using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	//cin>>t;
	ll a[t];
	for(ll i=0; i<t; i++)
	{
		scanf("%lld", &a[i]);
		//cin>>a[i];
	}
	sort(a,a+t);
	for(ll j=0; j<t; j++)
	{
		printf("%lld\n", a[j]);
		//cout<<a[j]<<endl;
	}	
	return 0;
}
