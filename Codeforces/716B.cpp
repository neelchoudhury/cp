#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

vector<ll> a[50010];
vector<char> v;


int main()
{
	string s="";
	string ans="";
	cin>>s;
		ll ff=0;
	//memset(a,0,sizeof(a));
	for(ll i=0; i<s.length(); i++)
	{
		for(ll j=0; j<26; j++)
		{
			a[i].push_back(0);
		}
	}
	cout<<s.length()<<endl;
	 if(s.length()>=26)
	{
		for(ll i=0; i<s.length()-26; i++)
		{
			if(i!=0)
			{
				if(s[i]!='?')
					a[i][s[i]-'A']=a[i-1][s[i]-'A']-1;
				if(s[i+25]!='?')
					a[i][s[i+25]-'A']=a[i-1][s[i+25]-'A']+1;
				for(ll j=i+1; j<25+i; j++)
				{
					a[i][j]=a[i-1][j];
				}
			}
			else if(i==0)
			{
				for(ll j=i; j<i+26; j++)
				{
					if(s[j]!='?')
						a[i][s[j]-'A']++;
				}
			}
		}
		for(ll qqq=0; qqq<s.length()-26; qqq++)
		{
	
		for(ll i=0; i<26; i++)
		{
			cout<<a[0][i]<<" ";
		}
		cout<<endl;
		}
	
		for(ll i=0; i<s.length()-26; i++)
		{
			v.clear();
			ff=0;
			for(ll j=0; j<26; j++)
			{
				//cout<<i<<" "<<j<<endl;
				if(a[i][j]>1)
				{
					ff=1;
					break;
				}
				else if(a[i][j]==0)
				{
					v.push_back(j+'A');
				}
			}
			ll kk=0;
			if(ff==0)
			{
				for(ll j=0; j<i; j++)
				{
					if(a[i][s[j]-'A']==0)
					{
						ans+='A';
					}
					else
					{
						ans+=(char)(s[j]);
					}
				}
				for(ll j=i; j<i+26; j++)
				{
					if(a[i][s[j]-'A']==0)
					{
						ans+=v[kk++];
					}
					else
					{
						ans+=(char)(s[j]);
					}
				}
				for(ll j=i+26; j<s.length(); j++)
				{
					if(a[i][s[j]-'A']==0)
					{
						ans+='A';
					}
					else
					{
						ans+=(char)(s[j]);
					}
				}
				cout<<ans<<endl;
				break;
				//return 0;
			}
		}
		 
	
		
	}
	v.clear();
	if(s.length()<26 or ff==1)
		cout<<-1<<endl;
	return 0;
}
