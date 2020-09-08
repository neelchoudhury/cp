#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	ll x,y;
	scanf("%lld", &n);
	scanf("%lld", &x);
	y=x,n--;
	while(n--)
	{
		scanf("%lld", &x);
		y=y^x;
	}
	printf("%lld\n", y);
	return 0;
}
