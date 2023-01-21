#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	string s="";
	scanf("%lld", &t);
	while(t--)
	{
		s="";
		cin>>s;
		string q="";
		int f=0;
		for(ll i=0; i<s.length()/2; i++)
		{
			if(s[i]!=s[s.length()-i-1])
			{
				if(s[i]>='a' and s[i]<='z' and s[s.length()-i-1]>='a' and s[s.length()-i-1]<='z')
				{
					cout<<-1<<endl;
					f=1;
					break;
				}
				else if(s[i]=='.')
				{
					q+=s[s.length()-i-1];
				}
				else
				{
					q+=s[i];
				}
				
			}
			else 
			{
				if(s[i]=='.')
				{
					q+='a';
				}
				else
				{
					q+=s[i];
				}
			}
		}
		string ans="";
		if(s.length()%2)
		{
			ans=q;
		//	cout<<ans<<endl;
			ll i=s.length()/2;
			if(s[i]>='a' and s[i]<='z')
				ans+=s[i];
			else
				ans+='a';
		//	cout<<ans<<endl;
			reverse(q.begin(),q.end());
			ans+=q;
		}
		else
		{
			ans=q;
			reverse(q.begin(),q.end());
			ans+=q;
		}
		if(f!=1)
			cout<<ans<<endl;
	}
	return 0;
}
