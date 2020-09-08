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

ll a[30];
vector<ll> v;

int main()
{
	ios;
	ll t,k;
	string s;
	cin>>t;
	while(t--)
	{
		s="";
		cin>>s;
		cin>>k;
		mem(a);
		ll cnt=0;
		v.clear();
		ll ans=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(a[s[i]-'a']==0)
				cnt++;
			a[s[i]-'a']++;
		}
		for(ll i=0; i<s.length(); i++)
		{
			if(a[i])
			{
				v.pb(a[i]%k);
				ans+=a[i]/k;
			}
		}
		sort(v.begin(),v.end());
		if(v.size()<k)
		{
			ans+=v.size();
		}
		else
		{
			ans+=v[v.size()-1];
		}
		cout<<ans<<endl;
	}
}