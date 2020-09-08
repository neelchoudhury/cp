#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;
int main()
{
	 
	ll t;
	cin>>t;
	ll a ;
	while(t--)
	{
		cin>>a ;
		ll sum=0;
		for(int i=5; (a /i)>0;i*=5 )
		{
			sum+=a /i;
			
		}
		cout<<sum<<endl;
	 
	}
	return 0;
}
