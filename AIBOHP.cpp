#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

ll dp[6110][6110];
char s[6110]; 

ll f(ll st, ll en)
{
	if(st==en)
	{
		dp[st][en]=0;
		return 0;
	}
	else if(st==en-1)
	{
		if(s[st]==s[en])
		{
			dp[st][en]=0;
		}
		else
		{
			dp[st][en]=1;
		}
	}
	else
	{
		if(dp[st][en]==-1)
		{
			if(s[st]==s[en])
			{
				dp[st][en]=f(st+1, en-1);
			}
			else
			{
				dp[st][en]=1+min(f(st+1,en),f(st,en-1));
			}
		}
	}
	return dp[st][en];
}

int main()
{
	ll t;
	sc(t);
	while(t--)
	{
		scanf("%s", s);
		for(int i=0;i<6100; i++)
		{
			for(int j=0; j<6100; j++)
				dp[i][j]=-1;
		}
		ll n=strlen(s);
		ll ans;
		ans=f(0,n-1);
		pr(ans);
	}
	return 0;
}
