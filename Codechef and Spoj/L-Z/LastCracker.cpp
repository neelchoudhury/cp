#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,a,m;
	while(t--)
	{
		cin>>n>>a>>m;
		if(a+m<=n)
		{
			cout<<a+m<<endl;
		}
		else if(a+m>n)
		{
			int x=m+n;
			while(x>=n)
			{
				(x)-=n;
			}
			cout<<x<<endl;
		}
	}
	return 0;
}
