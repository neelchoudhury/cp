#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		ll a[n];
		ll sum=0;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(ll i=n-1;i>=0;i-=2)
		{
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
}
