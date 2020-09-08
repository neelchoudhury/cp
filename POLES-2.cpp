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

pair<ll,ll> dp[5010][5010];
ll x[5010],w[5010];

void fun(ll cur,ll left)
{
	if(left==0&&cur==0)
	{
		dp[cur][left].ff=0;
		dp[cur][left].ss=0;
		return;
	}
	if(cur==0||left==0)
	{
		dp[cur][left].ff=1e16;
		dp[cur][left].ss=0;
		return;
	}
	if(dp[cur][left].ff!=-1&&dp[cur][left].ss!=-1)
		return;
	fun(cur-1,left-1);
	fun(cur-1,left);
	if(dp[cur-1][left-1].ff<=dp[cur-1][left].ff+w[cur]*(x[cur]-dp[cur-1][left].ss))
	{
		dp[cur][left].ff=dp[cur-1][left-1].ff;
		if(dp[cur-1][left-1].ss+1==x[cur])
		dp[cur][left].ss=x[cur];
	}
	else
	{
		dp[cur][left].ff=dp[cur-1][left].ff+w[cur]*(x[cur]-dp[cur-1][left].ss);
		dp[cur][left].ss=dp[cur-1][left].ss;
	}
	return;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	for(ll i=1;i<=n;++i)
	{
		cin>>x[i]>>w[i];
		for(ll j=0;j<=k;++j)
		{
			dp[i][j].ff=-1;
			dp[i][j].ss=-1;
		}
	}
	fun(n,k);
	cout<<dp[n][k].ff<<endl;
	return 0;
}