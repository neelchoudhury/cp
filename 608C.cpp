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

ll a[1000010],b[1000010];
vector<ll>::iterator ii;
ll dp[1000010];

void f(ll k,ll n)
{
	 
	 if(!a[k])
	 {
	 	if(k>0)
	 		dp[k]=dp[k-1];

	 }
	 else
	 {
	 	 // cout<<k<<" "<<dp[k-b[k]-1]<<endl;
	 	if(k<=b[k])
	 		dp[k]=1;
	 	else
	 		dp[k]=max(1LL,dp[k-b[k]-1]+1);
	 }
	 if(k>=n)
	 	return ;
	 f(k+1,n);
}

int main()
{
	ll n,x,y;
	for(ll i=0; i<=1000010;i++)
		dp[i]=0;
	cin>>n;
	ll ww=0;
	for(ll i=0; i<n; i++)
	{
		cin>>x>>y;
		a[x]=1;
		b[x]=y;
		ww=max(ww,x);
	}
	if(b[0]>0)
		dp[0]=1;
	f(1,ww);
	 
	ll q=INT_MIN;
	for(ll i=0; i<1000010; i++)
		q=max(q,dp[i]);
	cout<<n-q<<endl;
	return 0;
}