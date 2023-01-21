#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;
ll aa[100010];

int main()
{
	ll n,a,x;
	ios_base::sync_with_stdio(false);
	cin>>n>>a;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	sort(v.begin(), v.end()); 
	ll q1=min(abs(a-v[0]), abs(a-v[n-2]))+abs(v[0]-v[n-2]);
	ll q2=min(abs(a-v[1]), abs(a-v[n-1]))+abs(v[1]-v[n-1]);
	ll ans=min(q1,q2);
 	
	cout<<ans<<endl;
	return 0;
}
