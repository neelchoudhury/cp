#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[55];

int main()
{
	ll t,n,x;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(ll i=0; i<n; i++)
		{
			cin>>x;
		}
		if(n==1 and s=="Dee" and x%2==0)
		{
			cout<<"Dee"<<endl;
		}
		else
		{
			cout<<"Dum"<<endl;
		}
	}
	return 0;
}
