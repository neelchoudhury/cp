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
		int sum=0;
		 
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=i;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0; i<n; i++)
		{
			sort(a[i],a[i]+i+1);
		}
		for(int i=0; i<n;i++)
		{
			sum+=a[i][i];
		}
		cout<<sum<<endl;
	 	
	}
	return 0;
}
