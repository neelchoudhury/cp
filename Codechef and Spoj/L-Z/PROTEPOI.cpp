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
#define MAX 100010
#define set < ll > Set 
using namespace std;

priority_queue <pii,vector<pii> > pq ;
map <ll,bool > mii ,mii1 ;
map < ll ,bool > ::iterator iit,iit1;
map <string ,ll> msi ;
map <string ,ll> ::iterator sit ;
map <char ,ll > mci ;
map <char ,ll > ::iterator cit ;
map <ll ,bool > mark ;
map <ll ,bool > ::iterator bit ;
vector <pii> v ,h ,row ,col ;
vector <pii> ::iterator vit ;
map < pii ,ll > mp ,mp1;
map < pii ,ll > ::iterator it ,tit ,it1 ;
map < pii ,ll > grundy ;
ll  n , k ,m ,x,y ,p,q ;
ll pre [MAX] ,ans [MAX] ,cnt [MAX];

bool cmp ( pii p1 ,pii p2 ) 
{

    if ( p1.f == p2.f ) 
    {
        if ( p1.s-max ( p ,p1.f) > p2.s- max ( p ,p2.f) ) 
        	return true ;
        else x
        	return false ; 
    }
    else 
    	return p1.f < p2.f ;
}

ll reduce ( vector < pii > &v ) 
{

    ll cnt =0 ;
    // cout << v.size() << "\n" ;
    for ( ll i =0; i  < v.size() ; i++ ) {
        ll p1 = i ;
        while ( p1 < v.size() && (v[p1].f == v[i].f||v[p1].s <= v[i].s) ) 
        	p1 ++ ;
        v[cnt++] = v[i] ;
        i = max ( i , p1-1)  ;
    }
    // cout << "cnt =" << cnt << "\n" ;
    return cnt ;
}

int main  () 
{
    
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t ;
    cin >> t ;
    while ( t-- ) 
    {
        ll x1,y1,x2,y2  ;
        col.clear () ;
        row.clear () ;

        cin >> n >> k >> m;
        for ( int i =0 ; i < m ; i ++ ) 
        	pre [i] = -1 , ans [i] = 0 , cnt [ i ] = 0 ;
        // cout << n << " " << " " << m << " " <<k << "\n" ;
        p = (( n-k )/2) + 1 ;
        q = p + k -1 ;

        // cout << "p=" <<p << " " << q << "\n" ;
        for ( ll i =0 ; i < m ; i++ ) 
        {
            cin >> x1 >> y1 >> x2 >> y2 ;

            if ( x1 == x2 && (x2 < p|| x1 >q )) 
            {
                if ( y1 > q || y2 < p ) 
                	continue ;
                col.pb ({max ( p , y1) , min (q ,y2) }) ;
            }
            else if( y1==y2 && ( y2 < p || y1 > q) )
            {
                if ( x1 > q || x2 < p ) 
                	continue ;
                row.pb({max (p ,x1 ) , min ( q ,x2) }) ;

            }
        }

        // cout <<"row\n" ;
        // for ( ll i =0 ; i < row.size() ; i++ ) cout << row[i].f << " " << row[i].s << "\n" ;
        //     cout << "\ncol\n" ;
        // for ( ll i =0 ; i < col.size() ; i ++ ) cout << col[i].f << " " << col[i].s << "\n" ;

            // cout << "\n\n" ;
        sort ( col.begin() ,col.end() ,cmp) ;
        sort ( row.begin() ,row.end() ,cmp) ;
        
        ll cnt1 = reduce ( col ) ;
        ll cnt2 = reduce ( row) ;

        // cout <<"row\n" ;
        // for ( ll i =0 ; i < cnt2 ; i++ ) cout << row[i].f << " " << row[i].s << "\n" ;
        //     cout << "\ncol\n" ;
        // for ( ll i =0 ; i < cnt1 ; i ++ ) cout << col[i].f << " " << col[i].s << "\n" ;
        pre [0] = -1 ;
        ll st = p ;
        bool flag = false ;
        // cout << "start\n" ;
        for ( ll i = 0 ; i < cnt2 ; i++ ) {
            if ( st >= row[i].f ) st = row [i].s+1 ;
            else {
                flag = true ;
                break ;
            }

            // cout << st << "\n" ;
        } 
        
        if ( flag || st <= q ) {cout <<"-1\n" ;continue ;}
        st = p ;
        flag =false ;
        // cout << "\n\n\n" ;
        for ( ll i = 0 ; i < cnt1 ; i++ ) {
            if ( st >= col[i].f ) st = col [i].s+1 ;
            else {
                flag = true ;
                break ;
            }
            // cout << st << "\n" ;
        } 

        if ( flag || st <= q ) {cout <<"-1\n" ;continue ;}

        for ( ll i =0 ; i < cnt2 ;i++ ) {
            ll j = i -1 ;
            if ( i == 0 ) {
                pre [i] = -1 ;
                cnt[0] ++ ;
            }
            else {
                ll j = i -1 ;
                while ( j != -1 && row[j].s >= row[i].f  ) j = pre [j] ;
                if ( j == -1 ) {
                    pre [i] = 0 ;
                    cnt [i] = 2 ;
                    continue ;
                }
                pre [i] = j ;
                cnt [i] = 1 + cnt [j] ;
            }
        }   

        for ( int i =0 ; i < m ; i ++ ) pre [i] = -1 ;

        for ( ll i =0 ; i < cnt1 ;i++ ) {
            if ( i == 0 ) {
                pre [i] = -1 ;
                ans [0] ++ ;
            }
            else {
                ll j = i -1 ;
                while ( j != -1 && col[j].s >= col[i].f ) j = pre [j] ;

                if ( j == -1 ) {
                    pre [i] = 0 ;
                    ans [i] = 2 ;
                    continue ;
                }
                pre [i] = j ;
                ans [i] = ans [j] +1 ;
            }
        }

        cout << ans [cnt1-1] +  cnt [cnt2-1] << "\n" ;
    }
}   

/*
3
7 3 8
2 3 2 3
2 4 2 4
2 5 2 5
2 1 2 4
3 2 3 2
4 2 4 2 
5 2 5 2
1 2 4 2
7 3 7
1 1 6 1
1 2 3 2
5 2 5 2
2 4 2 6
6 2 6 4
5 6 5 7
7 1 7 4
7 3 7
1 1 6 1
1 2 3 2
5 2 5 2
2 6 2 6
6 2 6 4
5 6 5 7
7 1 7 4
*/