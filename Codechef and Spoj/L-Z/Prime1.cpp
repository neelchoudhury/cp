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
		return true;
	}
	
}

void findprimes(ll m,ll n)
{
	for(int i=m; i<=n; i++)
	{
		if(ifprime(i))
		{
			cout<<i<<endl;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	ll m,n;
	while(t--)	
	{
		cin>>m>>n;
		findprimes(m,n);
		cout<<endl;
	}
	return 0;
}
