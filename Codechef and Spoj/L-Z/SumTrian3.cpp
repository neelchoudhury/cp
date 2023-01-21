#include<iostream>
#include<algorithm>

using namespace std;

  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		int sum[n][n];
		for(int i=0; i<n;i++)
		{
			for(int j=0; j<n ;j++)
			{
				sum[i][j]=0;

			}
		}
		/*		for(int i=0; i<n;i++)
		{
			for(int j=0; j<n ;j++)
			{
				cout<<sum[i][j]<<" ";

			}
			cout<<endl;
		}*/
	 
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=i;j++)
			{
				cin>>a[i][j];
		 
			}
		}
		/*		for(int i=0; i<n;i++)
		{
			for(int j=0; j<n ;j++)
			{
				cout<<sum[i][j]<<" ";

			}
			cout<<endl;
		}*/
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=i;j++)
			{
			 
				if(i==0 and j==0)
				{
					sum[i][j]=a[i][j];
					 
				}
				else if(i>0 and j==0)
				{
					sum[i][0]=sum[i-1][0]+a[i][0];
				 
				}
				else if(i>0 and j==i)
				{
					sum[i][j]=sum[i-1][j-1]+a[i][j];
				}
				else
				{
					sum[i][j]=(sum[i-1][j]>sum[i-1][j-1]?sum[i-1][j]+a[i][j]:sum[i-1][j-1]+a[i][j]);
				 
				}
			 
			}
		}
		/*	for(int i=0; i<n;i++)
		{
			for(int j=0; j<n ;j++)
			{
				cout<<sum[i][j]<<" ";

			}
			cout<<endl;
		}*/
		
	 	sort(sum[n-1], sum[n-1]+n);
		cout<<sum[n-1][n-1]<<endl;
	}
	return 0;
}
