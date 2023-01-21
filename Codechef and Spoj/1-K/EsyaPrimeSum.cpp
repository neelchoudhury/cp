#include<iostream>
#include<math.h>
#define esya 29
#define ll long long int

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
	int t,n;
	ll sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;	
		for(int i=esya; i<=n;i++)
		{
			if(prime(i))
			{
				sum+=i;
			}	
		}
		cout<<sum<<endl;
	}
}
