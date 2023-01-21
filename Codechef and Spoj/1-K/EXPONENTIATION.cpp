#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	printf("%lld\n",power(234,12414,1412412));
	return 0;
}
