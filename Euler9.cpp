#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	for(int i=1; i<=1000; i++)
	{
		for(int j=0; j<=1000; j++)
		{
			if((i+j+sqrt(i*i + j*j))==1000)
			{
				cout<<i<<" "<<j<<" "<<sqrt(i*i + j*j)<<" "<<i*j*sqrt(i*i+j*j)<<endl;
			}
		}
	}
	return 0;
}
