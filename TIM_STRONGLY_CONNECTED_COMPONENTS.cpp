#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

vector<int> adj[880010], rev[880010];
bool vis[880010];
int n;
stack<int> stk, fstk;
stack<pair<int, int> > st;
multiset<int> s;

void dfs(int n)
{
	vis[n] = 1;

	st.push({n, 0});
	while(!st.empty())
	{
		int k = st.top().ff;
		int ind = st.top().ss;
			
		if(ind == adj[k].size())
		{
			st.pop();
			stk.push(k);
		}
		else if(!vis[adj[k][ind]])
		{
			vis[adj[k][ind]] = 1;
			st.top().ss++;
			st.push({adj[k][ind], 0});
			
		}
		else
		{
			st.top().ss++;
		}
		
	}
}

int dfs2(int n, int sz)
{
	vis[n] = 1;
	while(!fstk.empty())
	{
		fstk.pop();
	}

	fstk.push(n);
	while(!fstk.empty())
	{
		int k = fstk.top();
		fstk.pop();
		for(int i = 0; i<rev[k].size(); i++)
		{
			if(!vis[rev[k][i]])
			{
				vis[rev[k][i]] = 1;
				fstk.push(rev[k][i]);
				sz++;
			}
		}
	}
	
	return sz;
}

void scc_dfs()
{
	int n, sz;
	while(!stk.empty())
	{
		n = stk.top();
		stk.pop();
		if(!vis[n])
		{
			sz = dfs2(n, 1);
			s.insert(sz);
			if(s.size() > 5)
			{
				s.erase(s.begin());
			}
		}
	}
}

void scc(int n)
{
	mem(vis);
	for(int i = 1; i<=n; i++)
	{
		if(!vis[i])
		{
			cout<<"dfs "<<i<<endl;
			dfs(i);
		}
	}
	cout<<"done dfs"<<endl;
	mem(vis);

	scc_dfs();
	cout<<"done scc dfs"<<endl;
}

int main()
{
	n = 5;
	int x, y;
	int n = 1;
	fstream file ("input.txt", ios_base::in);
	while(file>>x)
	{
		file>>y;
		adj[x].pb(y);
		rev[y].pb(x);
		n = max(n,max(x,y));
	}
	cout<<"done"<<endl;
	
	scc(n);

	set<int>::iterator ii;

	for(ii = s.begin(); ii!=s.end(); ii++)
	{
		cout<<*ii<<" ";
	}
	cout<<endl;

	return 0;
}
