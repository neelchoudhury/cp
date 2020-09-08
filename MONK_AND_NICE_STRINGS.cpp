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
ll a[1010];

int main()
{
	ll n;
	string s="";
	cin>>n;
	for(ll i=0;i<n; i++)
	{
		s="";
		cin>>s;
		v.pb(s);
	}
	mem(a);
	for(ll i=1; i<v.size(); i++)
	{
		ll cnt=0;
		for(ll j=0; j<i; j++)
		{
			 
			string s1=v[j],s2=v[i];
			if(s1.compare(s2)<0)
				cnt++;
			 
		}
		a[i]=cnt;
	}
	for(ll i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}