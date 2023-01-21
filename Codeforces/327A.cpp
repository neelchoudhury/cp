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

ll a[110],b[110],c[110];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	b[0]=a[0];
	for(ll i=1; i<n; i++)
	{
		b[i]=b[i-1]+a[i];
	}
	c[n-1]=a[n-1];
	for(ll i=n-2; i>=0; i--)
	{
		c[i]=c[i+1]+a[i];
		
	}
	// for(ll i=0; i<n; i++)
	// 	cout<<c[i]<<" ";
	// cout<<endl;
	ll ans=0;
	ll cnt=0;
	ll x=0,y=0;

	for(ll i=0; i<n; i++)
	{
		cnt=0;
		x=y=0;
		// /cnt=!a[i];
		for(ll j=i; j<n; j++)
		{
			if(a[j]==0)
				cnt++;
			 
			if(i>0)
				x=b[i-1];
			if(y<n-1)
				y=c[j+1];
			ans=max(ans,x+y+cnt);
			// cout<<x<<" x "<<y<<" "<<cnt<<endl;
			// cout<<ans<<" "<<i<<" "<<j<<endl;
		}
	}
	if(n==1 and a[0]==0)
		ans=1;
	cout<<ans<<endl;
	return 0;
}