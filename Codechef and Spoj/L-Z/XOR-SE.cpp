#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll q,l,r;
	memset(a,0,sizeof(a));
	for(ll i=1;i<=100000;i++)
		a[i]=a[i-1]^i;
	for(ll i=1; i<=100000; i++)
		a[i]=a[i-1]^a[i];
	scanf("%lld", &q);
	while(q--)
	{
		scanf("%lld %lld", &l,&r);
		if(l>0)
			printf("%lld\n", a[r]^a[l-1]);
		else
			printf("%lld\n", a[r]);
	}
	return 0;
}
