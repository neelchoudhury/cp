#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

int main()
{
	ll t;
	string s="";
	cin>>t;
	for(ll i=1; i<=t; i++)
	{
		cin>>s;
		cout<<"Case #"<<i<<": "<<s<<" is ruled by ";
		char c=s[s.length()-1];
		if(c=='y')
			cout<<"nobody."<<endl;
		else if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
			cout<<"a queen."<<endl;
		else
			cout<<"a king."<<endl;

	}
	return 0;
}