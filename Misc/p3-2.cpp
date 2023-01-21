#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

int main()
{
	ios;
	ll q,a,b,d;
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>d;
		ll ans=0,ans2=0;
		if(d==0)
			ans=0;
		else if(d==a or d==b)
			ans=1;
		else
		{
			if(d>a*b)
			{
				ans=d/(a*b);
				ans*=a;
				d-=(ans*b);
			}
			while(d>0)
			{
				if(d>b)
				{
					d-=b;
					ans++;
				}
				if(d%b==0)
				{
					ans+=d/b;
					d=0;
				}
				if(d%a==0)
				{
					ans+=d/a;
					d=0;
				}
				if(d<a)
				{
					ans+=2;
					d=0;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}