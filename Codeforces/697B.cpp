#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<char> v;

int main()
{
	string s;
	cin>>s;
	int cnt=0,f=0;
	for(int i=0; i<s.length(); i++)
	{
		if(f==1)
		{
			cnt=(cnt*10 + s[i]-'0');
		}
		if(s[i]=='e')
		{
			f=1;
		}
	}
	f=0;
	int kk=0;
	//cout<<cnt<<endl;
	for(int i=0; s[i]!='e'; i++)
	{
		if(f==0 and s[i]!='.' )
		{
			if(i==0 and s[i]!='0' )
				v.push_back(s[i]);
			else if(i==0 and s[i]=='0' and s[i+1]=='.' and cnt==0)
				v.push_back(s[i]);
			else if(i!=0 and s[i]=='0')
				v.push_back(s[i]);
			else if(s[i]!='0')
				v.push_back(s[i]);
		}
		if(f==1)
		{
			if(cnt==0  and kk==0)
			{
				if(kk==0 and (s[i]!='0' or s[i+1]!='e'))
				{
					v.push_back('.');
					v.push_back(s[i]);
				}
				kk=1;	
			}
			else if((cnt>0 and kk==0) or (cnt<=0 and kk==1))
			{
				v.push_back(s[i]);
				cnt--;
			}
		}
		if(s[i]=='.')
		{
			f=1;
		}
	}
	//cout<<cnt<<endl;
	if(cnt>0)
	{
		while(cnt--)
		{
			v.push_back('0');
			
		}
	}
	for(int i=0; i<v.size(); i++)
		cout<<v[i];
	cout<<endl;
	return 0;
}
