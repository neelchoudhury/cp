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

ll a[110][2];

int main()
{
	ll n,k,d;
	cin>>n>>k>>d;
	mem(a);
	ll sum=0;
	for(ll i=1;i<=k; i++)
	{
		
		if(i>=d)
			a[i][1]=1;
		else
			a[i][0]=1;
	}
	// cout<<a[1][1]<<" k "<<a[1][0]<<endl;
	for(ll i=2; i<=n; i++)
	{
		sum=0;
		for(ll j=1;j<=k and j<i; j++)
		{
			sum+=a[i-j][1];
			if(sum>MOD)
				sum%=MOD;
		}
		a[i][1]+=sum;
		if(a[i][1]>MOD)
			a[i][1]%=MOD;
		// cout<<sum<<endl;
		sum=0;
		for(ll j=d; j<=k and j<i; j++)
		{
			sum+=a[i-j][0];
			if(sum>MOD)
				sum%=MOD;
		}
		// cout<<sum<<endl;
		a[i][1]+=sum;
		if(a[i][1]>MOD)
			a[i][1]%=MOD;
		sum=0;
		for(ll j=1; j<d and j<i; j++)
		{
			sum+=a[i-j][0];
			if(sum>MOD)
				sum%=MOD;
		}
		a[i][0]+=sum;
		if(a[i][0]>MOD)
			a[i][0]%=MOD;
		// cout<<a[i][1]<<" "<<a[i][0]<<endl;
	}
	cout<<a[n][1]<<endl;
	return 0;
}