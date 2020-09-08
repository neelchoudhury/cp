#include<iostream>
#include<algorithm>
#define ll unsigned long long int

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(ll i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<"Done sorting"<<endl;
		ll max=0;
		for(int i=0; i<n-1; i++)
		{
			cout<<"Looping"<<endl;
			cout<<(a[n-1]&a[i])<<" "<<a[i]<<endl;
			if((a[n-1]&a[i])>max)
				max=a[n-1]&a[i];
			cout<<max<<endl;
		}
		cout<<max<<endl;
	}
	return 0;
}
