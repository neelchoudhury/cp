#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a,ll b)
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
	ll y,w;
	cin>>y>>w;
	y=max(y,w);
	ll x=gcd(6-y+1, 6);
	y=(6-y+1)/x;
	cout<<y<<"/"<<(6/x)<<endl;
	return 0;
}
