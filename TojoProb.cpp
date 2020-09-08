#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t, n,m;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		float sum=0.0;
	 
	 
		if(m==1)
		{
			sum=n;
			printf("%.6f\n",sum);
			break;
		}
		else if(n==1)
		{
			sum=m;
			printf("%.6f\n",sum);
			break;
		}
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i==0  )
				{
					if(j!=0 )
						sum+=0.5;
				}
				 if(i==m-1)
				{
					if(j!=0 and j!=n-1)
						sum+=1.5;
				}
				if(j==0)
				{
					if(i!=0 )
						sum+=0.5;
				}
				if(j==n-1)
				{
					if(i!=0 and i!=m-1)
						sum+=1.5;
				}
				if(i<m-1 and j<n-1 and i>0 and j>0)
					sum+=1;
				//cout<<i<<" "<<j<<" "<<sum<<endl;
				
			}
		}
		sum+=2;
		printf("%.6f\n",sum);
	}
}
