#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[12][12];

int main()
{
	ll n,t;
	cin>>n>>t;
	ll ans=0;
	memset(a,0,sizeof(a));
	ll v=(ll)pow(2,n);
	ll s=t*v;
	a[1][1]=s;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(a[i][j]>v)
			{
				ll s=a[i][j]-v;
				a[i+1][j]+=s/2;
				a[i+1][j+1]+=s/2;
			}
		}
	}
	//ll ans=0;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(a[i][j]>=v)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
