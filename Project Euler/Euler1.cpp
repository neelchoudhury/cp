#include<iostream>

using namespace std;

int main()
{
	long long  sum=0;
	for(int i=1; i<1000;i++)
	{
		if(i%3==0 and i%5==0)
		{
			sum+=i;
		}
		else if(i%3==0 and i%5!=0)
		{
			sum+=i;
		}
		else  if(i%3!=0 and i%5==0)
		{
			sum+=i;
		}
		cout<<sum<<endl;
		 
		
	}
	cout<<endl<<sum<<endl;
	return 0;
}
