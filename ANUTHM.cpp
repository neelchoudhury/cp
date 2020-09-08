#include<bits/stdc++.h>
#define ld long double

ld a[1005][1005];

using namespace std;

int main()
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		
		memset(a,0,sizeof(a));
		a[0][0]=1.000;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i!=m-1 and j!=n-1)
				{
					a[i+1][j]+=(a[i][j]/2);
					a[i][j+1]+=(a[i][j]/2);
				}
				else if(i==m-1)
					a[i][j+1]+=a[i][j];
				else if(j==n-1)
					a[i+1][j]+=a[i][j];
			}
		}
		ld s=0;
		for(int i=0;i<m; i++)
		{
			for(int j=0; j<n; j++)
				 cout<<a[i][j]<<" ",s+=a[i][j];
			cout<<endl;
			 
		}
		cout<<s<<endl;
	}
	return 0;
}
