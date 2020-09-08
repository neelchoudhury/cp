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

ll coal[N],tax[N], pol[N];
int main()
{
	ios;
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mem(coal);mem(tax);mem(pol);
		for(ll i=1; i<=n; i++)
		{
			cin>>coal[i];
		}
		for(ll i=1; i<n; i++)
		{
			cin>>tax[i];
		}
		for(ll i=1; i<n; i++)
		{
			cin>>pol[i];
		}
		ll ans=0;
		for(ll i=1; i<=n; i++)
		{
			ll  cnt=0;
			for(ll j=1; j<=i; j++)
			{
				cnt+=coal[j];
				cnt-=tax[j-1];
			}
			for(ll j=i; j>=1; j--)
			{
				// cnt+=coal[i];
				if(pol[j-1]==2)
				{
					cnt-=tax[j-1];
				}
			}
			ans=max(ans,cnt);
		}
		cout<<ans<<endl;
	}
	return 0;
}