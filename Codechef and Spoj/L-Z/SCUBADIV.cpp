#include<bits/stdc++.h>
#define ll long long int
#define inf 10e9+7

using namespace std;

ll dp[1010][22][80];
ll tt[1010],aa[1010],ww[1010];

ll f(ll n,ll t, ll a)
{
	if(dp[n][t][a]!=-1)
	{
		return dp[n][t][a];
	}
	if(t==0 and a==0)
		dp[n][t][a]=0;
	else if(n==0 )
		dp[n][t][a]=inf;
	else
	{
		dp[n][t][a]=min(f(n-1,t,a), f(n-1,max(t-tt[n-1],(ll)0),max(a-aa[n-1],(ll)0))+ww[n-1]);
	}
	return dp[n][t][a];
}
ll c,t,a,n;
int main()
{
	
	scanf("%lld", &c);
	while(c--)
	{
		for(ll i=0; i<=1000; i++)
		{
			for(ll j=0; j<=22; j++)
			{
				for(ll k=0;k<=80; k++)
					dp[i][j][k]=-1;
			}
		}
	/*	for(ll i=0; i<=10; i++)
		{
			for(ll j=0; j<=5; j++)
			{
				for(ll k=0;k<=5; k++)
					cout<<dp[i][j][k]<<" ";
				cout<<endl;
			}
			cout<<endl;
		}*/
		for(ll i=0;i<=n; i++)
		{
			tt[i]=aa[i]=ww[i]=0;
		}
		scanf("%lld %lld", &t, &a);
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
		{
			scanf("%lld %lld %lld", &tt[i], &aa[i], &ww[i]);
		}
		ll ans=f(n,t,a);
	/*	for(ll i=0; i<=n; i++)
		{
			for(ll j=0; j<=a; j++)
			{
				for(ll k=0;k<=t; k++)
					cout<<dp[i][j][k]<<" ";
				//cout<<endl;
			}
			cout<<endl;
		}*/
		printf("%lld\n", ans);
	}
}
