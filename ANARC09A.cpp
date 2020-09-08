#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define sc(n) scanf("%lld",&n)
using namespace std;

int main()
{
	ll t=1;
	while(1)
	{
		string s;
		cin>>s;
		if(s[0]=='-')
		break;
		ll n=s.length();
		vector<char> v;
		for(ll i=0;i<n;++i)
		{
			if(v.empty())
			v.pb(s[i]);
			else if(s[i]=='}'&&v[v.size()-1]=='{')
			v.pop_back();
			else 
			v.pb(s[i]);
		}
		//cout<<v.size()<<endl;
		ll count=0;
		for(ll i=0;i<n;++i)
		{
			if(v[i]=='}')
			count++;
			else
			break;
		}
		//cout<<count<<endl;
		if(count%2==1)
		cout<<t<<". "<<count/2+2+(v.size()-1-count)/2<<endl;
		else
		cout<<t<<". "<<count/2+(v.size()-count)/2<<endl;
		t++;
	}
	return 0;
}
