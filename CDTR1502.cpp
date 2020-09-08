#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	ll a[m];
	ll b[n];
	for(int i=0; i<m; i++)
		cin>>a[i];
	for(int j=0; j<n; j++)
		cin>>b[j];
	ll c[m+n];
	for(int i=0; i<m+n;i++)
	{
		c[i]=0;
	} 
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			c[i+j]+=a[i]*b[j];
		}
	}
	int d[m+n];
	for(int i=m+n-1; i>=0;i--)
	{
		if(c[i]==0)
			d[i]=0;
		else
		{
			while(i>=0)
			{
				d[i]=1;
				i--;
			}
		}
	}
	for(int i=0; i<m+n; i++)
	{
		if(d[i]!=0)
		{
		
			if(i==0)
				cout<<c[0];
			
			else if(i==m+n-1)
				cout<<" + "<<c[i]<<"x^"<<i;
			else
				cout<<" + "<<c[i]<<"x^"<<i;
		}
	}
	cout<<endl;
	return 0;
}
