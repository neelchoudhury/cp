#include<iostream>
#include<cmath>
#define ll long double

using namespace std;

int main()
{
	int t;
	ll l,d,s,c;
	cin>>t;
	while(t--)
	{
		cin>>l>>d>>s>>c;
		ll sum=s;
		 
		sum=sum*pow((c+1),d-1);
		
		if(sum<l)
			cout<<"DEAD AND ROTTING"<<endl;
		else if(sum>=l)
			cout<<"ALIVE AND KICKING"<<endl;
	}
	cout<<endl;
}
