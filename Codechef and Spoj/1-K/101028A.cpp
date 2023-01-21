#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,r,a,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		sum=1500;
		while(n--)
		{
			cin>>a;
			sum+=a;
		}
		if(sum==r)
		{
			cout<<"Correct"<<endl;
		}
		else
			cout<<"Bug"<<endl;
	}
	return 0;
}
