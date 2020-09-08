#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

ll a[510][510],dp[510][510],b[510][510],c[510][510];

int main()
{
	ll h,w;
	cin>>h>>w;
	string s="";
	mem(a);mem(dp);mem(b),mem(c);
	for(ll i=0; i<h; i++)
	{
		s="";
		cin>>s;
		for(ll j=0; j<s.length(); j++)
		{
			if(s[j]=='.')
				a[i][j]=1;
		}
	}
	ll cnt=0;
	for(ll i=0; i<h; i++)
	{
		
		for(ll j=0; j<w; j++)
		{
			cnt=0;
			if(j-1>=0 and a[i][j-1] and a[i][j])
				cnt+=1;
			if(i>=1 and a[i-1][j] and a[i][j])
				cnt+=1;
			ll x=0,y=0,z=0;
			if(i>=1)
				x=dp[i-1][j];
			if(j>=1)
				y=dp[i][j-1];
			if(i>=1 and j>=1)
				z=dp[i-1][j-1];
			// cout<<"ss "<<x<<" "<<y<<" "<<z<<" "<<cnt<<endl;
			dp[i][j]=x+y+cnt-z;
			// cout<<dp[i][j]<<" "<<i<<" "<<j<<endl;
			if(i>=1 and j==0)
				c[i][j]=(a[i][j]==1 and a[i-1][j]==1);
			if(i==0 and j>=1)
				b[i][j]=(a[i][j]==1 and a[i][j-1]==1);
			if(i>=1 and j>=1)
			{
				b[i][j]=b[i-1][j]+(a[i][j]==1 and a[i][j-1]==1);
				c[i][j]=c[i][j-1]+(a[i][j]==1 and a[i-1][j]==1);
			}
		}
	}
	// for(ll i=0;i<h; i++)
	// {
	// 	for(ll j=0; j<w; j++)
	// 		cout<<b[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<endl;
	// for(ll i=0;i<h; i++)
	// {
	// 	for(ll j=0; j<w; j++)
	// 		cout<<c[i][j]<<" ";
	// 	cout<<endl;
	// }
	ll q,r1,c1,r2,c2,ans=0;
	cin>>q;
	while(q--)
	{
		ans=0;
		cin>>r1>>c1>>r2>>c2;
		--r1,--c1,--r2,--c2;
		ll x=0,y=0,z=0;
		if(c1>=1)
			x=dp[r2][c1-1]-c[r1][c1-1];
		if(r1>=1)
			y=dp[r1-1][c2]-b[r1-1][c1];
		if(c1>=1 and r1>=1)
			z=dp[r1-1][c1-1];
		ans=dp[r2][c2]-x-y+z-b[r2][c1]-c[r1][c2] ;
		cout<<ans<<endl;
	}
	return 0;
}