#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 210
#define N 5010
#define MAX 400010

using namespace std;

ll a[N],sum[N];
ll dp[N][N]; 

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	mem(a),mem(sum);
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i-1];
		sum[i]=sum[i-1]+a[i-1];
	}
	ll i=0;
	ll s=0;

	for(ll i=0; i<=n; i++)
	{
		for(ll j=0; j<=k; j++)
			dp[i][j]=INT_MIN;
		 
	}
	dp[0][0]=0;
	for(ll i=0; i <= n; ++i)
	{
		for(ll j=0; j <= k; ++j)
		{
			if(i+m <= n)
				dp[i+m][j+1]=max(dp[i+m][j+1], dp[i][j]+sum[i+m]-sum[i]);
			dp[i+1][j]=max(dp[i+1][j], dp[i][j]);
		}
	}
	// for(ll i=0; i<n; i++)
	// {
	// 	for(ll j=1; j<=k; j++)
	// 		cout<<dp[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<endl;
	cout<<dp[n][k]<<endl;
}