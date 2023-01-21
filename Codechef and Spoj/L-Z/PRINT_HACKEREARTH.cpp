#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[30];

int main()
{
	ll n;
	string s;
	cin>>n;
	cin>>s;
	memset(a,0,sizeof(a));
	for(ll i=0; i<s.length(); i++)
	{
		a[s[i]-'a']++;
	}
	ll ans=INT_MAX;
	ans=min(ans,min(a['h'-'a']/2,min(a[0]/2,min(a['c'-'a'],min(a['k'-'a'], min(a['e'-'a']/2,min(a['r'-'a']/2,(a['t'-'a']))))))));
	cout<<ans<<endl;
	return 0;
}
