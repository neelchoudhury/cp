#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	ll sum=2;
	ll f1=1;
	ll f2=2;
	for(ll f=3; f<4000000; )
	{
		
		f=f1+f2;
		cout<<f1<<" "<<f2<<" "<<f<<" ";
		f1=f2;
		f2=f;
		if(f%2==0)
		{
			sum+=f;
		}
		cout<<sum<<endl;
	}
	cout<<endl<<sum<<endl;
}
