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
	ll t,b,x;
	char a[1005];
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%s %lld", a, &b);
		ll a1=a[strlen(a)-1]-'0';
		x=powr(a1,b);
		printf("%lld\n", x);
	}
	return 0;
}
