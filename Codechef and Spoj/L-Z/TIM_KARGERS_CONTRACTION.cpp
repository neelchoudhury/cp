#include <bits/stdc++.h>
#include <sstream>
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

vector<ll> adj[210], ad[210];
vector<pair<ll, ll> > v;
vector<pair<ll, ll> >::iterator ii; 
int edg = 0;
int n;

void karger()
{
	cout<<"edg "<<edg<<endl;
	for(int i = edg; i>=2; i--)
	{
		// cout<<"haha "<<i<<endl;
		int r = rand()%i ;
		cout<<"rr "<<r<<endl;
		pair<ll,ll> p = v[r];
		v.erase(v.begin() + r);
		for(int j = 0; j<adj[p.ss].size(); j++)
		{
			adj[p.ff].pb(adj[p.ss][j]);
		}
		for(int j = 0; j<v.size(); j++)
		{
			if(v[j].ff == p.ss)
			{
				v[j].ff = p.ff;
			}
			if(v[j].ss == p.ss)
			{
				v[j].ss = p.ff;
			}
		}
		// for(int j = 0; j<adj[p.ff].size(); j++)
		// {
		// 	if(adj[p.ff][j] == p.ff)
		// 	{
		// 		adj[p.ff].erase(adj[p.ff].begin() + j);
		// 	}
		// }
		adj[p.ss].clear();
		cout<<"end "<<i<<endl;
	}
	cout<<"exiting"<<endl;
}

int main()
{
	ll n, x;
	// cin>>n;
	string s;
	istringstream inp;
	n = 200;
	for(int i = 1; i<=n; i++)
	{
		getline(cin, s);
		// inp.str(s);
		int flag = 0;
		// cout<<s<<endl;
		int num = 0;
		for(int j = 0; j<s.length(); j++)
		{
			if(s[j]>= '0' && s[j]<= '9' )
			{
				num = num*10 + s[j] - '0';
			}
			else
			{
				if(flag)
				{
					ad[i].pb(num);
					edg ++;
					pair<ll,ll> p ;
					p.ff = min(i, num);
					p.ss = max(i, num);
					ii = find(v.begin(), v.end(), p );
					if(ii == v.end())
						v.pb(p);
				}
				num = 0;
				flag = 1;
			}
		}
		if(num!= 0)
			ad[i].pb(num);

	}
	edg/=2;
	cout<<edg<<endl;
	// for(int i = 0; i<adj[1].size(); i++)
	// 	cout<<adj[1][i]<<" ";
	// cout<<endl;
	for(int i = 1; i<=n; i++)
	{
		// cout<<"sz "<<ad[i].size()<<endl;
		for(int j = 0; j<ad[i].size(); j++)
		{
			cout<<ad[i][j]<<" ";
			adj[i].pb(ad[i][j]);
		}
		cout<<endl;
	}


	karger();
	ll ans = 0;
	for(int i = 1; i<=n; i++)
	{
		cout<<"sz "<<adj[i].size()<<endl;
		if(adj[i].size() != 0)
			ans++;
		for(int j = 0; j<adj[i].size(); j++)
		{
			cout<<adj[i][j]<<" ";

		}
		cout<<endl;
	}

	cout<<"ans "<<ans<<endl;
}