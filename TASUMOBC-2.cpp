#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007

using namespace std;

void ncr(ll a[][301])
{
	int n=300;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n+1; j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j==0)
				a[i][j]=1;
			else
			{
				a[i][j]=(i-j+1)*a[i][j-1]/(j);
				//a[i][j]%=3;
			}
		}
	}
}

int main()
{
	ll t,n;
	ll a[300][301];
	ncr(a);
	/*	for(int i=0; i<50; i++)
	{
		for(int j=0; j<51; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll s=0;
		for(int j=0; j<n+1;j++)
		{
			s+=(a[n][j]%3%M);
		}
		printf("%lld\n",s);
	}
	return 0;
}
