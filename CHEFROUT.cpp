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
	string s="";
	cin>>t;
	while(t--)
	{
		s="";
		cin>>s;
		ll f=0;
		for(ll i=1; i<s.length(); i++)
		{
			if(s[i]<s[i-1])
			{
				f=1;
				break;
			}
		}
		if(f)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}