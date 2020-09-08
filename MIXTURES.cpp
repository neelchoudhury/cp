#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

ll a[101];
pair<ll,ll> dp[101][101];

//first: smoke
//second:  colour

void f(ll i, ll j)
{
	if(i==j)
	{
		dp[i][j].first=0;
		dp[i][j].second=a[i];
		return ;
	}
	if(j-i==1)
	{
		dp[i][j].first=(a[i]*a[j]);
		dp[i][j].colour=(a[i]+a[j])%100;
		return;
	}
	
	if(dp[i][j].smoke==-1)
	{
		dp[i][j].smoke=inf; 
		for(ll k=i; k<j; k++)
		{
			f(i,k);
			f(k+1,j);
			if((dp[i][k].smoke+dp[k+1][j].smoke+dp[i][k].colour*dp[k+1][j].colour<dp[i][j].smoke))
			{
				dp[i][j].smoke=dp[i][k].smoke+dp[k+1][j].smoke+dp[i][k].colour*dp[k+1][j].colour;
				dp[i][j].colour=(dp[i][k].colour+dp[k+1][j].colour)%100;
			}
		}
		return ;
	}
	else
	return ;
	 
}

int main()
{
	ios;
	int n;
	while(cin>>n)
	{
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
				dp[i][j].smoke=-1;
				dp[i][j].colour=0;
			}
		}
		mem(a);
		for(ll i=0; i<n; i++)
			cin>>a[i];
		f(0,n-1);
		cout<<dp[0][n-1].smoke<<endl;
	}
	return 0;
}
