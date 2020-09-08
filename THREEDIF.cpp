#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll t,a[3];
	scanf("%lld", &t);
	while(t--)
	{
		for(int i=0; i<3; i++)
			scanf("%lld", &a[i]);
		sort(a,a+3);
		ll m=1;
		a[1]=(a[1]-1>=0)?(a[1]-1):0;
		a[2]=(a[2]-2>=0)?(a[2]-2):0;
		m=((a[0]%MOD)*((a[1])%MOD))%MOD;
		m=((m%MOD)*((a[2])%MOD))%MOD;
		printf("%lld\n", m);
	}	
	return 0;
}

