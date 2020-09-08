#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		ll b[n][n];
		for(ll i=0;i<n; i++)
			cin>>a[i];
		 
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
				b[i][j]=0;
		}
		for(ll i=0; i<n; i++)
		{
			 b[0][i]=a[i];
		}
		for(ll i=1; i<n; i++)
		{
			for(ll j=0;j<n-i;j++)
			{
				if(b[i-1][j]>b[i-1][j+1])
					b[i][j]=b[i-1][j+1];
				else
					b[i][j]=b[i-1][j];
					
			}
		}
		ll sum=0;
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n-i; j++)
			{
				//cout<<b[i][j]<<" ";
				sum+=b[i][j];
			}
			//cout<<endl;
		}
		
		//ll d=sum+s;
		printf("%lld\n", sum);
	}
	return 0;
} 
