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
#define N 200010
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;  

ll aa[60];

int main()
{
	ll m,n,a,b;
	cin>>m>>n;
	mem(aa);
	aa[m]=1;
	ll k=n;

	while(k--)
	{
		cin>>a>>b;
		swap(aa[a],aa[b]);
	}
	// cout<<n<<endl;
	for(ll i=1; i<=10; i++)
	{
		if(aa[i])
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}