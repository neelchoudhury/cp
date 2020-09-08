#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	int a[1005][1005];
	int b[1005][1005];
	//scanf("%d", &t);
 
		scanf("%d", &n);
		for(int i=0;i<n; i++)
			for(int j=0; j<=i; j++)
				scanf("%d", &a[i][j]);
		for(int i=0;i<n; i++)
			for(int j=0; j<=i; j++)
				b[i][j]=0; 
			 
		//cout<<endl;
		b[0][0]=a[0][0];
		for(int i=1; i<n;i++)
			for(int j=0; j<=i; j++)
				b[i][j]=a[i][j]+(j!=0?b[i-1][j-1]: 0)+(j!=i?b[i-1][j]: 0);
		int max=b[0][0];
		 
		for(int i=1; i<n; i++)
		{
			for(int j=0; j<=i; j++)
				if(b[i][j]>max)
					max=b[i][j];
		}
		printf("%d\n", max>0?max:0);
	
	return 0;
}
