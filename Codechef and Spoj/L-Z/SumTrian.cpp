#include<iostream>

using namespace std;

int f(int n,int* a, int i, int j)
{
	if(i==n-1)
		return *(a+n*i+j) ;
	else
	{
		int sum1=0;
		int sum2=0;
		sum1=*(a+n*i+j)+ f(n,a, i+1, j+1);
		sum2=*(a+n*i+j)+ f(n,a, i+1, j);
		int max=sum1>sum2?sum1:sum2;
		return max;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=i;j++)
			{
				cin>>a[i][j];
			}
		}
		int sum=f(n,(int *)a,0,0);
		cout<<sum<<endl;
	}
}
