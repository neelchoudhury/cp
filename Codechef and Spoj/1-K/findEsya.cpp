#include<iostream>
#include<math.h>

using namespace std;

int prime(int x)
{
	for(int i=2;i<=sqrt(x); i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n=50;
	int m=228;
	int sum=0;
	for(int i=50;i>0;i--)
	{
		if(prime(i))
		{
			sum+=i;	
		}
		if(sum==m)
		{
			cout<<i<<endl;
			break;
		}
	}
}
