#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int i=0;
		ll p;
		do
		{
			p=pow(2,i);
			i+=1;	
		}while(n&1<<i);
		printf("%lld\n", p);
	}
	return 0;
}
