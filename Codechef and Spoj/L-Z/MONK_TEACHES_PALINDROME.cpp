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
	ll t;
	string s="";
	cin>>t;
	while(t--)
	{
		s="";
		cin>>s;
		ll f=0;
		for(ll i=0; i<=(s.length()-1)/2;i++ )
		{
			if(s[i]!=s[s.length()-1-i])
			{
				f=1;
				break;
			}
		}
		if(f)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES ";
			if(s.length()%2==0)
				cout<<"EVEN"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}