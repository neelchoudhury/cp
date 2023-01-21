#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pb push_back
 
using namespace std;
 
vector<string> v;
vector<vector<ll>> hash1;
vector<vector<ll>> hash2; 
 
int main()
{
	ll n,qqq;
	string s; 
	scanf("%lld", &n);
	for(ll i=0; i<n; i++)
	{
		cin>>s;
		cin.clear();	//This is very important for this problem
		v.pb(s);
	}
	ll h1=0,h2=0;
	vector<ll> qq;
	for(ll i=0; i<n; i++)
	{
		h1=0;
		for(ll j=0; j<v[i].size(); j++)
		{
			h1=((h1%MOD)*(31%MOD)%MOD +v[i][j]%MOD)%MOD;
			qq.pb(h1);
		} 
		
		 
		hash1.pb(qq);
		qq.clear();
		h1=0;
		for(ll j=0; j<v[i].size(); j++)
		{
			h1=((h1%MOD)*(37%MOD)%MOD +v[i][j]%MOD)%MOD;
			qq.pb(h1);
		} 
	 
		hash2.pb(qq);
		qq.clear();
	}
	scanf("%lld", &qqq);
	ll l,r;
	while(qqq--)
	{
		scanf("%lld %lld", &l, &r);
		ll l1=v[l].length();
		ll l2=v[r].length(); 
		ll hi=min(l1,l2);
		ll lo=0;
		ll x;
		while(lo<hi)
		{
			x=lo + (hi-lo +1)/2; 
			if(hash1[l][x-1]==hash1[r][x-1] and hash2[l][x-1]==hash2[r][x-1])
			{ 
				lo=x;
			}
			else
			{
				hi=x-1;
			}
		} 
		printf("%lld\n", hi); 
	}
	return 0;
} 
