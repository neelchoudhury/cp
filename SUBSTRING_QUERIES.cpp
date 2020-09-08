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

string s[50010];
vector<ll> dp[50010];

int main()
{
	ll n,q;
	cin>>n>>q;
	for(ll i=0; i<n; i++)
	{
		cin>>s[i];
	}
	ll x,y;
	ll ans=0;
	while(q--)
	{
		ans=0;
		cin>>x>>y;
		ll lx=s[x].length();
		ll ly=s[y].length();
		for(ll i=0; i<=lx; i++)
		{
			for(ll j=0; j<=ly; j++)
			{
				dp[i].pb(0);
			}
		}
		for(ll i=0; i<lx; i++)
		{
			for(ll j=0; j<ly; j++)
			{
				if(i==0 or j==0)
				{
					if(s[x][i]==s[y][j])
						dp[i][j]=1;
					else
						dp[i][j]=0;
				}
				else 
				{
					if(s[x][i]==s[y][j])
					{
						dp[i][j]=1+dp[i-1][j-1];
					}
					else
					{
						dp[i][j]=0;
					}
				}
			}
		}
		for(ll i=0; i<lx; i++)
		{
			for(ll j=0; j<ly; j++)
			{
				ans=max(ans, dp[i][j]);
			}

		}
		cout<<ans<<endl;
		for(ll i=0; i<=lx; i++)
		{
			dp[i].clear();
		}
	}
	return 0;
}