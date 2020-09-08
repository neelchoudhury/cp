#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	float a[n][n], b[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)	
				b[i][j]=1.0;
			else
				b[i][j]=0.0;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(i%2==0)
		{
			for(int j=0; j<n; j++)
			{
				if(i==j)
				{
					for(int k=0; k<n; k++)
						{
					
						b[k][j]=b[k][j]/a[k][j];
					}
				}
				else if(j<i)
				{
					for(int k=0; k<n; k++)
					{
						b[k][j]=b[k][j]-b[k][j+1]*a[k][j]/a[k][j+1];
					}
				}
				else if(j>i)
				{
					for(int k=0; k<n; k++)
					{
						b[k][j]=b[k][j]-b[k][i]*a[k][j]/a[k][i];
					}
				}
			}
		}
		else
		{
			for(int j=n-1; j>=0; j--)
			{
				if(i==j)
				{
					for(int k=0; k<n; k++)
					{
					
						b[k][j]=b[k][j]/a[k][j];
						/*if(b[k][j]==0)
						{
						
							cout<<"NO inverse:"<<endl;
							return 0;
						}*/
					}
				}
				else if(j>i)
				{
					for(int k=0; k<n; k++)
					{
						b[k][j]=b[k][j]-b[k][j-1]*a[k][j]/a[k][j-1];
					}
				}
				else if(j<i)
				{
					for(int k=0; k<n; k++)
					{
						b[k][j]=b[k][j]-b[k][i]*a[k][j]/a[k][i];
					}
				}
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
