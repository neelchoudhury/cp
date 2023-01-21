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

ll c[210],dp[210];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>c[i];
	}
	mem(dp);
	dp[0]=0;
	for(ll i=1; i<n; i++)
	{
		if(i==1)
		{
			if(c[i]==1)
			{
				dp[i]=INT_MAX;
			}
			else
			{
				dp[i]=dp[i-1]+1;
			}
		}
		else
		{
			if(c[i]==1)
			{
				dp[i]=INT_MAX;
			}
			else
			{
				dp[i]=1+ min(dp[i-1], dp[i-2]);
			}
		}
	}

	cout<<dp[n-1]<<endl;
	return 0;
}