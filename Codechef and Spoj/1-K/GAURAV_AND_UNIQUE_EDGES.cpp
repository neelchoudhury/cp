#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

vector<pair<ll,ll> > v[100010];
ll ed[100010][11];
ll visited[100010];
ll depth[100010];
ll par[100010][20];
ll m;

void DFS(ll u) {
    visited[u] = true;
    for(ll i = 0; i < v[u].size(); i++) 
    {
        if (!visited[v[u][i].ff]) 
        {
            depth[v[u][i].ff] = depth[u] + 1;
            for(ll j=1; j<=10; j++)
            {
            	ed[v[u][i].ff][j]=ed[u][j];
            }
            ed[v[u][i].ff][v[u][i].ss]+=1;
            DFS(v[u][i].ff);
            par[v[u][i].ff][0] = u;
        }
    }
}

void jump(ll &u, ll height) {
    for(ll i = m; i >= 0; i--) {
        if (height >= (1 << i)) {
            u = par[u][i];
            height -= (1 << i);
        }
    }
}

ll lca(ll u, ll v) {
    if (depth[u] > depth[v]) jump(u, depth[u] - depth[v]); else jump(v, depth[v] - depth[u]);
    if (u == v) return(u);
    for(ll i = m; i >= 0; i--) {
        if (par[u][i] != par[v][i]) {
            u = par[u][i]; v = par[v][i];
        }
    }
    return par[u][0];
}

int main()
{
	ios;
	ll n,q;
	ll u,vz,w;
	cin>>n;
	for(ll i=0; i<n-1; i++)
	{
		cin>>u>>vz>>w;
		v[u].pb(pair<ll,ll>(vz,w));
		v[vz].pb(pair<ll,ll>(u,w));
	}
	mem(visited);
	mem(ed);
	mem(depth);
	mem(par);
	DFS(1);
    m = (ll)(log(n) / log(2)) + 1;
    for(ll j = 1; j <= m; j++) {
        for(ll i = 1; i <= n; i++)
        {
        	par[i][j] = par[par[i][j - 1]][j - 1];
        } 
        	
    }
    cin>>q;

    while(q--)
    {
    	cin>>u>>vz;
    	ll q=lca(u,vz);
    	ll ans=0;
    	for(ll i=1; i<=10; i++)
    	{
    		if(ed[u][i]!=ed[q][i] or ed[vz][i]!=ed[q][i])
    			ans++;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}