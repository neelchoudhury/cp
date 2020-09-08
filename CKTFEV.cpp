#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	float o,r,s;
	cin>>t;
	while(t--)
	{
		cin>>o>>r>>s;
		float a;
		a=((o*r)+s)/(o+1);
		printf("%.2f\n", a);
	}
	return 0;
}
