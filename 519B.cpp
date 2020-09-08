#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	ll a[n];
	ll b[n-1];
	ll c[n-2];
	for(int i=0;i<n; i++)
		cin>>a[i];
	for(int i=0; i<n-1; i++)
		cin>>b[i];
	for(int i=0; i<n-2; i++)
		cin>>c[i];
	sort(a,a+n);
	sort(b,b+n-1);
	sort(c,c+n-2);
	int j,k;
	for(int i=0; i<n;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<a[i]<<endl;
			break;
		}
		if(i==n-1)
			cout<<a[i]<<endl;
	}
	for(int i=0; i<n-1;i++)
	{
		if(b[i]!=c[i])
		{
			cout<<b[i]<<endl;
			break;
		}
		if(i==n-2)
			cout<<b[i]<<endl;
	}
	return 0;
}
