#include <bits/stdc++.h>
#define ll  long long
#define f first
#define s second  
#define pii pair< ll,ll > 
#define pb push_back
#define sc(x) scanf("%d",&x)
#define lw lower_bound
#define llmax 1e9
#define mod 1000000007
#define block 350
#define MAX 100010
#define set < ll > Set 
using namespace std;
 
priority_queue <pii,vector<pii> > pq ;
map <ll,ll> mii ,mii1 ;
map <ll,ll> ::iterator iit,iit1;
map <string ,ll> msi ;
map <string ,ll> ::iterator sit ;
map <char ,ll > mci ;
map <char ,ll > ::iterator cit ;
map <ll ,bool > mark ;
map <ll ,bool > ::iterator bit ;
vector <char> v ;
vector <ll > ::iterator vit ;
map < pii ,ll > mp ,mp1;
map < pii ,ll > ::iterator it ,tit ,it1 ;
map < pii ,ll > grundy ;
ll a [MAX] ,k [MAX] ,dp[MAX] ;
 
bool f ( ll mid , ll val ,ll hi  ) {
 
 
    ll x = dp [hi] - dp[mid-1] ;
 
    x += ( hi-mid+1) *val ;
    // cout << "x == " << x << "\n" ;
    if  ( x <= mid  ) return true ;
    else return false ;
}
 
ll solve ( ll lo ,ll hi , ll val ) {
 
    ll x =hi ;
    int pmid = -1  ;
    while ( lo < hi ) {
        ll mid = ( lo + hi - 1) >> 1 ;
        if ( pmid == mid ) {
            break ;
        }
        pmid = mid ;
        if ( f ( mid ,val ,x) ) hi = mid  ;
        else lo = mid +1 ;
        // cout << f ( mid ,val ,x) << " " << mid << " "  << lo << " " << hi << "\n" ;
    }
    // cout << "hi = " << hi << " " << f( hi , val , x ) << "\n" ;
    if ( f (hi , val , x )  )
    return x - hi +1 ;
    else return 0 ;
}
 
int  main  () {
    // ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t ;
    cin >>t ;
    while ( t-- ) {
 
        memset ( dp ,0 ,sizeof( dp )) ;
        ll n,q ;
        cin >> n >>q ;
        for ( ll i =0 ;i <n ; i++ ) cin >>a[i] ;
        sort ( a ,a+n ) ;
        for ( ll i =0 ; i < q ; i++ ) cin >>k[i] ;
 
        ll lt = 0 ;
        for ( ll t =0 ; t <q ; t++ ) {
            if ( t == 0 ) {
 
                for ( ll i = 0 ; i < n ;i ++ ) {
                    dp [i] = dp [i-1] +  k [t] -a[i] ;
                    cout << dp [i] << " @";
                }
                cout << "\n" ;
            }
            // cout << "Start\n" ;
            ll x = lw ( a ,a+n , k[t]) -a ;
            // cout << "x = " << x << "\n" ;
            if ( x -1 < 0 ) cout << n -x  << "\n" ;
            else cout << solve ( 0 , x-1, k[t]-k[0] ) + n-x <<"\n" ;   
        }
    }
}   
 
/*
1
6 1
100 200 296 374 553 670
*/ 