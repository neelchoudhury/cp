#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

int main()
{
	ll n,x,y;
	cin>>n;
	cin>>x>>y;
	ll ans=0;
	ans=(x)*(n+1);
	if(x%2==0)
		ans+=y;
	else
		ans+=(n-y);
	cout<<ans<<endl;
	return 0;
}