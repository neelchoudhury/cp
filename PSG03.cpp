#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n,q;
	cin>>n;
	ll a[n];
	for(int i=0;i<n; i++)
		cin>>a[i];
	ll s=0;
	ll b[n];
	for(int i=0;i<n; i++)
		b[i]=0;
	b[0]=a[0];
	for(int i=1; i<n; i++)
	{
		b[i]=a[i]+b[i-1];
	}
	cin>>q;
	ll m=0;
	ll l,r;
	while(q--)
	{
		cin>>l>>r;
		m=0;
		m=b[r-1]-b[l-2]; 
		printf("%lld\n", m);
	}
	return 0;
}
