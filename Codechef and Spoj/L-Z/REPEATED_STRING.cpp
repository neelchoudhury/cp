#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	string s;
	ll n;
	cin>>s;
	ll cnt=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='a')
			cnt++;
	}
	cin>>n;
	ll ans=cnt*(n/s.length());
	ll qq;
	for(ll i=0; i<n%s.length(); i++)
	{
		if(s[i]=='a')
			qq++;
	}
	ans+=qq;
	cout<<ans<<endl;
	return 0;
}
