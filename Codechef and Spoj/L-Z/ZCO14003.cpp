#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;

int main()
{
	ll n,x;
	scanf("%lld", &n);
	ll ans=0;
	while(n--)
	{
		scanf("%lld", &x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	//reverse(v.begin(), v.end());
	for(ll i=0; i<v.size(); i++)
	{
		ans=max(ans, v[i]*((ll)v.size()-i));
	}
	printf("%lld\n", ans);
	return 0;
}
