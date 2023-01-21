#include<bits/stdc++.h>
#define ll long long int

using namespace std;

//ll a[100010];

int main()
{
	ll q,l,r;
	//memset(a,0,sizeof(a));
	 
	scanf("%lld", &q);
	ll ans=0;
	while(q--)
	{
		scanf("%lld %lld", &l,&r);
	 	if((r-l)%2==0)
	 	{
	 		for(ll i=r; i>=l; i-=2)
	 		{
	 			ans=ans^i;
			}
			for(ll i=l-1; i>=0; i--)
				ans=ans^i;
			printf("%lld\n",ans);
		}
		else
		{
			for(ll i=r; i>l; i-=2)
				ans=ans^i;
			printf("%lld\n",ans);
		} 
	}
	return 0;
}
