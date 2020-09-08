#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	ll a[75];
	memset(a,0,sizeof(a));
	a[0]=0;a[1]=1;
	for(int i=2; i<=71; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
