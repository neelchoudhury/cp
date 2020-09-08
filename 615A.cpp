#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[101];

int main()
{
	ll n,m,x,y;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	while(n--)
	{
		cin>>x;
		while(x--)
		{
			cin>>y;
			a[y-1]=1;
		}
	}
	for(ll i=0; i<m; i++)
	{
		if(a[i]==0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
