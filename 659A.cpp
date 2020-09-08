#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

int main()
{
	ll n,a,b,ans;
	cin>>n>>a>>b;
	ans= ((a-1+b)%n+n)%n+1;
	cout<<ans<<endl;
	return 0;
}
