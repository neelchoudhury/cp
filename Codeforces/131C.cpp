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
#define N 3010
#define MAX 400010

using namespace std;

ll nck(ll n, ll k)
{
	if(n<k)
		return 0;
	ll result = 1    ;
	for (ll i=1; i<= min(k,n-k); i++)
	{
   		result *= (n-i+1);
   		result /= i;
	}
	return result;
}

int main()
{
	ll n,m,t;
	cin>>n>>m>>t;
	ll ans=0;
	for(ll i=4; i<=t-1; i++)
	{
		ans+=nck(n,i)*nck(m,t-i);
	}
	cout<<ans<<endl;
	return 0;
}