#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;

int main()
{
	ll t,n;
	cin>>t;
	int x=1,j=1;
	while(1)
	{
		v.push_back(j);
		x++;
		j+=x;
		if(j>1000000000)
			break;
	}
	while(t--)
	{
		cin>>n;
		ll ans=upper_bound(v.begin(),v.end(),n);
		cout<<(low-v.begin())<<endl;
	}
	return 0;
}
