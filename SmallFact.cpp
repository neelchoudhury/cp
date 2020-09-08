#include<iostream>
#include<cstdio>
#define ld long long unsigned int

using namespace std;

/*ld fact(int m, int n)
{
	if(n==m)
	return m;
	else
	{
		if((m-n+1)%2==0)
		{
			return fact()
		}
	}
}*/
ld fact(ld n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		//printf("%lf\n",fact(n));
		cout<<fact(n)<<endl;
	}
	return 0;
}
