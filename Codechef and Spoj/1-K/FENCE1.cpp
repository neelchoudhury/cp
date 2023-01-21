#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
	float x;
	cin>>x;
	while(x!=0)
	{
		float y=(x*x)/(2*PI);
		printf("%.2f\n", y);
		cin>>x;
	}
	return 0;
}
