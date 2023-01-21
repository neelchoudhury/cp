#include<iostream>
#include<cmath>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int a[10];
	cin>>t;
	while(t--)
	{
		for(int i=0; i<10; i++)
			cin>>a[i];
		int sm=a[0];
		int j=0;
		for(int i=1;i<10; i++)
		{
			if(sm>a[i])
			{
				sm=a[i];
				j=i;	
			}
		}
		int i=sm+1;
		//cout<<j<<" "<<sm<<endl;
		ll sum=0;
		
		while(i>0)
		{
			sum=(10*sum +j);
			i--;
		}
		if(j==0)
		{
			sum=pow(10,sm+1);
		}
		printf("%lld\n", sum);
	}
	return 0;
}
