#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[505][505];

int main()
{
	ll n,p;
	scanf("%lld %lld", &n, &p);
	memset(a,0,sizeof(0));
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n; j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	ll k=0;
	for(ll i=0;i<2;i++)
	{
		k=0;
		for(ll j=0; j<p-1; j++)
		{
			ll x=min(rand()%n+k,n-(p-j)+1);
			cout<<x<<" ";
			k=x+1;
		}
		cout<<endl;
	}
}
