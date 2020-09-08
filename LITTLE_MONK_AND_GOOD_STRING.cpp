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

ll f(char c)
{
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
		return true;
	return false;
}

int main()
{
	ios;
	string s="";
	cin>>s;
	ll ans=0,cnt=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(f(s[i]))
		{
			cnt++;
		}
		else if(!f(s[i])  )
		{
			ans=max(ans,cnt);
			cnt=0;
		}
	}
	ans=max(ans,cnt);
	cout<<ans<<endl;
}