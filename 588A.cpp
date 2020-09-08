#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N], p[N], b[N];

int main()
{
	ll n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i]>>p[i];
	 
	memset(b,0,sizeof(b));
	b[0]=p[0];
	for(int i=1; i<n; i++)
	{
		if(p[i]>=b[i-1])
		{
			b[i]=b[i-1];
		}
		else
		{
			b[i]=p[i];
		}
	}
/*	for(int i=0; i<n;i ++)
		cout<<b[i]<<" ";*/
	ll ans=0;
	for(int i=0; i<n; i++)
	{
		ans+=(a[i]*b[i]);
	}
	cout<<ans<<endl;
	return 0;
}
