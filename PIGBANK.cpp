#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll p[505],w[505];
ll dp[10010];

int main()
{
	ios;
	ll t,e,f,n;
	cin>>t;
	while(t--)
	{
		cin>>e>>f;
		ll wt=f-e;
		cin>>n;
		memset(p,0,sizeof(p));
		memset(w,0,sizeof(w));
		for(ll i=0; i<=wt; i++)
			dp[i]=-1; 
		for(ll i=0; i<n; i++)
			cin>>p[i]>>w[i];
		dp[0]=0;
		for(ll i=1; i<=wt; i++)
		{
			ll qq=1000000000;
			for(ll j=0; j<n; j++)
			{
				if(i-w[j]>=0 and dp[i-w[j]]!=-1)
					qq=min(qq,dp[i-w[j]]+p[j]);
			}
			if(qq!=1000000000)
				dp[i]=qq;
		} 
		if(dp[wt]!=-1)
			cout<<"The minimum amount of money in the piggy-bank is "<<dp[wt]<<"."<<endl;
		else
			cout<<"This is impossible."<<endl;
	}
	
}
