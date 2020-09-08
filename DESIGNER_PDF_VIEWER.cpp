#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a[28];
	memset(a,0,sizeof(a));
	char ch;
	for(ll i=0; i<26; i++)
	{
		cin>>a[i];
	}
	string s;
	cin>>s;
	ll ans=s.length();
	ll sum=0;
	for(ll i=0; i<s.length(); i++)
	{
		sum=max(sum,a[s[i]-'a']);
	}
	cout<<ans*sum<<endl;
	return 0;
}
