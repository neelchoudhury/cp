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
	ll n;
	string s="";
	cin>>n;
	cin>>s;
	ll a=0,d=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='A')
			a++;
		else
			d++;
	}
	if(a>d)
		cout<<"Anton"<<endl;
	else if(d>a)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;
	return 0;
}