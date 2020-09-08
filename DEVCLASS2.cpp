#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	cin>>t;
	ll type;
	char s[100001];
	while(t--)
	{
		cin>>type;
		scanf("%s", s);
		ll cb=0,cg=0;
		ll n=strlen(s);
		for(ll i=0;i<n; i++)
		{
			if(s[i]=='B')
				cb++;
			else
				cg++;
		}
		if(type==0)
		{
			ll cnt=0;
			if(abs(cb-cg)>1)
			{
				cout<<-1<<endl;
			}
			else
			{
				if(cb>cg)
				{
					for(ll i=0; i<n;i+=2)
					{
						if(s[i]!='B')
							cnt++;
					}
				}
				else if(cb<cg)
				{
					for(ll i=0; i<n;i+=2)
					{
						if(s[i]!='G')
							cnt++;
					}
				}
				else if(cg==cb)
				{
					ll x=1;
					for(ll i=0; i<n;i+=2)
					{
						if(s[i]!=s[0])
							cnt++;
					}
					for(ll i=2; i<n;i+=2)
					{
						if(s[i]==s[0])
							x++;
					}
					//cout<<" "<<x<<" "<<cnt<<endl;
					if(x<cnt)
						cnt=x;
				}
				printf("%lld\n", cnt);
			}
		
		
		}
	}
	return 0;
}
