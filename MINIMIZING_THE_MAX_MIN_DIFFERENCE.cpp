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
	ios;
	ll n;
	cin>>n;
	 for(ll i=0; i<n; i++)
	 	cin>>a[i];
	sort(a,a+n);
	ll ans=min(a[n-1]-a[1],a[n-2]-a[0]);
	cout<<ans<<endl;
	return 0;
}