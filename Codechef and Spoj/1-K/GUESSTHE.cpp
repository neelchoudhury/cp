#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	string s;
	cin>>s;
	while(s!="*")
	{
		
		ll ans=0;
		ll i=0;
		ll f=0;
		ans=1;
	 
		
		{
			for(ll i=1; i<s.length(); i++)
			{
				//cout<<"lol"<<endl;
				if(s[i]=='Y')
				{
					ans=(ans*(i+1))/gcd(ans, i+1);
					 
				}
				 
			}
			for(ll i=0; i<min((ll)s.length(), (ll)ans); i++)
			{
				if(ans%(i+1)==0 and s[i]=='N')
				{
					f=1;
					cout<<-1<<endl;
					break;
				}
			}
			if(f==0)
				printf("%lld\n", ans);
		}
		cin>>s;
	}
}
