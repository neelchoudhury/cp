#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s="";
	string ans="";
	cin>>s;
	ll f=0;
	ll q=0,w=0, i;
	ll cnt=0;
	for(i=0; i<s.length(); i++)
	{
		if(s[i]!='a')
		{
			if(f==0)
			{
				f=1;
				
				
			}
			ans+=(s[i]-1);
				q=i;
			
		}
		else if(s[i]=='a')
		{
			cnt++;
			ans+=s[i];
			if(f==1)
			{
				f=0;
				w=i;
				break;
			}
			
			 
		}
		
	}
	if(cnt==s.length())
	{
		ans="";
		for(ll i=0; i<s.length()-1; i++)
		{
			ans+=s[i];
		}
		ans+='z';
		cout<<ans<<endl;
		return 0;
	}
	for(ll j=i+1; j<s.length(); j++)
	{
		ans+=s[j];
	}
	cout<<ans<<endl;
	return 0;
}
