#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[100010];

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans = 0;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
			ans =  max(ans, a[i]);
		}
		ans = n - ans;
		cout<<ans<<endl;
	}
	return 0;
}