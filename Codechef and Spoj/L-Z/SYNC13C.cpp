#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,c1,c2;
	cin>>t;
	while(t--)
	{
		cin>>c1>>c2;
		if(c1==1)
		{
			if(c2%2)
				cout<<"Ramesh"<<endl;
			else
				cout<<"Suresh"<<endl;
		}
		else if(c2==1)
		{
			if(c1%2)
				cout<<"Ramesh"<<endl;
			else
				cout<<"Suresh"<<endl;
		}
		else 
		{
			if(c1%2==0 or c2%2==0)
				cout<<"Suresh"<<endl;
			else
			{
				cout<<"Ramesh"<<endl;
			}
		}
	}
	return 0;
}
