#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a,b,c;
	a=n/3;
	if(n%3==0)
		print("%lld\n", (ll)pow(n/3,3))
	else
	{
	b=a+1;
	c=n-a-b;
	printf("%lld\n",a*b*c);
	}
	return 0;
}
