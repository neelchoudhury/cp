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
	ll t;
	string s;
	cin>>t;
	for(ll i=1; i<=t; i++)
	{
		cout<<"Case #"<<i<<": ";
		cin>>s;
		string ans;
		ans+=s[0];
		for(ll i=1; i<s.length(); i++)
		{
			string q=*s;
			if(q >= ans)
			{
				ans= q + ans;
			}
			else
				ans=ans+q;
		}
		cout<<ans<<endl;
	}
	return 0;
}