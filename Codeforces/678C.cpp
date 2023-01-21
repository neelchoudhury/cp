#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,a,b,p,q;
	cin>>n>>a>>b>>p>>q;
	ll v1,v2,v3;
	v3=n/(a*b);
	v1=n/a-v3,v2=n/b-v3;
	ll ans=v1*p + v2*q + max(p,q)*v3;
	cout<<ans<<endl;
	return 0;
}
