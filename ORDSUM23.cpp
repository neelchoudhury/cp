#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[1000010];

void f()
{
	a[0]=0;
	a[1]=0;
	a[2]=a[3]=1;
	for(ll i=4; i<=1000000;i++)
	{
		a[i]=(a[i-2]%MOD+a[i-3]%MOD)%MOD;
	}
}

int main()
{
	ll t,n;
	memset(a,0,sizeof(a));
	f();
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		printf("%lld\n", a[n]);
	}
	return 0;
}
