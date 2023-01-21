#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;
	do
	{
		for(int i=0; i<=15; i++)
		{
			int p;
			p=pow(2,i);
			if(p<=n)
				continue;
			else
			{
				
				cout<<i-1<<endl;
				break;
			}
		}
		cin>>n;
	
	}while(n!=0);
	return 0;
}
