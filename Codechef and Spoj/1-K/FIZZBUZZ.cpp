#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1; i<=n; i++)
		{
			if(i%5 and i%3)
			{
				cout<<i<<endl;
			}
			else if(i%5)
			{
				cout<<"Fizz"<<endl;
			}
			else if(i%3)
			{
				cout<<"Buzz"<<endl;
			}
			else
			{
				cout<<"FizzBuzz"<<endl;
			}
		}
	}
	return 0;
}
