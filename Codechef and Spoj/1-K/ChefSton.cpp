#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	ll k;
	while(t--)
	{
		cin>>n>>k;
		ll a[n],b[n],c[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
			c[i]=(k/a[i])*b[i];
		}
		sort(c,c+n);
		cout<<c[n-1]<<endl;
	}
	return 0;
	
}
