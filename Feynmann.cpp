#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll x;
	cin>>t;
	do
	{
		x=(t)*(t+1)*(2*t+1)/6;
		printf("%lld\n", x);
		cin>>t;
	}while(t!=0);
}
