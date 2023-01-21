#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

int main()
{
	ios;
	ll b,d,s;
	cin>>b>>d>>s;
	ll ans=0;
	if(b>=d and b>=s)
	{
		if(s==b and d!=s)
		{
			ans+=(b-1-d);
		}
		else if(b==d and d==s)
			ans=0;
		else if (b==d)
		{
			ans+=(b-1-s);
		}
		else
		{
			ans+=(b-1-d+b-1-s);
		}
		cout<<ans<<endl;
		return 0;
	}
	if(d>=b and d>=s)
	{
		ans+=(d-1-b);
		if(d!=s)
		{
			ans+=(d-1-s);
		}
		cout<<ans<<endl;	 
		return 0;
	}
	if(s>=b and s>=d)
	{
		if(b==s and d!=s)
			ans=s-1-d;
		else if(b==d and d==s)
			ans=0;
		else
			ans+=(s-1-b+s-1-d);
		cout<<ans<<endl;
		return 0;
	}

}