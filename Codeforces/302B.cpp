#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[200010];
vector<ll> v;
vector<ll>::iterator ii;

int main()
{
	ll n,m,x,y;
	sc(n),sc(m);
	ll sum=0;
	for(ll i=0; i<n;i++)
	{
		sc(x),sc(y);
		sum+=x*y;
		v.pb(sum);
	}
	while(m--)
	{
		cin>>x;
		ii=lower_bound(v.begin(),v.end(),x);
		cout<<(ii-v.begin()+1)<<endl;
	}
	return 0;
}