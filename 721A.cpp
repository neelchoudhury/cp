#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;

int main()
{
	ll n;
	string s;
	cin>>n;
	cin>>s;
	int ans=0;
	int cnt=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='B')
		{
			ans++; 
			cnt=0;
			while(s[i]=='B')
			{
				i++;	
				cnt++;
			}
			v.push_back(cnt);
		}
	}
	cout<<ans<<endl;
	if(v.size()>0)
	{
		for(ll i=0; i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}