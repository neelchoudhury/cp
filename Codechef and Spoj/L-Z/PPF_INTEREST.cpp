#include <bits/stdc++.h>
#include <sstream>
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
#define INF INT_MAX 

using namespace std;

int main()
{
	float n = 500, amt = 0, rate = 0.06, year = 15;
	// cin>>n;

	// INFLATION 	is a big factor which makes
	// a lot of this calculation moot.

	for(int i = 1; i<=year; i++)
	{
		amt = (amt + n)*(1+rate);
		cout<<"Year: "<<i<<" ; Amount: "<<amt<<endl;
	}
}