#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s="";
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		s="";
		cin>>s;
		ll cnt1=0, cnt0=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]=='0')
				cnt0++;
			else
				cnt1++;
		}
		if(cnt0==1 or cnt1==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
