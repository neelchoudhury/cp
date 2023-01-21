#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int t;
	float a,b,c,d,r;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a+b>c and a+c>b and b+c>a and a!=0 and b!=0 and c!=0)
		{
			d=(a+b+c)*(a+b-c)*(a+c-b)*(c+b-a);
		r=a*b*c/(float)sqrt(d);
		printf("%f\n",r);
		}
		else
		{
			continue;
		}
		
		
	}
	return 0;
}
