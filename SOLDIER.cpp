#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define mem(a) memset(a,0,sizeof(a))
#define price first
#define quality second
#define inf 999999999999

using namespace std;

pair<ll,ll> v[7];
bool a[7];
ll dp[7][1010];



int main()
{
	ll n,t;
	cin>>n>>t;
	ll x,y,z;
	mem(a);
	for(int i=0; i<n; i++)
	{
		cin>>x>>y>>z;
		v[x].pb(mp(y,z));
		a[x]=1;
	}
	for(int i=0; i<=1001; i++)
	{
		for(int j=0; j<7; j++)
			dp[i][j]=0;
	}
	ll f=0;
	for(int i=1;i<=6; i++)
	{
		if(a[i]==0)
		{
			f=1;
			break;
		}
	}
	if(f)
	{
		cout<<0<<endl;
	}
	else
	{
		for(int i=1; j<=6; i++)
		{
			dp[i][0]=inf;
		}
		for(int i=1; i<=6; i++)
		{
			for(int j=1;j<=t; j++)
			{
				dp[i][j]=dp[i][j-1]
				for(int k=0; k<v[i].size(); k++)
				{
					if(v[i][k].)
					dp[i][j]=max(dp[i][j],min(v[i][k].quality,dp[i][j-v[i][k].price]));	
				}
			}
		}
		cout<<dp[6][t]<<endl;
	}
	return 0;
}
