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

ll a[100010];
ll dp[100010];
ll prod[100010];

int main()
{
	ll t, n;
	ios;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(ll i=0; i<n; i++)
			cin>>a[i];
		prod[0] = a[0];
		for(ll i= 1; i<n; i++)
		{
			prod[i] = prod[i-1]*a[i];
		}
		mem(dp);
		dp[0] = 1;
		for(ll i = 1; i<n; i++ )
		{
			dp[i] = (dp[i-1]*a[i] + prod[i])%MOD;
		}
	}
	return 0;
}