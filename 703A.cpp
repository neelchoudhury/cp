#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio();
	ll n,m,c;
	ll am=0,cm=0;
	cin>>n;
	while(n--)
	{
		cin>>m>>c;
		am+=(m>c);
		cm+=(c>m);
	}
	if(am>cm)
	{
		cout<<"Mishka"<<endl;
	}
	else if(am<cm)
	{
		cout<<"Chris"<<endl;
	}
	else
	{
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}