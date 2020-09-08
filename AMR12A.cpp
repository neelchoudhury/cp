#include<bits/stdc++.h>
using namespace std;
 
// Numeric Constants
#define N 1000000007
#define maxs 250005
#define mins 1005
#define eps 0.000000000001
#define imax 2000000200
#define llmax 1000000002000000000ll
#define pi 3.141592653589793
 
// Others
#define ll long long int
#define pb push_back
#define gc getchar_unlocked
#define iosbase ios_base::sync_with_stdio(false)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ppi pair<pair<int,int>,int>
#define ppl pair<pll,ll>
#define vi vector<int>
#define sc scanf
#define pr printf
#define lld I64d
#define F first
#define S second
#define siter set<int>::iterator
#define p_pq priority_queue
#define ub upper_bound
#define lb lower_bound
 
ll n1, n2;
int matching[2*110], dist[110];
bool used[110], vis[110];
vector<int>adj[110];
ll arr[110][110];


queue<int>Q;
 
void bfs() {
    fill(dist, dist + n1+1, -1);
    for(int i=1;i<=n1;i++){
        if(!used[i]){
            Q.push(i);
            dist[i]=0;
        }
    }
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            int u2=matching[v];
            if(u2>=0 && dist[u2]<0){
                dist[u2]=dist[u]+1;
                Q.push(u2);
            }
        }
    }
}
 
bool dfs(int u1) {

    vis[u1] = true;
    for(int i=0;i<adj[u1].size();i++){
        int v=adj[u1][i];
        int u2=matching[v];
        if(u2<0 || !vis[u2] && dist[u2]==dist[u1]+1 && dfs(u2)){
            matching[v]=u1;
            used[u1]=true;
            return true;
        }
    }
    return false;
}
 
int fun(int mid,int n,int m,int c) {
    for(int i=0;i<110;++i)
        adj[i].clear();
    n1=n;
    n2=2*m;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(arr[i][j]<=mid)
            {
                adj[i].pb(j);
            }
            if(arr[i][j]+c<=mid)
            {
                adj[i].pb(j+m);
            }
        }
    }
    fill(used, used + n1+1, false);
    fill(matching, matching + n2+1, -1);
    for (int res = 0;;){
        bfs();
        fill(vis, vis + n1+1, false);
        int f=0;
        //cout<<used[0]<<" "<<n1<<endl;
        for(int i=1;i<=n1;i++){
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
    ll t,n,m,k,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&n,&m,&k,&c);
        for(ll i=1;i<=n;++i)
        {
            for(ll j=1;j<=m;++j)
                scanf("%lld",&arr[i][j]);
        }
        ll l=0;
        ll h=3*1e7;
        ll ans=0;
        while(l<=h)
        {
            ll mid=l+(h-l)/2;
            if(fun(mid,n,m,c)>=k)
            {
                ans=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}