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
#define V 300
#define K 510
#define N 200010
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;

vector<pair<ll,string> > v;

int main()
{
	ll n;
	string s="";
	ios;
	cin>>n;
	while(n--)
	{
		s="";
		cin>>s;
		v.pb({s.length(),s});
	}
	sort(v.begin(),v.end());
	for(ll i=0; i<v.size();i++)
	{
		cout<<v[i].ss<<endl;
	}
	return 0;
}