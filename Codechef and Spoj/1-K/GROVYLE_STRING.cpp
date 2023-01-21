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
	ll t;
	cin>>t;
	string s="";
	while(t--)
	{
		s="";
		cin>>s;
		sort(s.begin(),s.end());
		reverse(s.begin(), s.end());
		string ans="";
		ans+=s[0];
		for(ll i=1; i<s.length(); i++)
		{
			if(i%2)
			{
				ans+=s[i];
			}
			else
			{
				ans=s[i]+ans;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}