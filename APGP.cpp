#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	ll a1=0,a2=0,a3=0;
	cin>>a1>>a2>>a3;
	do
	{
		
		if((float)a2/a1==(float)a3/a2)
		{
			cout<<"GP ";
			cout<<a3*a3/a2<<endl;
		}
		else if((a2-a1)==(a3-a2))
		{
			cout<<"AP ";
			cout<<a3+a3-a2<<endl;
		}
		cin>>a1>>a2>>a3;
	}while(a1!=0 and a2!=0 and a3!=0);
	return 0;
}
