#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}


int main()
{
	ll t;
	string s="";
	scanf("%lld", &t);
	while(t--)
	{
		s="";
		stack<ll> stk; 
		cin>>s;
		int cnt=0;
		int f=0;
		for(ll i=0; i<s.length(); i++)
		{
			if((i==0 or i==s.length()-1)  )
			{
				if(i==0)
				{
					if(s[i]=='*')
					{
						f=1;
						break;
					}
					if(s.length()>1 and s[i]=='*' and s[i+1]=='*')
					{
						f=1;
						break;
					}
				}
				else if(i==s.length()-1)
				{
					if(s[i]=='*')
					{
						f=1;
						break;
					}
					if(s[i]=='*' and s[i-1]=='*')
					{
						f=1;
						break;
					}
				}
				
			}
			if(i!=0)
			{
				if(s[i]!='*')
				{
					//cout<<cnt<<" "<<i<<endl;
					if(cnt>2)
					{
						f=1;
						break;
					}
					cnt=0;
					
				}
				else
				{
					//cout<<cnt<<" "<<i<<endl;
					cnt++;
				}
			}
		}
		if(f==1)
		{
			printf("Syntax Error\n");
			continue;
		}
		f=0;
		ll val=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]!='*')
			{
				val=0;
				while(s[i]!='*' and i<s.length())
				{
					val=val*10+s[i]-'0';
					i++;
					//cout<<"abng "<<i<<endl;
				}
				if(f==1)
				{
					f=0;
					ll qq=stk.top();
					stk.pop();
					stk.push(power(qq,val,MOD));
				}
				else
				{
					stk.push(val);
				}
				i--;
			}
			else
			{
				if(i+1<s.length()-1)
				{
					if(s[i+1]=='*')
					{
						f=1;
					}
				}
			}
		}
		ll ans=1;
		while(!stk.empty())
		{
			ans=(ans%MOD*stk.top()%MOD)%MOD;
			stk.pop();
		}
		printf("%lld\n",ans);
	}
	return 0;
}
