#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll i=0;
	ll x=5;
	while(n>x)
	{
		i++;
		x+=5*(ll)pow(2,i);
	}
	ll y;
	 
		y=(ll)pow(2,i);
	 
	//cout<<y<<endl;
	if(n>(x-y))
		cout<<"Howard"<<endl;
	else if(n>(x-2*y))
		cout<<"Rajesh"<<endl;
	else if(n>(x-3*y))
		cout<<"Penny"<<endl;
	else if(n>(x-4*y))
		cout<<"Leonard"<<endl;
	else if(n>(x-5*y))
		cout<<"Sheldon"<<endl;
	return 0;
}
