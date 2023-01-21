#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0&&(y-.5)>=x)
	{
		printf("%.2f",(y-x-0.5));
	}
	else if(x%5!=0||(y-.5)<x)
	{
		printf("%.2f",(y));
	}
}
