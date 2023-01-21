#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		cout<<((x>y)?(x*x):(y*y))<<endl;
	}
	return 0;
}
