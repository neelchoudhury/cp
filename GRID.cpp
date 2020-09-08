#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main()
{
	int t;
	scanf("%d",&t);
	cin.ignore();
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char ch[n][n];
		bool a[n][n],b[n][n];
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				cin>>ch[i][j];
			}
		}
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				a[i][j]=0;
				b[i][j]=0;
			}
		}
		for(int i=n-1;i>=0;--i)
		{
			for(int j=n-1;ch[i][j]=='.'&&j>=0;--j)
			a[i][j]=1;
		}
		for(int j=0;j<n;++j)
		{
			for(int i=n-1;ch[i][j]=='.'&&i>=0;--i)
			b[i][j]=1;
		}
		ll count=0;
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(a[i][j]==1&&b[i][j]==1)
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
 
