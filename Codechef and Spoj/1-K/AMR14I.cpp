#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll t,n,m,s,q,p;
	scanf("%lld", &t);
	while(t--)
	{
		ll ans=0;
		scanf("%lld %lld %lld %lld %lld", &n, &m, &s, &p, &q);
	//	ll gc=gcd(p,q);
	//	ll lc=(p*q)/gc;
		//ans+=(n/lc);
		ll a1=m/min(p,q);
		if(a1*min(p,q)!=m)
			a1+=1;
		s-=(a1);
		ll ww=(a1)*min(p,q);
		ww=ww-m+1;
		ll qq=((a1)*max(p,q));
		if(qq>n)
		{
			qq=qq%n;
		}
		cout<<"qq "<<qq<<" ww "<<ww<<endl;
		s=s*(max(p,q));
		ans=s%(n-m+1);
		if(qq>=ww)
			ans+=1;
		
		printf("%lld\n", ans);
	}
	return 0;
}
