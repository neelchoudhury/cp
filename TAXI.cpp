#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 80010
#define MAX 1111111

using namespace std;

vector< pair<ll,ll> > per,tax;
vector<ll> adj[80010];
queue<ll>Q;
ll matching[N], dist[N];
bool used[N], vis[N]; 
ll n1,n2;

void init(ll _n1, ll _n2) {
    n1 = _n1;
    n2 = _n2;
}

void bfs() {
    fill(dist, dist + n1, -1);
    for(ll i=0;i<n1;i++){
        if(!used[i]){
            Q.push(i);
            dist[i]=0;
        }
    }
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<adj[u].size();i++){
            ll v=adj[u][i];
            ll u2=matching[v];
            if(u2>=0 && dist[u2]<0){
                dist[u2]=dist[u]+1;
                Q.push(u2);
            }
        }
    }
}

bool dfs(ll u1) {
    vis[u1] = true;
    for(ll i=0;i<adj[u1].size();i++){
        ll v=adj[u1][i];
        ll u2=matching[v];
        if(u2<0 || !vis[u2] && dist[u2]==dist[u1]+1 && dfs(u2)){
            matching[v]=u1;
            used[u1]=true;
            return true;
        }
    }
    return false;
}

ll maxMatching() {
    fill(used, used + n1, false);
    fill(matching, matching + n2, -1);
    for (ll res = 0;;){
        bfs();
        fill(vis, vis + n1, false);
        ll f=0;
        for(ll i=0;i<n1;i++){
            if(!used[i] && dfs(i)){
                f++;
            }
        }
        if(!f){
            return res;
        }
        res+=f;
    }
}

int main()
{
	ios;
	ll k,p,t,s,c,x,y;
	cin>>k;
	while(k--)
	{
		cin>>p>>t>>s>>c;
		per.clear();
		tax.clear();

		init(p,t);
		for(ll i=0; i<p; i++)
		{
			cin>>x>>y;
			per.pb({x,y});
		}
		for(ll i=0; i<t; i++)
		{
			cin>>x>>y;
			tax.pb({x,y});
		}
		ll dist=0;
		for(ll i=0; i<p; i++)
		{
			for(ll j=0; j<t; j++)
			{
				dist=abs(per[i].ff-tax[j].ff)+abs(per[i].ss-tax[j].ss);
				if(s*c>=200*dist)
				{
					adj[i].pb(j); 
				}
			}
		}
		ll ans=maxMatching();
		cout<<ans<<endl;
		for(ll i=0; i<p; i++)
		{
			adj[i].clear();
		} 
	}
	return 0;
}
