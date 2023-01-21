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

vector<ll> v;
vector<pair<ll,string> > s1,s2;
ll a[100010];

int main()
{
	ios;
	ll n,m,f, p;
	string s="";
	cin>>n>>m;
	mem(a);
	ll x;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		a[x]=1;
	}
	for(ll i=0; i<m; i++)
	{
		s="";
		cin>>f>>p>>s;
		if(a[f])
		{
			s1.pb(pair<ll,string> (p,s));
		}
		else
		{
			s2.pb(pair<ll,string> (p,s));
		}
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(), s2.end());
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(), s2.end());
	for(ll i=0; i<s1.size(); i++)
	{
		cout<<s1[i].second<<endl;
	}
	for(ll i=0; i<s2.size(); i++)
	{
		cout<<s2[i].second<<endl;
	}
	return 0;
}