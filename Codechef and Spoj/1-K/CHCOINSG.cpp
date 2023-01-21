#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n%6==0)
			printf("Misha\n");
		else
			printf("Chef\n");
	}
	return 0;
}
