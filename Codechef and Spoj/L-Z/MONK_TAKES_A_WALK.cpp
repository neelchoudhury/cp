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
		ll ans=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]=='A' or s[i]=='E' or s[i]=='I'or s[i]=='O'or s[i]=='U'or s[i]=='a'or s[i]=='e'or s[i]=='i'or s[i]=='o'or s[i]=='u')
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}