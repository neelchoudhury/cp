#include<bits/stdc++.h>
#define ll long long int
#define M 1000003

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	ll n,l,r;
	int a[10000][10000];
 
	for(int i=0;i<10000; i++)
	{
		for(int j=0; j<10000; j++)
		{
			if(j==0 or i==0)
				a[i][j]=1;
				
			else
				a[i][j]=(a[i-1][j]%M+a[i][j-1]%M)%M;
		}
	}
	for(int i=0; i<10; i++)
	{
		for(int j=0;j<10; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &l, &r);
		ll x=r-l+1;
		ll a[x];
		ll s=0;
	 	int ma=max(x,n);
	 	int mi=min(x,n);
	 	//for(int i=1;i<=)
		printf("%lld\n", s);
	}
	return 0;
}

