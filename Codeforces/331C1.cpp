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

ll find_large(ll n)
{
	ll ans = 0;
	while(n > 0)
	{
		ans = max(ans, n%10);
		n /= 10;
	}
	return ans;
}

int main()
{
	ll n;
	cin>>n;
	ll ans = 0;
	while(n > 0)
	{
		n -= find_large(n);
		ans ++;
	}
	cout<<ans<<endl;
	return 0;
}