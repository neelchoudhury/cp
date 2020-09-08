#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string s[1010],ans[1010];

int main()
{
	ll n;
	cin>>n;
	int f=0,q=0;
	
	for(ll i=0; i<n;i++)
	{
		cin>>s[i];
		if(f!=1)
		{
			if(s[i][0]=='O' and s[i][1]=='0')
			{
				ans[i]+="++";
				ans[i]+=s[i][2],ans[i]+=s[i][3],ans[i]+=s[i][4];
				f==1;
			}
			else if(s[i][3]=='O' and s[i][4]=='O')
			{
				ans[i]+=s[i][0], ans[i]+=s[i][1], ans[i]+=s[i][2];
				ans[i]+="++";
			}
			q=1;
		}
		if(q!=1)
		{
				
				ans[i]=s[i];
				
		}
		q=0;
	}
	if(f==0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if(f==1)
		cout<<"YES";
	for(ll i=0; i<n; i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}
