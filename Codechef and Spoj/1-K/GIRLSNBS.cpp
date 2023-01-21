#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll g,b;
	scanf("%lld %lld", &g, &b);
	while(g!=-1)
	{
		ll maxi=max(g,b);
		ll mini=min(g,b);
		ll ans=0;
		if(maxi%(mini+1)==0)
		{
			ans=maxi/(mini+1);
		}
		else
		{
			ans=maxi/(mini+1)+1;
		}
		printf("%lld\n", ans);
		scanf("%lld %lld", &g, &b);
	}
	return 0;
}
