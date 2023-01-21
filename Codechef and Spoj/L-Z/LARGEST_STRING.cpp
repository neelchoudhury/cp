#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define pb push_back
#define ff first
#define ss second 
#define dbg(x)   cout<<#x<<"="<<x<<endl

using namespace std;

ll a[30];

int main()
{
	ll n,m;
	string s;
	sc(n); sc(m);	
	cin>>s;
	for(ll i=0; i<s.length(); i++)
	{
		a[s[i]-'A']++;
	}
	// for(ll i=0; i<26; i++)
	// 	cout<<a[i]<<" ";
	// cout<<endl;
	ll cnt=m;
	for(ll i=0; i<26; i++)
	{
		if(cnt-a[i]>0)
		{
			cnt-=a[i];
			a[i]=0;
		}
		else 
		{
			a[i]-=cnt;
			cnt=0;
			break;
		}
	}
	// for(ll i=0; i<26; i++)
	// 	cout<<a[i]<<" ";
	// cout<<endl;
	string ans="";
	for(ll i=s.length()-1; i>=0; i--)
	{
		if(a[s[i]-'A']>0)
		{
			ans+=s[i];
			a[s[i]-'A']--;
		}
	}
	 for(ll i=ans.length()-1; i>=0; i--)
	 	cout<<ans[i];
	 cout<<endl;
	return 0;
}