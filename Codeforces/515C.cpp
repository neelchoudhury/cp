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

ll a[15];

int main()
{
	ios;
	ll n;
	string s="";
	cin>>n;
	cin>>s;
	mem(a);
	for(ll i=0; i<s.length();i++)
	{
		if(s[i]=='2' or s[i]=='3' or s[i]=='5' or s[i]=='7')
			a[s[i]-'0']++;
		if(s[i]=='4')
		{
			a[2]+=2;
			a[3]+=1;
		}
			
		if(s[i]=='6')
		{
			a[5]++;
			a[3]++;
		}
		if(s[i]=='8')
		{
			a[7]++;
			a[2]+=3;
		}
		if(s[i]=='9')
		{
			a[7]++;
			a[2]++;
			a[3]+=2;
		}
	}
	for(ll i=9; i>=2; i--)
	{
		for(ll j=0; j<a[i]; j++)
			cout<<i;
	}
	cout<<endl;
	return 0;
}