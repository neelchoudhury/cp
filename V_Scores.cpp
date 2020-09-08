#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define inf 1e18
#define MOD 1000000007
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	ll n;
	cin>>n;
	set<ll> s;
	set<ll>::iterator it;
	for(ll i=0;i<n;++i)
	{
		ll gg;
		cin>>gg;
		s.insert(gg);
	}
	it=s.end();
	it--;
	if(s.size()==1)
	{
		cout<<(*it)<<" "<<(*it)<<endl;
	}
	else
	{
		cout<<(*it)<<" ";
		it--;
		cout<<(*it)<<endl;
	}
	return 0;
} 

