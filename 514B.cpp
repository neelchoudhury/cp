#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int a[n][2];
	for(int  i=0; i<n; i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	double m[n];
	for(int i=0; i<n; i++)
	{
		if(a[i][0]==x)
			m[i]=99999999;
		else
			m[i]=(a[i][1]-y)/(a[i][0]-x);
	}
	/*for(int  i=0; i<n; i++)
	{
		cout<<m[i]<<" ";
	}
	cout<<endl;*/
	sort(m,m+n);
	/*	for(int  i=0; i<n; i++)
	{
		cout<<m[i]<<" ";
	}
	cout<<endl;*/
	int cnt=1;
	for(int i=1; i<n; i++)
	{
		if(m[i]!=m[i-1])
		{
			cnt++;
		//	cout<<"Updated "<<i<<" "<<a[i]<<" "<<a[i-1]<<endl;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
