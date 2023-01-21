#include<bits/stdc++.h>
using namespace std;

// Numeric Constants
#define N 1000000007
#define maxs 200005
#define mins 1005
#define eps 0.000000000001
#define imax 2000000200
#define llmax 1000000002000000000ll
#define pi 3.141592653589793

// Others
#define ll long long
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


int n1, n2;
int matching[maxs], dist[maxs];
bool used[maxs], vis[maxs];
vector<int>adj[maxs];
int a[505][505];
queue<int>Q;
map<int,int>mp;
int ans1[maxs];
vector<int>v;

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
string s[maxs];

int main()
{
	iosbase;
    int n,i,j,m;
    cin>>n>>m;
    for(i=0;i<n;i++){
    	cin>>s[i];
    }
    init(n,m);
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		if(s[i][j]=='1'){
    			adj[i].pb(j);
             //   cout<<i<<" "<<j<<endl;
    		}
    	}
    }
    int ans=maxMatching();
   	pr("%d\n",ans);
    return 0;
}