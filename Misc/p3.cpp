#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
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
#define N 200010
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;  

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	ll t,r,c;
	ios;
	cin>>t;
	for(ll i=1; i<=t; i++)
	{
		cout<<"Case #"<<i<<": ";

		cin>>r>>c; 
		ll ans=0;
		ll k=min(r,c);
		ll ans1=(((r*c)%MOD*((k*(k+1))%MOD))%MOD*power(2,MOD-2,MOD)%MOD)%MOD;
		ll ans2=(((((r+c)%MOD*(k))%MOD*(k+1)%MOD)%MOD*(2*k+1)%MOD)%MOD*power(6,MOD-2,MOD)%MOD)%MOD;
		ll ans3=((((k*k)%MOD*((k+1)%MOD*(k+1))%MOD)%MOD)%MOD*power(4,MOD-2,MOD)%MOD)%MOD;
		// cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
		ans=(ans1-ans2+2*MOD+ans3)%MOD;
		cout<<ans<<endl;
	}
	return 0;
}