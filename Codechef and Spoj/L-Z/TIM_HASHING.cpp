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

unordered_set<ll> ms;
unordered_set<ll>::iterator i1, i2, i3;

set<ll> s;

int main()
{
	ll n = 1000000, x = 0;
	fstream file ("input_hash.txt", ios_base::in);
	ms.max_load_factor(0.05);
	for(ll i = 0; i<n; i++)
	{
		file>>x;
		ms.insert(x);
//		cout<<x<<endl;
	}
	ll m = 10000;
	for(ll i = -m; i<=m; i++)
	{
//		cout<<"happen "<<i<<endl;
		for(i1 = ms.begin(); i1!=ms.end(); i1++)
		{
			// cout<<*i1<<endl;
			if(ms.find(i-*i1)!= ms.end() && *ms.find(i-*i1)!= *i1)
			{
//				cout<<" found"<<endl;
				s.insert(i);
				break;
			}
		}
	}	
	cout<<s.size()<<endl;

}
