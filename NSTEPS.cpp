#include<iostream>

using namespace std;

int main()
{
	int n,x,y;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x==y)
		{
			
			if(x%2==0)
				cout<<(x+y)<<endl;
			else
				cout<<(x+y)-1<<endl;
		}
		else if(x-y==2)
		{
			if(x%2==1)
				cout<<(x+y-1)<<endl;
			else
				cout<<x+y<<endl;
		}
		else
		{
			cout<<"No Number"<<endl;
		}
	}
	return 0;
}
