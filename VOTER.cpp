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

int main()
{
	ll t;
	ld n,m;
	cin>>t;
	for(ll i=1; i<=t; i++)
	{
		cin>>n>>m;
		cout<<"Case #"<<i<<": "<<setprecision(10)<<(n-m)/(n+m)<<endl;
	}
	return 0;
}