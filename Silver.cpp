#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	do
	{
		for(int i=n/2; ;i--)
		{
			if(i*(i+1)/2>=n and (i-1)*i/2<n)
			{
				cout<<i<<endl;
			}
		}
		cin>>n;
	}while(n!=0);
	return 0;
}
