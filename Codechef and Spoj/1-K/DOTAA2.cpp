#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a;

int main()
{
	ll t,n,m,d;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &m, &d);
		ll cnt=0;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a);
			if(a%d>0)
				cnt+=a/d;
			else
				cnt+=(a/d-1);
		}
		if(cnt>=m)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
