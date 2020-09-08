#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define pb push_back
#define ff first
#define ss second 
#define dbg(x)   cout<<#x<<"="<<x<<endl

using namespace std;

int main()
{
	ll t,d;
	sc(t);
	while(t--)
	{
		sc(d);
		ll x=d%9;
		ll ans=x+1;
		pr(ans);
	}
	return 0;
}