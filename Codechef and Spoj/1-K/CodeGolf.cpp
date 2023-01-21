#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long unsigned int

using namespace std;

int main()
{
	ll n,i=1;
	scanf("%llu", &n);	
	int a[30];
	for(int i=0;i<30;++i)
		a[i]=0;
	for(int i=29;n>0;i--)
	{
		if(n%2!=0)
			a[i]=1;
			//cout<<n<<"  "<<a[i]<<endl;
		n/=2;
		
	}
	/*for(int i=0;i<9;++i)
		cout<<a[i]<<" ";
	cout<<endl;*/
	for(int i=29; i>=0; i--)
	{
		if(a[i]==1)
		{
			ll x=pow(2,29-i);
			printf("%lld ", x);
			//cout<<pow(2,29-i)<<" ";
		}
	}
	cout<<endl;
	return 0;
	 
}
