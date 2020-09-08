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
#define INF INT_MAX 

using namespace std;

int main()
{
	ll t, u, v;
	cin>>t;
	while(t--)
	{
		cin>>u>>v;
		ll rank = u+v;
		rank = ((rank)*(rank+1))/2;
		rank = rank + u + 1;
		cout<<rank<<endl;
	}
	return 0;
}