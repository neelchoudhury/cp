// #include <bits/stdc++.h>
// #define ll long long int
// #define ld long double 
// #define MOD 1000000007 
// #define mem(a) memset(a,0,sizeof(a))
// #define pb push_back
// #define ff first
// #define ss second 
// #define ios ios_base::sync_with_stdio(false);

// using namespace std;

// vector<ll> adj[100010];
// ll dis[100010];
// ll cnt=0;

// void bfs(ll n, ll sz)
// {
// 	dis[n]=1;
// 	queue<ll> q;
// 	q.push(n);
// 	while(!q.empty())
// 	{
// 		ll w=q.front();
// 		for(ll i=0; i<adj[w].size(); i++)
// 		{
// 			if(dis[adj[w][i]]==0)
// 			{
// 				dis[adj[w][i]]=1+dis[w];
// 				q.push(adj[w][i]);
// 			}
// 		}
// 		q.pop();
// 	}
// 	cnt=INT_MAX;
// 	for(ll i=1; i<=sz; i++)
// 	{
// 		if(dis[i]>1)
// 		{
// 			cnt=min(cnt,dis[i]-1);
// 		}
// 	}

// }

// int main()
// {
// 	ll q,n,m,clib,croad,x,y;
// 	cin>>q;
// 	while(q--)
// 	{
// 		cin>>n>>m>>clib>>croad;
// 		mem(dis);
// 		for(ll i=0; i<=100010; i++)
// 		{
// 			adj[i].clear();
// 		}
// 		for(ll i=0;i<m; i++)
// 		{
// 			cin>>x>>y;
// 			adj[x].pb(y);
// 			adj[y].pb(x);
// 		}
// 		ll ans=0;
// 		for(ll i=1; i<=n; i++)
// 		{
// 			cnt=0;
// 			if(!dis[i])
// 			{

// 				bfs(i,n);
// 				cout<<i<<" "<<cnt<<endl;
// 				// cout<<cnt*croad<<" "<<clib<<endl;
// 				ans+=cnt*croad + clib;
// 			}
			
			
// 		}
		 
// 		cout<<ans<<endl;

// 	}
// 	return 0;
// }

#include <iostream>
#include <vector>
#include <functional>
#define repeat(i,n) for (int i = 0; (i) < int(n); ++(i))
typedef long long ll;
using namespace std;
template <class T> void setmin(T & a, T const & b) { if (b < a) a = b; }
const ll inf = ll(1e18)+9;
int main() {
    int queries; cin >> queries;
    while (queries --) {
        int n, m, c_lib, c_road; cin >> n >> m >> c_lib >> c_road;
        vector<vector<int> > g(n);
        repeat (i,m) {
            int u, v; cin >> u >> v; -- u; -- v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int components = 0; {
            vector<bool> used(n);
            function<void (int)> dfs = [&](int i) {
                used[i] = true;
                for (int j : g[i]) if (not used[j]) dfs(j);
            };
            repeat (i,n) if (not used[i]) {
                components += 1;
                dfs(i);
            }
        }
        ll ans = inf;
        for (int k = components; k <= n; ++ k) { // inefficient
            setmin(ans, k *(ll) c_lib + (n-k) *(ll) c_road);
        }
        cout << ans << endl;
    }
    return 0;
}