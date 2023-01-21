#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int a[21][21];
	for(int i=0;i<21; i++)
	{
		for(int j=0; j<21;j++)
			a[i][j]=0;
	}
	
	
	
	
	/*for(int i=0; i<21; i++)
	{
		for(int j=0;j<21; j++)
			cout<<a[i][j]<<"   ";
		cout<<endl;
	}*/
	
	
	
	
	for(int i=1; i<21; i++)
	{
		a[0][i]=1;
	}
	for(int i=1; i<21; i++)
	{
		for(int j=1; j<21; j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<"running"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"\n\n\n"<<endl;
	printf("%lld", a[2][2]);
	long long int s=0;
	for(int i=0;i<21; i++)
	{
		s+=a[i][20];
	}
	cout<<"\n\n\n"<<endl;
	printf("%lld", s);
	return 0;
}
