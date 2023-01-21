#include<iostream>
#include<cmath>
#include<cstdio>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		float sum=0;
		cin>>n;
		if(n==1)
		cout<<1<<endl;
		else
		{
		
		for(ll i=0; i<1000000;i++)
		{
			sum+=(float)(n+i)/(ll)pow(n,i+1);
		}
		printf("%.1f\n",sum); 
		}
	}
	return 0;
}
