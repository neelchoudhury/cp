#include<iostream>
#define ll long long int
using namespace std;

int main()
{
	ll a[100][100],b[15][15];
	for(int i=0;i<100;++i)
	{
		for(int j=0;j<100;++j)
		{
			if(j<=i)
	        cin>>a[i][j];
	        else
	        a[i][j]=0;
	}}
	b[0][0]=a[0][0];
	for(int i=1;i<100;++i)
	{
		for(int j=0;j<=i;++j)
		{
			if(j==0)
			a[i][j]+=a[i-1][j];
			else
			a[i][j]+=(a[i-1][j]>a[i-1][j-1]?a[i-1][j]:a[i-1][j-1]);
		}
	}	
	ll max=0;
	for(int j=0;j<100;++j)
	{
		if(a[99][j]>max)
		max=a[99][j];
	}
	cout<<max<<"   "<<endl;
	return 0;
	
}
