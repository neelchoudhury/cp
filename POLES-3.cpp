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

ll x[5010], w[5010];
//ll a[5010][5010];


int main()
{
	ll n,k;
	ios;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>x[i]>>w[i];
		
	}
	ll dp[n][k][n]; 
	mem(dp);
	for(ll i=0; i<n; i++)
	{
		for(ll j=1; j<=k; j++)
		{
			if(i==0 and j==1)
			{
				for(ll l=0; l<n; l++)
					dp[i][j][l]=0;
			}
			else if(i>0 and j==1)
			{

				dp[i][j][0]=dp[i-1][j][0]+w[i]*(x[i]-x[0]);
				cout<<dp[i][j][0]<<endl;
				for(ll l=1; l<n; l++)
					dp[i][j][l]=0;
			}
			else if(j>i)
			{
				for(ll l=0; l<n; l++)
					dp[i][j][l]=0;
			}
			else if(j<=i)
			{
				dp[i][j][i]=INT_MAX;
				for(ll l=0; l<=i; l++)
					dp[i][j][l]=INT_MAX;
				for(ll l=j-2; l<=i-1; l++)
					dp[i][j][i]=min(dp[i][j][i],dp[i-1][j-1][l]);
				// cout<<dp[i][j]<<endl;
				for(ll l=j-1; l<=i; l++)
				{
					// cout<<dp[i][j]<<endl;
					
					dp[i][j][l]=min(dp[i-1][j][l]+w[i]*(x[i]-x[l]),dp[i][j][l]);
				}
			}
		}
	}
	ll ans =INT_MAX;
	for(ll i=k-1; i<n; i++)
	{
		cout<<i<<" "<<dp[n-1][k][i]<<endl;
		 ans=min(ans, dp[n-1][k][i]);
	}
	cout<<ans<<endl;
	return 0;
}