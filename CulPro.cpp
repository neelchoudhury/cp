#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	ll a[n],b[n];
	for(int i=0; i<n; i++)
		scanf("%lld%lld",&a[i], &b[i]);
	ll c[n];
	ll d,e;
	d=a[0];
	e=b[0];
	for(int i=1; i<n;i++)
	{
		if(d>a[0])
			d=a[0];
		if(e<b[0])
			e=b[0];
	}
	for(int i=0; i<n;i++)
		c[i]=0;
	for(int i=d; i<=e; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[j]>=i and b[j]<=i )
			{
			
				c[i]++;
				cout<<c[i]<<" "<<j<<endl;
			}
		}
		cout<<c[i]<<" ";
	}
	cout<<endl;
	sort(c,c+n);
	printf("%lld\n", c[n-1]);
	return 0;
	
}


