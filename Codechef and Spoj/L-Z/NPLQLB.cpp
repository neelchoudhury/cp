#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll n,ma=0, mi=100010,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		ma=max(ma,x);
		mi=min(mi,x);
		cout<<ma-mi<<endl;
		
	}
	return 0;
}