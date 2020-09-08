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
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

map<char, ll> m;

int main()
{
	string s="";
	cin>>s;
	for(ll i=0; i<s.length(); i++)
	{
		m[s[i]]++;
	}
	ll ans=INT_MAX;
	ans=min(ans,m['B']);
	ans=min(ans,m['u']/2);
	ans=min(ans,m['l']);
	ans=min(ans,m['b']);
	ans=min(ans,m['a']/2);
	ans=min(ans,m['s']);
	// ans=min(ans,m['a']); 	
	ans=min(ans,m['r']);
	cout<<ans<<endl;
	return 0;
}