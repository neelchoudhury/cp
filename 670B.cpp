#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
vector<ll> b;

int main()
{
	ll n,k;
	cin>>n>>k;
	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
	b.push_back(0);
	for(ll i=1; i<=n; i++)
		b.push_back(b[i-1]+i);
	for(ll i=1; i<=n; i++)
		cin>>a[i];
	vector<ll>::iterator ii;
	ii=lower_bound(b.begin()+1,b.end(), k);
	if(k==b[ii-b.begin()-1])
		cout<<a[ii-b.begin()-1]<<endl;
	else
		cout<<a[k-b[ii-b.begin()-1]]<<endl;
	b.clear();
	return 0;
}
