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
#define N 1010
#define MAX 400010

using namespace std;

ll a[N][N],n,m,v[N],x,y,ans;
vector<pair<ll,ll> >val;

int main(){
	ll i,j;
    cin>>n>>m;
	for(ll i=1; i<=n; i++)
	{
        cin>>v[i];
		val.pb({v[i],i});
    }
    for(ll i=0; i<m; i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    sort(val.begin(),val.end());
    reverse(val.begin(),val.end());
    ll z=val.size();
    for(ll i=0; i<val.size(); i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if(a[val[i].ss][j]) ans+=v[j];
        }
		for(ll j=1; j<=n; j++)
		{
			a[j][val[i].ss]=0;
		}
    }
    cout<<ans<<endl;
    return 0;
}