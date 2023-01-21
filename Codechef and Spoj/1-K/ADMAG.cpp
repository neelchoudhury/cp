#include<bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main()
{
	ll fib[90];
	fib[0]=1;
	fib[1]=2;
	for(ll i=2; i<90; i++)
		fib[i]=fib[i-1]+fib[i-2];
	/*for(ll i=0; i<90; i++)
		cout<<fib[i]<<endl;*/
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll ans=1;
		for(ll i=0; i<90; i++)
		{
			if(n<fib[i])
			{
				ans=i;break;
			}
			if(n==fib[i])
			{
				ans=i+1; break;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
	return 0;
}
