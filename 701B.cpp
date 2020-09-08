#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll,ll> m1,m2;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n,m,x,y;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		m1.insert(pair<ll,ll>(x,x));
		m2.insert(pair<ll,ll>(y,y));
		cout<<((n-m1.size())*(n-m2.size()))<<" ";
	}
	cout<<endl;
	return 0;
}
