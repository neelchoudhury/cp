#include<bits/stdc++.h>
#define ll long long int
#define N 400010

using namespace std;

ll a[N];
ll b1[2][N],b2[2][N],c1[N],c2[N];



int main()
{
	ll n;
	scanf("%lld", &n);
	memset(a,0,sizeof(a));
	memset(b1,0,sizeof(b1));
	memset(b2,0,sizeof(b2));
	memset(c1,0,sizeof(c1));
	memset(c2,0,sizeof(c2));
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll max1=0,max2=0,ans=0;
	for(int i=0; i<n; i++)
		b1[0][i]=a[i];
	c1[0]=a[0];
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			b1[i%2][j]=b1[(i-1)%2][j]^a[j+i];
			c1[i+j]=max(c1[i+j],b1[i%2][j]);
		}
	}	
	for(int i=0; i<n; i++)
		cout<<c1[i]<<" ";
	cout<<endl;
	c2[0]=a[n-1];
	for(int i=n-1; i>=0; i--)
		b2[0][i]=a[i];
	for(int i=n-2; i>=0; i--)
	{
		for(int j=n-1; j>=0; j--)
		{
			b2[i%2][j]=b2[(i+1)%2][j]^a[j-i];
			c1[j-i]=max(c2[j-1],b2[i%2][j]);
		}
	}
	for(int i=0; i<n; i++)
		cout<<c2[i]<<" ";
	cout<<endl;
	//ll ans=0;
	for(int i=0; i<n; i++)
	{
		ans=max((c1[i]+c2[n-i-1]),ans);
	}
	printf("%lld\n", ans);
	return 0;
}
