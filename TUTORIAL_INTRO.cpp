#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1020];

int main()
{
	ll n,v;
	cin>>v>>n;
	memset(a,0,sizeof(a));
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
	{
		if(a[i]==v)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
