#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	ll sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=n*(n+1)/2;
		cout<<sum<<endl;
	}
	return 0;
}

