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
#define maxs 125

using namespace std;

int n1, n2;
int matching[maxs], dist[maxs];
bool used[maxs], vis[maxs];
vector<int>adj[maxs]; 
queue<int>Q; 

void init(int _n1, int _n2) {
    n1 = _n1;
    n2 = _n2;
}

void bfs() {
    fill(dist, dist + n1, -1);
    for(int i=0;i<n1;i++){
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

int maxMatching() {
    fill(used, used + n1, false);
    fill(matching, matching + n2, -1);
    for (int res = 0;;){
        bfs();
        fill(vis, vis + n1, false);
        int f=0;
        for(int i=0;i<n1;i++){
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
	int t,x,y,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>x>>y;
			adj[x].pb(y);
		}
		init(120,120);
		int ans=maxMatching();
		cout<<ans<<endl;
		for(ll i=0; i<120; i++)
		{
			adj[i].clear();
		}
	}
	return 0;
}