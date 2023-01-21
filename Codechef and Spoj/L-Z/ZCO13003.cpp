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

vector<ll> v;
vector<ll>::iterator ii;

int main()
{
	ll n,k,x;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		if(v[i]<k)
		{
			ii=upper_bound(v.begin(),v.end(), k-1-v[i]);
			if(ii!=v.end())
			{
				ii--;
				ans+=(ii-v.begin()+1);
				if(ii-v.begin()>=i)
					ans-=1;
			}
		}
	}
	cout<<ans/2<<endl;
	return 0;
}