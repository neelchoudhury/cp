#include<iostream>
#define ll long double

using namespace std;

ll comb(ll x, ll y)
{
	ll res=1;
	for(ll i=x;i>(y);i--)
	{
		res*=i;
	}
	for(ll i=2; i<=(x-y);i++)
	{
		res/=i;
	}
	return res;
}

int main()
{
	int t;
	ll n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<comb(n-1,n-k)<<endl;
		
	}
}
