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

string s[55];
ll a[55];
queue<ll> q;
string ss[55],ans[55];

int main()
{
	ll n,k;
	cin>>n>>k;
	for(ll i=0; i<n-k+1; i++)
	{
		cin>>s[i];
	}
	for(ll i=0; i<k; i++)
	{
		q.push(i);
	}

	for(ll i=0; i<=25; i++)
	{
		ss[i].pb(i+'A');
	}
	for(ll i=26; i<52; i++)
	{
		ss[i]=ss[i-26]+"a";
	}

	// for(ll i=0; i<=50; i++)
	// {
	// 	cout<<ss[i]<<" ";
	// }
	// cout<<endl;

	for(ll i=0; i<k-1; i++)
	{
		ans[i]=ss[i];
	}

	for(ll i=k-1; i<n; i++)
	{
		if(s[i-k+1]=="YES")
		{
			ans[i]=ss[i];
		}
		else
		{
			ans[i]=ans[i-k+1];
		}
	}

	for(ll i=0; i<n; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;

}