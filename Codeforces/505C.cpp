#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 210
#define N 30010
#define MAX 400010

using namespace std;

ll a[N] ;
ll dp[N][500];
bool used[N][500]  ;
 
ll n,d;
 
ll f(ll i, ll j) {
    ll jj = j-(d-250);
    if (i >= N) 
    	return 0;
    if (used[i][jj]) 
    	return dp[i][jj];
    used[i][jj] = true;
    ll res=0;
    if (j == 1) 
    {
        res = a[i] + max(f(i+j, j), f(i+j+1, j+1));
    } 
    else 
    {
        res = a[i] + max(max(f(i+j-1, j-1), f(i+j, j)), f(i+j+1, j+1));
    }
    dp[i][jj] = res;
    return res;
}
 
int main() {
    ll n,d;
    cin>>n>>d;
    mem(a);
    mem(dp);
    mem(used);
    for (ll i=0; i<n; i++) 
    {
        ll x;
        cin>>x;
        a[x]++;
    }
    ll ans=f(d,d);
    cout<<ans<<endl;
    return 0;
}