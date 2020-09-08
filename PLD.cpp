//Hi = ( Hi – 1 – s[i- 1] * B^(m - 1) ) * B + s[i + m - 1]
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define inf 1e18
using namespace std;

inline ll power(ll a, ll b)
{
	ll ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b>>1;
	}
	return ans;
}

int main()
{
	map<ll,ll> m1,m2;
	map<ll,ll>::iterator it,jt;
	string s;
	ll k;
	scanf("%lld",&k);
	cin>>s;
	ll n=s.length();
	ll hash=0;
	ll po=power(33,k-1);
	for(ll i=0;i<k;++i)
	hash=((hash*33)%MOD+s[i])%MOD;
	m1.insert(pair<ll,ll> (0,hash));
	for(ll i=k;i<n;++i)
	{
		hash=(hash-(po*s[i-k])%MOD+MOD)%MOD;
		hash=((hash*33)%MOD+s[i])%MOD;
		m1.insert(pair<ll,ll> (i-k+1,hash));
	}
	hash=0;
	for(ll i=n-1;i>=n-k;--i)
	hash=((hash*33)%MOD+s[i])%MOD;
	m2.insert(pair<ll,ll> (n-1,hash));
	for(ll i=n-k-1;i>=0;--i)
	{
		hash=(hash-(po*s[i+k])%MOD+MOD)%MOD;
		hash=((hash*33)%MOD+s[i])%MOD;
		m2.insert(pair<ll,ll> (i+k-1,hash));
	}
	ll count=0;
	for(it=m1.begin();it!=m1.end();++it)
	{
		//cout<<it->first<<" "<<it->second<<endl;
		jt=m2.find((it->first)+k-1);
		//cout<<jt->first<<" "<<jt->second<<endl;
		if(it->second==jt->second)
		count++;
	}
	printf("%lld\n",count);
	return 0;
}
