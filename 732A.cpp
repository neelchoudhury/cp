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
	ll k,r;
	cin>>k>>r;
	ll ans=0;
	for(ll i=1; i<=10; i++)
	{
		ll x=(k*i)%10;
		if(x==r or x==0 )
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;	
}