#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n,m,q;
	//cin>>n>>m>>q;
	scanf("%d %d %d", &n, &m, &q);
	int a[n+5][m+5];
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<m; j++)
			scanf("%d", &a[i][j]);
	}
	int s[n+5];
	int r[n+5];
	memset(s,0,sizeof(s));
	memset(r,0,sizeof(r));
	int f=1;
	for(int i=0; i<n; i++)
	{
		f=1;
		for(int j=0; j<m; j++)
		{
			if(a[i][j]==1 and f)
			{
				 
				while(a[i][j]==1)
				{
					s[i]++;r[i]=j;j++;
					
				}
				f=0;
			}
		}
		
	}
	/*for(int i=0;i<n; i++)
		cout<<s[i]<<" ";*/
	int x,y;
	while(q--)
	{
		scanf("%d %d", &x, &y);
		
		
			a[x-1][y-1]=(!a[x-1][y-1]);
			s[x-1]=0;
			int f=1;
			for(int j=0; j<m; j++)
			{
				if(a[x-1][j]==1 and f)
				{
				 
					while(a[x-1][j]==1)
					{
						s[x-1]++;r[x-1]=j;j++;
					
					}
					f=0;
				}
			}
 
		int max=s[0];
		for(int i=1;i<n; i++)
		{
			if(max<s[i])
				max=s[i];
		}
		printf("%d\n", max);
	}
	return 0;
}
