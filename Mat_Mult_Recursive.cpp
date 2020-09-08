#include<iostream>

using namespace std;

void f(int a[][2], int b[][2], int c[][2], int m,int n,int r, int i, int j, int k, int s)
{
	if(i==m-1)
		return;
	else if(k==r-1)
	{
		k=0;j=0;i++;
	}
	else if(j==n-1)
	{
		j=0;i++;k++;c[i][k]=s;s=0;
	}
	else
	{
		s+=a[i][j]*b[j][k];
		f(a,b,c,m,n,r,i,j,k,s);
	}
}

int main()
{
	int a[20][20],b[20][20],c[20][20];
	int m,n,p;
	cout<<"Enter no of rows in 1st matrix-";
	cin>>m;
	cout<<"Enter no of column in 1st matrix i.e. no of rows in 2nd matrix-";
	cin>>n;
	cout<<"Enter no.of column in 2nd matrix-";
	cin>>p;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<"a"<<i+1<<j+1<<"-";
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;++j)
	{
		for(int k=0;k<p;k++)
		{
			cout<<"b"<<j+1<<k+1<<"-";
			cin>>b[j][k];
		}
	}
	
	f(a,b,c,m,n,r,i,j,k,0);
	
	cout<<"Multiplication of matrices is -"<<endl;
	for(int i=0;i<m;++i)
	{
		for(int k=0;k<p;++k)
		cout<<c[i][k]<<"   ";
		cout<<endl;
	}
	return 0;
}
