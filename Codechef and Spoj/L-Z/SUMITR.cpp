#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n][n],b[n][n];
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(j<=i)
			        cin>>a[i][j];
		        else
	    	    a[i][j]=0;
			}
		}
		b[0][0]=a[0][0];
		for(int i=1;i<n;++i)
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
		for(int j=0;j<n;++j)
		{
			if(a[n-1][j]>max)
			max=a[n-1][j];
		}
		cout<<max<<"   "<<endl;
	}
	return 0;
}


