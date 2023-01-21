#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define pi pair<ll,ll>
#define MOD 1000000007
#define INF 1e18
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n ",x)
const ll MAXN = 100000 + 10;
const ll MAXL = 22;
vector<ll> v[MAXN];
ll depth[MAXN];
ll par[MAXN][MAXL];
bool visited[MAXN];
ll n, m, l;
void DFS(ll u) {
    visited[u] = true;
    for(ll i = 0; i < v[u].size(); i++) {
        if (!visited[v[u][i]]) {
            depth[v[u][i]] = depth[u] + 1;
            DFS(v[u][i]);
            par[v[u][i]][0] = u;
        }
    }
}
void jump(ll &u, ll height) {
    for(ll i = l; i >= 0; i--) {
        if (height >= (1 << i)) {
            u = par[u][i];
            height -= (1 << i);
        }
    }
}
ll lca(ll u, ll v) {
    if (depth[u] > depth[v]) jump(u, depth[u] - depth[v]); else jump(v, depth[v] - depth[u]);
    if (u == v) return(u);
    for(ll i = l; i >= 0; i--) {
        if (par[u][i] != par[v][i]) {
            u = par[u][i]; v = par[v][i];
        }
    }
    return par[u][0];
}
int main()
{
    scanf("%lld\n", &n);
    ll a,b;
    for(ll i = 1; i <= n - 1; i++) {
        scanf("%lld %lld\n", &a, &b);
        v[a].push_back(b); v[b].push_back(a);
    }
    for(ll i = 1; i <= n; i++) visited[i] = false;
    m = n;
    DFS(1);
    l = (ll)(log(n) / log(2)) + 1;
    for(ll j = 1; j <= l; j++) {
        for(ll i = 1; i <= n; i++) par[i][j] = par[par[i][j - 1]][j - 1];
    }
    ll q;
    ll r,s,t;
    ll x,y,z,k;
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld %lld %lld",&r,&s,&t);
        x=lca(r,s);
        y=lca(s,t);
        z=lca(t,r);
        k=x^y^z;
        cout<<k<<endl;
    }
    
    return 0;
}