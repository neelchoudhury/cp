#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int a[1010];
int dp[1010][1030];

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<1010; i++)
		{
			for(int j=0; j<1030; j++)
				dp[i][j]=0;
		}
		dp[0][0]=1;
		for(int i=1;i<n; i++)
		{
			for(int j=0; j<=1023; j++ )
			{
				dp[i][j]=dp[i-1][j]|dp[i-1][j^a[i]];
			}
		}
		int ans=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=1023; j++)
			{
				ans=max(ans,dp[i][j]*(j^k));
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
