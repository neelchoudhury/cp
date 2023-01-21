#include<iostream>
#define ll long long int
#define CONS 1000000
using namespace std;

int main()
{
	ll t;
	ll k;
	char a[CONS];
	//cout<<"The first time"<<a<<endl;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cout<<a<<endl;
	 	ll len=strlen(a);
	 	if(len%2==0)
	 	{
	 		
	 	}
	 	else if(len%2==1)
	 	{
	 		for(int i=0; i<;i++)
	 		{
	 			if(a[len/2]>a[len/2-1])
	 			{
	 				a[len/2-1]=a[len/2];
	 			}
	 		}
	 	}
	}
}
