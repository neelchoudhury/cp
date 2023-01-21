#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 20010
#define MAX 400010

using namespace std;

ll a[55][55], b[55],c[55],dp[55];

int main()
{
	ios;
	ll t,m,k,n;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		mem(a);
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<m;j++)
			{
				cin>>ch;
				if(ch=='*')
					a[i][j]=1;
				else
					a[i][j]=0;
			}
		}
		mem(b);mem(c);
		ll sum=0;
		ll cnt=0;
		for(ll i=0; i<n; i++)
		{
			cnt=0;
			for(ll j=0; j<m; j++)
			{
				cnt+=a[i][j];
				sum+=a[i][j];
			}
			if(cnt>n/2)
				c[i]=cnt;
			else if(cnt<=n/2)
				b[i]=n-cnt;
		}
		sort(b,b+n);
		reverse(b,b+n);
		sort(c,c+n);
		reverse(c,c+n);
		mem(dp);
		//c=2 b=1
		dp[0]=sum+b[0];
		for(ll i=0; i<k; i++)
		{
			 
				dp[i]=max(dp[i-1]+b[i]+c[i],c[i-1]);
			 
		}
		cout<<dp[k-1]<<endl;
	}
	return 0;
}