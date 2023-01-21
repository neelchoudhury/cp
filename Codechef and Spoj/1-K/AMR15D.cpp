#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100005], s[100005];

int main()
{
	ll n,q,k;
	scanf("%lld", &n);
	for(int i=0; i<n; i++)
		scanf("%lld", &a[i]);
	sort(a,a+n);
	memset(s,0,sizeof(s));
	s[0]=a[0];
	for(ll i=1; i<n; i++)
		s[i]=a[i]+s[i-1];
	scanf("%lld", &q);
	while(q--)
	{
		scanf("%lld", &k);
		ll x;
		x=n/(k+1);
		if(n%(k+1)!=0)
			x+=1;
		//if(k!=0)
			printf("%lld\n", s[x-1]);
	}
	return 0;
}
