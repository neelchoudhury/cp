#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t,n;
	int a[55];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int c0=0,sum=0;
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
			if(a[i]==0)
				c0++;
			sum+=a[i];
		}
		if(sum!=n or c0>=n-1)
		{
			cout<<-1<<endl;
		}
		else
		{
			int b[n],j=0;
			for(int i=0; i<n;)
			{
				while(a[i]!=0)
				{
					b[j++]=i+1;
					a[i]--;	
				}
				if(a[i]==0)
					i++;
				
			}
			/*for(int i=0;i<n; i++)
				cout<<b[i]<< " ";
			cout<<endl;*/
			int x;
		 	for(int i=0;i<n-1; i++)
		 	{
		 		for(int j=i+1; j<n; j++)
		 		{
		 			if((b[i]==i+1 ) )
		 			{	
		 				//cout<<" swap "<<i<<" "<<j<<endl;
		 				x=b[i];
		 				b[i]=b[j];
		 				b[j]=x;
		 					/*for(int i=0; i<n; i++)
			
				cout<<b[i]<<" ";*/
		 			}
		 		}
		 	}
			 
			for(int i=0; i<n; i++)	
				printf("%d ", b[i]);
			cout<<endl;
		}
		
	}
	return 0;
}
