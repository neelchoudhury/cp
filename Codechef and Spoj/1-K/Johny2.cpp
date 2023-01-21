#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t,n,k;
 	cin>>t;
	
	while(t--)
	{
		cin>>n;
		ll a[n];
		for(int i=0; i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		ll b=a[k-1];
		sort(a,a+n);
		int i=0;
		for(;a[i]<=b;i++);
		cout<<i<<endl;
	}
	return 0;
}
