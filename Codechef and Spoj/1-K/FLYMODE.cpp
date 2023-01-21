#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
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
 
map<ll,ll > m;
map<ll,ll>::iterator ii;

ll a[100010];
vector<pair<ll,ll> >v;

bool comp(pair <ll,ll > p1, pair<ll,ll > p2)
{
	if(p1.ff==p2.ff)
	{
		return p1.ss>=p2.ss;
	}
	else
		return p1.ff<=p2.ff;
}
 
int main()
{
	ll n,lo,hi;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll i=1; 
	while(i<n)
	{
		if(a[i]>a[i-1])
		{
			lo=i-1;
			while(i<n and a[i]>a[i-1])
			{
				i++;
			}
			i--;
			v.pb({a[lo],+1});
			v.pb({a[i],-1});
		}
		else
		{
			lo=i-1;
			while(i<n and a[i]<a[i-1])
			{
				i++;
			}
			i--;
			v.pb({a[lo],-1});
			v.pb({a[i],+1});
		}
		i++; 
	}
	sort(v.begin(), v.end(),comp);
	// for(ll i=0;i<v.size(); i++)
	// 	cout<<v[i].ff<<" "<<v[i].ss<<endl;
	ll ans=0;
	ll cnt=0;
	for(int i=0;i<v.size();i++)
	{ 
		if(cnt>ans)
		{
			ans=cnt;
		}
		cnt+=v[i].ss;
		// cout<<ans<<" "<<i<<endl;
	}
	cout<<ans<<endl;
	return 0;
} 