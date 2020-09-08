#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++)
		cin>>a[i];
//	sort(a,a+n);
	int b[4];
	memset(b,0,sizeof(b));
	for(int i=0;i<n; i++)
		b[a[i]-1]++;
	int ans=0;
	int sum=0;
	ans+=b[1]/2;
	b[1]=b[1]%2;
	ans+=b[3];
	int x=0;
	x=min(b[0], b[2]);
	ans+=x;
	b[0]-=x;
	b[2]-=x;
	if(b[0]!=0)
	{
		if(b[1]!=0)
		{
			x=(b[0]+2)/4;
			ans+=x;
			if((b[0]+2)%4!=0)
				ans++;
		}
		else
		{
			x=(b[0])/4;
			ans+=x;
			if(b[0]%4!=0)
				ans++;
		}
	}
	else
	{
		if(b[1]!=0)
			ans++;
		ans+=(b[2]);
	}
	cout<<ans<<endl; 
	return 0;
}
