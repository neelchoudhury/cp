#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[500][500];

int main()
{
	ll n,k;
	cin>>n>>k;
	ll ans=0;
	memset(a,0,sizeof(a));
	if(k==1)
	{
		for(int i=1; i<=n*n; i+=n)
			ans+=i;
		for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
					a[i][j]=(i)*n+j+1;
			}
	}
	else
	{
		int x=1;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<k-1;j++)
			{
				a[i][j]=x;
				x+=1;
			}
			
		}
		for(int i=0; i<n; i++)
		{
			for(int j=k-1; j<n; j++)
			{
				a[i][j]=x;
				x+=1;
			}
		}
		for(int i=0; i<n; i++)
		{
			ans+=a[i][k-1];
		}
	}
	cout<<ans<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
