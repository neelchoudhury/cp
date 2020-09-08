#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll a,b;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld", &a,&b);
		printf("%lld\n", (a*b));
		
	}
	return 0;
}
