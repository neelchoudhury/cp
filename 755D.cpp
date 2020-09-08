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

ll a[1000010];

int main()
{
	ll n,k;
	ios;
	cin>>n>>k;
	k=min(k,n-k);
	mem(a);
	ll j=1,pj=1,cnt=1;
	a[0]=1;
	for(ll i=1; i<=n; i++)
	{
		j=(j+k-1)%n+1;
		if(j!=1 and pj>j)
		{
			a[i]=a[i-1]+cnt+1;
			cnt+=2;
		}
		else
		{
			a[i]=a[i-1]+cnt;
		}
		pj=j;
	}
	for(ll i=1; i<=n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}