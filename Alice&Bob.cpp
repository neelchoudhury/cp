#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2!=0)
			cout<<"BOB"<<endl;
		else
			cout<<"ALICE"<<endl;
	}
}


