#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;

ll a[110],dp[110][3];

int main()
{
	ll n;
	cin>>n;
	for(ll i=1; i<=n; i++)
		cin>>a[i];
	for(ll i=1; i<=n; i++)
	{
		dp[i][0]=INT_MAX;
		dp[i][1]=INT_MAX;
		dp[i][2]=INT_MAX;
	}
	dp[0][0]=0;
	for (ll i = 1; i <= n; i++) {
         
        dp[i][0] = min(dp[i - 1][1], min(dp[i - 1][0], dp[i - 1][2])) + 1;
        if (a[i] & 1) 
        	dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        if (a[i] & 2) 
        	dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
    }
    ll ans=min(dp[n][0],min(dp[n][1],dp[n][2]));
    cout<<ans<<endl;
    return 0;
}