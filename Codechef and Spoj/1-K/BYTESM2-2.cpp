#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))

using namespace std;

ll a[104][104];
ll dp[104][104];

int main()
{
	ios;
	ll t,w,h;
	cin>>t;
	while(t--)
	{
		cin>>h>>w;
		for(int i=0; i<h; i++)
		{
			for(int j=0; j<w; j++)
				a[i][j]=0;
			 
		} 
		for(int i=0; i<h; i++)
		{
			for(int j=0; j<w; j++)
				dp[i][j]=0;
			 
		}
	  
		
		for(ll i=0; i<h; i++)
		{
			for(ll j=0;j<w; j++)
				cin>>a[i][j];
		}
		 
		for(int i=0; i<w; i++)
			dp[0][i]=a[0][i];
		for(ll i=1; i<h; i++ )
		{
			for(ll j=0; j<w; j++)
			{
				dp[i][j]=dp[i-1][j]+a[i][j];
				if(j>0)
				{
					dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i][j]);
				}
				if(j<w-1)
				{
					dp[i][j]=max(dp[i][j], dp[i-1][j+1]+a[i][j]);
				}
			}
		}
		ll ans=0;
	 
		for(ll i=0; i<w; i++)
		{
			ans=max(ans,dp[h-1][i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
