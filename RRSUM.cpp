#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m,x,y;
	scanf("%lld %lld", &n, &m);
	while(m--)
	{
		scanf("%lld", &x);
		y=abs(x-2*n-1);
		y=n-y>0?n-y:0;
		
		printf("%lld\n", y);
	}
	return 0;
}
