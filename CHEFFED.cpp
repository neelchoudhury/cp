#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll sum(ll n)
{
	ll ans=0;
	while(n>0)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll ans=0;
	for(ll i=n; i>=n-90; i--)
	{
		if(i+sum(i)+sum(sum(i))==n)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
