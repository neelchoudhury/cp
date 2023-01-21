#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n[t];
	for(int i=0; i<t; ++i)
	{
		cin>>n[i];
	}
	cout<<endl;
	for(int i=0; i<t;++i)
	{
		cout<<n[i]-n[i]%2<<endl;
	}
	return 0;
}
