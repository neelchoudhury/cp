#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	cout<<(n*n+1)/2<<endl;
	for(ll i=0;  i<n; i++)
	{
		ll j;
		if(i%2==0)
		{
			 j=0;
		}
		else
			j=1;
		for(ll k=0; k<n; k++)
		{
			if((k-j)%2==0)
				cout<<"C";
			else
				cout<<".";
		}
		cout<<endl;
	}
	return 0;
}
