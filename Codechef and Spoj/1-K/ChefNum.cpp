#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll sum=1;
	for(ll i=0; i<n;i++)
		cin>>a[i];
	for(ll i=0; i<n-1;i++)
	{
		if(a[i+1]<a[i])
		{
			//cout<< " enterd for i = "<<i<<endl; 
			sum+=1;
		}
	}
	cout<<sum;
}
