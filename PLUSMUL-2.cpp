#include <bits/stdc++.h>
#define ll  long long
#define f first
#define s second  
#define pii pair< ll,ll > 
#define pb push_back
#define sc(x) scanf("%d",&x)
#define lw lower_bound
#define llmax 1e18
#define mod 1000000007
#define block 350
#define MAX 5010
#define set < ll > Set 
#define DEBUG 0 
using namespace std;
priority_queue <pii,vector<pii> > pq ;
map <ll,ll > mii ,mii1 ;
map < ll ,bool > ::iterator iit,iit1;
map <string ,ll> msi ;
map <string ,ll> ::iterator sit ;
map <char ,ll > mci ;
map <char ,ll > ::iterator cit ;
map <ll ,bool > mark ;
map <ll ,bool > ::iterator bit ;
vector <pii> v ,ans ;
vector <ll> ::iterator vit ;
map < pii ,ll > mp ,mp1;
map < pii ,ll > ::iterator it ,tit ,it1 ;
map < pii ,ll > grundy ;

ll c[500010] ,a[500010] ,dp[500010] ;

ll power(ll x, unsigned ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%(mod);
    else
        return (x*((temp*temp)%(mod)))%(mod);
}

int main  () {
    
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0) ;
    ll n,k ;
    cin >> n>>k ;
    for ( ll i =0 ; i < n ; i++ ) cin >> a[i]  ;
    for ( ll i =1 ; i <=n ; i++ ) {
        c[i] =  c[i-1] + power ( 2 ,i-1 ) ;
        c[i] %= mod ;
        cout << c[i] << " " ;
    }
    cout << "\n" ;

    if ( k == 0 ) {
        cout <<"0\n" ;
        return 0 ;
    }

    else if ( k > n ) {
        cout << c[n] << "\n" ;
        return 0 ;
    }

    for ( ll i =0 ; i <= k ; i++ ) mark [i] = 1 ;
        ll i =0  ;
    while ( i <n && !mark.empty ()) {
        if ( a[i] <= k) mark.erase ( a[i]) ;
        if ( mark.empty () ) break ;
        dp [i] = c[i+1] ;
        i++ ;
    }
    cout << i << "\n" ;
    if ( i == n ) {
        cout << c[n] << "\n" ;
        return 0 ;
    }

    ll p = 0  ,ans ;
    for ( ll j = i ; j < n ; j++ ) {
        cout << a[p] << " " << a[j] << "\n" ;
        if ( a[p] == a[j] || i == j ) {
            while ( a[p] > k ) p ++ ; 
            p++ ;
        }
                cout << "p= " << p << " " << dp[p-1] << " " << j-p+1 << "\n" ;
        dp[j] = dp [p-1] * c [j-p+1] ;
        dp[j] %= mod ;
        cout << dp [j] << " bing " ;
    }
    cout << "\n" ;
    cout << dp[n-1] << "\n" ;
}
/*
3
3
1 2 4
4
1 1 1 1
4
1 2 4 5
*/