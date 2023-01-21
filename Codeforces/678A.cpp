#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll ans=n-n%k+k;
	cout<<ans<<endl;
	return 0;
}
