#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a));
 
using namespace std;
 
ll a[11];
 
int main()
{
	ios;
	ll t;
	string s;
	cin>>t;
	mem(a);
	 while(t--)
	 {
	 	s="";
	 	cin>>s;
	 	mem(a);
	 	for(ll i=0; i<s.length(); i++)
	 	{
	 		a[s[i]-'0']++;
	 	}
	 	 
	 	ll ans=0;
	 	for(ll i=0; i<10; i++)
	 	{
	 		if(a[i])
	 			ans+=i;
	 	}
	 	cout<<ans<<endl;
	 }
	return 0;
} 