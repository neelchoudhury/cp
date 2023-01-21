#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

int main()
{
	string s1="", s2="";
	cin>>s1;
	cin>>s2;
	string s[]={ "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
	for(ll i=0; i<7; i++)
	{
		if(s1==s[i])
		{
			if(s2==s[i] or s2==s[(i+3)%7] or s2==s[(i+2)%7])
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	//I dont know whats wrong
	cout<<"NO"<<endl;
	return 0;
}