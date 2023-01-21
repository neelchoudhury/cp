#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	ll sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		sum=n;
		sum+=((n*(n+1))/2);
		cout<<sum<<endl;
	}
}
