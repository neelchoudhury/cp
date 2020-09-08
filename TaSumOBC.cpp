#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
	//	ll a[n+5];
		ll s=1;
		ll t=n;
		for(ll i=0; i<=n; i++)
		{
			t=((n-i)*(1))/(i+1);
			cout<<t<<" "<<i<<endl;
			//t=(t%3)%MOD;
			s+=((((s%3)%MOD +(t%3)%MOD)%3)%MOD);
		}
		printf("%lld\n", s);
	}
	return 0;
}

