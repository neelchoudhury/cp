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

ll a[N];

int main()
{
	ios;
	ll n,sm=INT_MAX;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		sm=min(sm,a[i]);
	}
	ll gap=0,ind=0,cnt=0;
	for(ll i=0; i<n; i++)
	{
		if(a[i]==sm)
		{
			ind=i;
			break;
		}
	}
	ll j=0;
	for(ll i=ind+1; j<n;i=(i+1)%n,j++)
	{
		if(a[i%n]!=sm)
		{
			cnt++;
		}
		else
		{ 
			gap=max(gap,cnt);
			cnt=0;
		}
	}
	gap=max(gap,cnt);
	ll ans=sm*n+gap;
	cout<<ans<<endl;
}