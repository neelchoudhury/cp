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

vector<pair<ll ,ll> > v;

int main()
{
	ll q,r;
	char ch;
	ll x,y;
	ios;
	cin>>q>>r;
	while(q--)
	{
		cin>>ch>>x>>y;
		if(ch == '+')
			v.pb({x,y});
		else
		{
			if(abs(v[x-1].ff - v[y-1].ff) + abs(v[x-1].ss - v[y-1].ss) <= 2*r)
				cout<<"DA"<<endl;
			else
				cout<<"NET"<<endl	;
		}
	}
	return 0;
}