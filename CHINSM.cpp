#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll b[1010][1010];

int main()
{
	ll n,k;
	scanf("%lld %lld", &n, &k);
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll ans=0;
	memset(b,-1,sizeof(b));
	for(int i=0; i<n; i++)
			b[0][i]=0;
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			int flag=0;
			for(int l=j; l<j+2; l++)
			{
				if(b[i-1][l]==1)
					{
						flag=1; break;
					}
			}
			//cout<<"i "<<i<<" j "<<j<<" flag "<<flag<<endl;
			if(flag==1)
				b[i][j]=1;
			else
			{
				if(a[j]%a[i+j]==k)
					b[i][j]=1;
				else
					b[i][j]=0;
			}
		}
	}
/*	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}*/
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
			if(b[i][j]==0)
				ans++;
	}
	printf("%lld\n", ans);
	return 0;
}
