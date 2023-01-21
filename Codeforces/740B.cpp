#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[110];
ll b[110];

int main()
{
	ll m,n;
	cin>>n>>m;
	ll x,y;
	mem(a);
	for(ll i=0; i<n; i++)
		cin>>a[i];
	mem(b);
	for(ll i=0; i<m; i++)
	{
		cin>>x>>y;
		ll cnt=0;
		for(ll j=x-1; j<=y-1; j++)
		{
			cnt+=a[j];
		}
		b[i]=cnt;
	}
	sort(b,b+m);
	ll ans=0;
	for(ll i=0; i<m; i++)
	{
		if(b[i]>0)
			ans+=b[i];
	}
	cout<<ans<<endl;
	return 0;
}