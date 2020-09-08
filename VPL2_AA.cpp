#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll t,p0,p1,tm,p;
	scanf("%lld", &t);
	for(ll i=1; i<=t; i++)
	{
		printf("Scenario #%lld: ", i);
		scanf("%lld %lld %lld %lld", &p0, &p1, &tm, &p);
		ld ans=0;
		ld k=log(p1/(ld)p0)/(ld)tm;
		ans=log(p/(ld)p0)/(ld)k;
		printf("%.2Lf\n", ans);
		//cout<<setprecision(3)<<ans<<endl;
	}
	return 0;
}
