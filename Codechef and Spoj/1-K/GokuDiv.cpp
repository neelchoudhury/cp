#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==2)
			cout<<"NO"<<endl;
		else
		{
		
		if(n%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
