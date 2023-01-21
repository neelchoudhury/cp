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

ll a[15];
ll g[15];

ll f(ll n, ll m)
{
	bool gr[m+2];
	mem(gr);
	ll x=0;
	for(ll i=0;i<m; i++)
	{
		if(n%a[i]==0)
		{
			 x=f(n/a[i], m);
			 gr[x]=1;
		}
	}
	ll i;
	for(  i=0; i<m; i++)
	{
		if(gr[i]==false)
		{
			return i;
		}
	}
	return i;
}

int main()
{
	ios;
	ll n,m;
	cin>>n>>m;
	mem(a);
	mem(g);
	for(ll i=0; i<m; i++)
	{
		cin>>a[i];
	}
	ll gr=f(n,m);
	if(gr==0)
		cout<<"Second"<<endl;
	else
		cout<<"First"<<endl;
	return 0;
}