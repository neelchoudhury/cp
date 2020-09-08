#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define pb push_back
#define ff first
#define ss second 
#define dbg(x)   cout<<#x<<"="<<x<<endl

using namespace std;

int main()
{
	ll t;
	string s="";
	sc(t);
	while(t--)
	{
		s="";
		cin>>s;
		ll a=0,b=0,ans=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]=='(')
			{
				a++;
			}
			else
			{
				b++;
				if(a>=b)
					ans++;
			}
		}
		pr(2*ans);
	}
	return 0;
}