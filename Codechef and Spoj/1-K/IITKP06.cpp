#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;
int main()
{
	ll t;
	ll e,o;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld",&e,&o);
		ll s=0;
		s=e+o;
		ll b=s/5;
		ll cnt=0;
		if(s%5!=0)
			cout<<(-1)<<endl;
		else
		{
			cnt=abs(e-2*b);
			
			printf("%lld\n", cnt);
		}
	}
	return 0;
}
