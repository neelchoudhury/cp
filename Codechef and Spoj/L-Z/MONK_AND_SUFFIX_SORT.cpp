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

vector<string> v;

int main()
{
	string s="";
	ll k;
	cin>>s;
	cin>>k;
	string q="";
	reverse(s.begin(),s.end());
	for(ll i=0; i<s.length(); i++)
	{
		q+=s[i];
		v.pb(q);
	}
	for(ll i=0; i<s.length(); i++)
	{
		reverse(v[i].begin(),v[i].end());
	}
	sort(v.begin(),v.end());
	cout<<v[k-1]<<endl;
	return 0;	

}