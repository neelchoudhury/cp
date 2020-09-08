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

ll dp[100010][11];

int main()
{
	ll s,m,d;
	cin>>s>>m>>d;
	mem(dp);
	for(ll i = 1; i<=m; i++)
	{
		dp[i][1] = 1;
	}
	for(ll i = 0; i<=s; i++)
	{
		ll sum = 0;
		for(ll j = 0; j<=min(m,i); j++)
		{
			sum = 0;
			for(ll k = 0; k<=min(d,j); k++)
			{
				sum += dp[i-j][k];
			}
			dp[i][j] = sum;
		}
	}
	ll ans =0;
	for(ll i = 1; i<=m; i++)
	{
		ans += dp[s][i];
	}
	cout<<ans<<endl;
	return 0;
}