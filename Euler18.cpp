#include<iostream>
using namespace std;

int main()
{
	int a[15][15],b[15][15];
	for(int i=0;i<15;++i)
	{
		for(int j=0;j<15;++j)
		{
			if(j<=i)
	        cin>>a[i][j];
	        else
	        a[i][j]=0;
	}}
	b[0][0]=a[0][0];
	for(int i=1;i<15;++i)
	{
		for(int j=0;j<=i;++j)
		{
			if(j==0)
			a[i][j]+=a[i-1][j];
			else
			a[i][j]+=(a[i-1][j]>a[i-1][j-1]?a[i-1][j]:a[i-1][j-1]);
		}
	}	
	int max=0;
	for(int j=0;j<15;++j)
	{
		if(a[14][j]>max)
		max=a[14][j];
	}
	cout<<max<<"   "<<endl;
	return 0;
	
}
