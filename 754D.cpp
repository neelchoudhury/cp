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

vector<pair<ll,ll> > v;

set<ll> s1,s2;
set<ll>::iterator ii;

int main()
{
	ios;
	ll n,k,l,r;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>l>>r;
		v.pb({l,r});
	}
	sort(v.begin(),v.end());
	ll ans=0;
	l=1,r=k;
	for(ll i=0; i<k; i++)
	{
		s1.insert(v[i].ff);
		s2.insert(v[i].ss);
	}
	for(ll i=k; i<n; i++)
	{
		ii=s1.end();
		ii--;
		if(*s2.begin()-*ii>ans)
		{
			ans=max(ans,*s2.begin()-*ii+1);
			l=i-k+1;
			r=i;
		}
		s1.erase(v[i-k].ff);
		s2.erase(v[i-k].ss);
		s1.insert(v[i].ff);
		s2.insert(v[i].ss);
	}
	cout<<ans<<endl;
	cout<<l<<" "<<r<<endl;
	return 0;
}