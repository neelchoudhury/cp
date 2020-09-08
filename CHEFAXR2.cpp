#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		cin>>n;
		ll a[n][n];
		ll val;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				scanf("%lld", &a[i][j]) ;
		}
		ll ans=a[0][0];
		int cnt=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				
				for(int k=i;k<n;k++ )
				{
					for(int l=j; l<n; l++)
					{
						val=a[i][j];
						for(int m=i; m<=k; m++)
						{
	
							for(int n=j; n<=l; n++)
							{
								if(m!=i or n!=j)
									val=val^a[m][n];
							}
						}
						ans=max(ans,val);	
					}
					
				}
				cnt++;
				
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
