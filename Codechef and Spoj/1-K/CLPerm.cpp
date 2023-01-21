#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll sum=0;
		sum=n*(n+1)/2;
		if(k==0)
		{
			if(sum%2==0)
			{
				cout<<"Chef"<<endl;
			}
			else
			{
				cout<<"Mom"<<endl;
			}
		}
	}
	return 0;
}
