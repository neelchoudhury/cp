#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll dp[4][4];

int main()
{
	ios;
	ll n;
	sc(n);
	mem(dp);
	dp[1][0]=dp[1][1]=dp[1][2]=1;
	dp[0][3]=1;
	ll i;
	for(  i=2; i<=n; i++)
	{
		dp[i%3][3]=3*dp[(i-2)%3][3]+2*(dp[(i-2)%3][0]+dp[(i-2)%3][1]+dp[(i-2)%3][2]);
		if(dp[i%3][3]>MOD)
			dp[i%3][3]%=MOD;
		// cout<<dp[(i][)%33]<<endl;
		dp[(i-1)%3][0]=dp[(i-2)%3][3]+dp[(i-2)%3][1]+dp[(i-2)%3][2];
		dp[(i-1)%3][1]=dp[(i-2)%3][3]+dp[(i-2)%3][0]+dp[(i-2)%3][2];
		dp[(i-1)%3][2]=dp[(i-2)%3][3]+dp[(i-2)%3][1]+dp[(i-2)%3][0];
		if(dp[(i-1)%3][0]>MOD)
			dp[(i-1)%3][0]%=MOD;
		if(dp[(i-1)%3][1]>MOD)
			dp[(i-1)%3][1]%=MOD;
		if(dp[(i-1)%3][2]>MOD)
			dp[(i-1)%3][2]%=MOD;
	}
	pr(dp[n%3][3]);
	return 0;
}