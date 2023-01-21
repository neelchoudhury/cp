#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

int main()
{
	ll a ,b;
	cin>>a>>b;
	ll r1=0,r2=0,cnt1=0,cnt2=0;
	ll ans = 0;
    for(ll i=0; i<61;i++)
    { 
    	for(ll j=0; j<i-1; j++)
    	{
	        ll tmp = (1ll<<i) - (1ll<<j) - 1;
	        if(tmp >= a && tmp <= b) ans++;
    	}
	}
    
    cout << ans << endl;

}