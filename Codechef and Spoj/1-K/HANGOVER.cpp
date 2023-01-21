#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	float n,s=0;
	float E=pow(10,-2);
	float i;
	scanf("%f", &n);
 	while(abs(n-0.00)>E)
	{
		s=0;
		i=2;
		while(s<n )
		{
			s+=pow(i,-1);
			i++;
		}
		printf("%.0f card(s)\n", i-2);
		scanf("%f",&n );
	}
	return 0;
}
