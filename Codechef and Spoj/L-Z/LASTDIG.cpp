#include<bits/stdc++.h>
#define ll long long int
#define MOD 10

using namespace std;

ll powr(ll a,ll b)
{
	ll t=1;
	while(b>0){
		if(b&1) t=(t*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return t;
}

int main()
{
	ll t,a,b,x;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &a, &b);
		x=powr(a,b);
		printf("%lld\n", x);
	}
	return 0;
}
