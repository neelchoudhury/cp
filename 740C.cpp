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

ll a[100010];

int main()
{
	ll n,m,x,y;
	cin>>n>>m;
	mem(a) ;
	ll ans=INT_MAX,ind=0;
	for(ll i=0; i<m; i++)
	{
		cin>>x>>y;
		if(y-x+1<ans)
		{
			ans=y-x+1;
			ind=x-1;
		}
	}
	cout<<ans<<endl;
	for(ll i=0; i<n; i++)
	{
		cout<<i%ans<<" " ;
	}
	cout<<endl;
	return 0;
}