#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> b,r;

ll f(string s)
{
	ll n=0;
	for(ll i=0; i<s.length()-1; i++)
	{
		n=n*10+(s[i]-'0');
	}
	return n;
}

int main()
{
	string s;
	ll n;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s[s.length()-1]=='R')
		{
			r.push_back(f(s));
		}
		else
		{
			b.push_back(f(s));
		}
	}
	sort(r.begin(), r.end());
	sort(b.begin(), b.end());
	reverse(r.begin(), r.end());
	reverse(b.begin(), b.end());
	if(r.size()==0 or b.size()==0)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	{
		ll ans=0;
		for(ll i=0; i<min(r.size(), b.size()); i++)
		{
			ans+=(r[i]+b[i]);
		}
		ans-=2*min(r.size(),b.size());
		cout<<ans<<endl;
	}
	return 0;
} 
