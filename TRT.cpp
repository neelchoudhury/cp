#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))

using namespace std;

ll a[2020];
ll dp[2020][2020];

ll f(ll i,ll j, ll t)
{
	t++;
	if(i==j)
	{
		return a[i]*t;
	}
	else if(dp[i][j]!=-1)
		return dp[i][j];
	else
	{
		ll x,y;
		dp[i+1][j]=f(i+1,j,t);
		x=dp[i+1][j]+t*a[i];
		dp[i][j-1]=f(i,j-1,t);
		y=dp[i][j-1]+t*a[j];
		dp[i][j]=max(x,y);
	}
	return dp[i][j];
	
}

int main()
{
	ios;
	ll n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	ll ans=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			dp[i][j]=-1;
	ans=f(0,n-1,0);
	cout<<ans<<endl;
}
