#include<iostream>
#define lli long long int
#deine num 5000

using namespace std;

int main()
{
	int i,j,k;
	lli n;
	cin>>n;
	//scanf("%lli", &n);
	lli a[n][2];
	for( i=0; i<n;++i)
	{
		cin>>a[i][0]>>a[i][1];
		//scanf("%lli%lli", &a[i][0],&a[i][1]);
	}
	int q;
	cin>>q;
	//scanf("%d", &q);
	int sum[q];
	for(i=0; i<q;++i)
	{
		sum[i]=0;
	}
	lli arr[q][num];
	int flag[q][n];
	for(i=0; i<q; ++i)
	{
		cin>>arr[i][0];
		//scanf("%d",&arr[i][0]);
		for( j=1; j<=arr[i][0];++j)
		{
			cin>>arr[i][j];
			//scanf("%lli", &arr[i][j]);
		}
		int flag[q][n];
		for(k=0;k<q;k++)
		{
			for(j=0;j<n; j++)
			{
				flag[k][j]=0;
			}
		}
		
		
		for(k=1;(k<=arr[i][0]);k++)
		{
			for(j=0;j<n; ++j)
			{
				if(arr[i][k]>=a[j][0]&&arr[i][k]<=a[j][1]&&!flag[i][j])
				{
					sum[i]+=1;
					flag[i][j]=1;
					
				}	
			}
		}
	}

	for(i=0; i<q;++i)
	{
	
			cout<<sum[i]<<endl;
			//printf("%lli\n",sum[i]);
				
	}
	return 0;
}
