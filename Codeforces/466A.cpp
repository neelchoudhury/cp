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

int main()
{
	ios;
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	ll ans=0;
	if( b<a*m)
	{
		 
			ans=(b*(n/m)+min(a*(n%m),b));
	}
	else
	{
		ans=a*n;
	}
	cout<<ans<<endl;
	return 0;
}