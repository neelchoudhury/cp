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

using namespace std;

set<ll> in[5010];
set<ll> out[5010];
set<ll>::iterator ii;

int main()
{
	ll n, m, u, v;
	cin>>n>>m;
	set<ll> ss;
	for(ll i = 0; i < m; i++)
	{
		cin>>u>>v;
		ss = out[v];
		ss.insert(v);
		out[u].insert(ss.begin(), ss.end());
		ss = in[u];
		ss.insert(u);
		// for(ii = ss.begin(); ii != ss.end(); ii++)
		// 	cout<<*ii<<" ";
		// cout<<endl;
		in[v].insert(ss.begin(), ss.end());
	}
	// for(ll i = 1; i<=n; i++)
	// {
	// 	cout<<i<<" bing "<<endl;
	// 	for(ii = in[i].begin(); ii != in[i].end(); ii++)
	// 		cout<<*ii<<" ";
	// 	cout<<endl;
	// }
	// for(ll i = 1; i<=n; i++)
	// {
	// 	cout<<i<<" bink "<<endl;
	// 	for(ii = out[i].begin(); ii != out[i].end(); ii++)
	// 		cout<<*ii<<" ";
	// 	cout<<endl;
	// }
	ll q, x, y;
	ll ch;
	cin>>q;
	while(q--)
	{
		cin>>ch>>x>>y;
		if(ch == 1)
		{
			if(y == 0)
			{
				n++;
				out[x].insert(n);
				in[n].insert(in[x].begin(), in[x].end());
				in[n].insert(x);
			}	
			else
			{
				n++;
				in[x].insert(n);
				out[n].insert(out[x].begin(), out[x].end());
				out[n].insert(x);
			}
		}
		else
		{
			cout<<x<<" "<<y<<endl;
			if(out[x].find(y) != out[x].end() || in[y].find(x) != in[y].end())
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}