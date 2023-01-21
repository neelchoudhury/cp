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
	string s="";
	cin>>s;
	ll ans=1;
	ll cnt=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='A' or s[i]=='E' or s[i]=='O' or s[i]=='I' or s[i]=='U' or s[i]=='Y')
		{
			cnt++;
			ans=max(ans,cnt);
			cnt=0;
			// cout<<ans<<" "<<i<<endl;
		}
		else 
		{	
			// cout<<s[i]<<" "<<i<<endl;
			cnt++;
		}
	}
	ans=max(ans,cnt);
	ll i=s.length()-1;
	if(!(s[i]=='A' or s[i]=='E' or s[i]=='O' or s[i]=='I' or s[i]=='U' or s[i]=='Y'))
		ans=max(ans,cnt+1);
	cout<<ans<<endl;
	return 0;
}