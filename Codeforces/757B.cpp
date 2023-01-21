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

ll a[100010];

int main()
{ 
	 
	ios;
	mem(a);
	 
	ll n,x;
	cin>>n;
	for(ll i=0;i<n; i++)
	{
		 cin>>x;
		 a[x]++;
	}
	ll ans=1;
	ll cnt=0;
	for(ll i=2; i<=100010; i++)
	{
		cnt=0;
		 for(ll j=i; j<=100010; j+=i)
		 {
		 	cnt+=a[j];
		 }
		 ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}