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

ll a[100010],b[100010],c[100010],ans[100010];

int main()
{
	ll n,m;
	cin>>n>>m;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	for(ll i=0; i<m; i++)
		cin>>b[i];
	mem(ans);
	mem(c);
	for(ll i=n-1; i>=0; i--)
	{
		if(!c[a[i]])
		{ 
			c[a[i]]=1;
			ans[i]++;
		}
		if(i<n-1)
			ans[i]+=ans[i+1];
	}
	for(ll i=0; i<m; i++)
		cout<<ans[b[i]-1]<<endl;
	return 0;
}