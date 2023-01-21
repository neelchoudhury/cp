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
	ll n,c,m,x;
	cin>>n>>c>>m;
	ll f=0;
	while(n--)
	{
		cin>>x;
		if(x>m*c)
		{
			f=1;
		}
	}
	if(f)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}