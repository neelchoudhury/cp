#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll sum=0;
		ll a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<=c)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}
