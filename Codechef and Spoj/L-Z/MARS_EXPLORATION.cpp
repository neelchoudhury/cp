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
	string s;
	cin>>s;
	ll ans=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(i%3==0 or i%3==2)
		{
			if(s[i]!='S')
				ans++;
		}
		else
		{
			if(s[i]!='O')
				ans++;
		}
	}
	cout<<endl;
	return 0;
}