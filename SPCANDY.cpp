#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,k;
	ll x,y;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		if(k==0 or n<k)
			x=0;
		else
			x=n/k;
		printf("%lld %lld\n",x,n-x*k);
	}
	return 0;
}
