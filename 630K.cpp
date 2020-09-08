#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std; 

int main()
{
	ll n;
	cin>>n;
	ll ans=n/2 +n/3 + n/5 +n/7-n/6-n/10-n/14-n/15-n/21-n/35+n/30+n/42+n/105+n/70-n/210;
	ans=n-ans;
	cout<<ans<<endl;
	return 0;
}
