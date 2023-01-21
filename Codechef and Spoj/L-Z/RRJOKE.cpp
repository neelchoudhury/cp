#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int r=1;
		int x,y;
		for(int i=0; i<n; i++)
			cin>>x>>y;
		for(int i=2; i<=n; i++)
			r=r^i;
		cout<<r<<endl;
	}
	return 0;
}
