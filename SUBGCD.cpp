#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll m, ll n)
{
	ll r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0;i<n; i++)	
			scanf("%lld", &a[i]);
		ll cnt=0,cnt1=0;
		
		for(int i=0; i<n;  )
		{
			int j=i+1;
			cnt1=1;
			while(gcd(a[i],a[j])==1)
				cnt1++,j++;
			cnt=max(cnt,cnt1);
			i=j;
		}
		if(cnt<=1)
			cnt=-1;
		printf("%lld\n",cnt);
	}
	return 0;
}
