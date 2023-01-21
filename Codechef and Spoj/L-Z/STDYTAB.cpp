#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000000
 
using namespace std;
 
int main()
{
	int t,n,m;
	ll b[2][2005];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		ll s=0,t1=0;
		
		memset(b,0,sizeof(b));
		for(int i=0; i<=m; i++)
			b[0][i]=1;
		for(int i=1;i<m; i++)
		{
			for(int j=1; j<=m; j++)
				b[0][j]=(b[0][j-1] +b[0][j])%MOD;
		}
		 
		for(int i=0;i<=m; i++ )
			b[1][i]=b[0][i];
		s=0;
		for(int i=1; i<n; i++)
		{
			t1=0;
			for(int j=m; j>=0; j--)
			{
				t1=(t1 + b[1][j])%MOD;
				b[1][j]=(b[0][j]*t1)%MOD;
			}
		}
	 
		s=0;
		for(int j=m;j>=0; j--)
		{
		 	s=(s+b[1][j])%MOD;
		}
		printf("%lld\n", s);
	}
	return 0;
}  
