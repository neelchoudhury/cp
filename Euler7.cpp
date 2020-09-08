#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

bool ifprime(ll n)
{
	
	if(n==1)
	return false;
	else
	{
		for(int i=2; i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
				break;
			}
		}
		cout<<"Prime: "<<n;
		return true;
	}
	
}

int main()
{
	
	for(int j=2,i=1; i<=10001;j++ )
	{
		if(ifprime(j))
		{
			
			cout<<" "<<i<<endl;
			i+=1;
		}
	}
	return 0;

 
}
