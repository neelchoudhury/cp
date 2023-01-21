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

ll a[N];

int main()
{
	ios;
	ll t,k,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(ll i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n);
		ll ans=INT_MAX;
		for(ll i=0; i<n-k+1; i++)
		{
			ans=min(ans, a[i+k-1]-a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}