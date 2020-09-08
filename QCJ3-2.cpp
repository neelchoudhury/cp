#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll ans=0;
		for(ll i=1; i<=n; i++)
		{
			scanf("%lld", &a);
			if(a%2)
				ans^=i;
		}
		if(ans)	
			cout<<"Tom Wins"<<endl;
		else
			cout<<"Hanks Wins"<<endl;
		
	}
	return 0;
}
