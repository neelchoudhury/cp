#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

	ll n;
	cin>>n;
	ll o=(n+1)/2;
	ll e=n-o;
	ll ans=e*o*(o-1)/2+ max((ll)0, e*(e-1)*(e-2)/(ll)6);
	cout<<ans<<endl;
	return 0;
}
