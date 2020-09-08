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

ll a[25][25];
ll n,m;

bool fun2(ll ii){
    for (ll i = 1; i <= m; i++) 
    {
        for (ll j = 1; j <= m; j++) 
        {
            swap(a[ii][i] , a[ii][j]);
            bool chk = true;
            for (ll k = 1; k <= m; k++) {
                if(a[ii][k] != k){
                    chk = false;
                    break;
                }
            }
            swap(a[ii][i] , a[ii][j]);
            if (chk) {
                return true;
            }
        }
    }
    return false;
}

void fun1()
{
    for (ll i = 1; i <= n; i++) {
        if (!fun2(i)) {
            return;
        }
    }
    cout<<"YES"<<endl;
    exit(0);
}

int main()
{
	
	cin>>n>>m;
	mem(a);
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	 for (int i = 1; i <= m; i++) 
	 {
        for (int j = 1; j <= m; j++) 
        {
            for (int k = 1; k <= n; k++) 
            {
                swap(a[k][i], a[k][j]);
            }
            fun1();
            for (int k = 1; k <= n; k++) 
            {
                swap(a[k][i] , a[k][j]);
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}