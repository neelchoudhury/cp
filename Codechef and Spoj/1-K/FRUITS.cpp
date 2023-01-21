#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &m, &k);
	if(abs(n-m)>k)
	{
		printf("%lld\n", abs(n-m)-k);
	}
	else
		printf("0\n");
	}
	return 0;
}
