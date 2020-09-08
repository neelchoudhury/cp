#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

ll coin(ll s)
{
	if(s<12)
	{
		return s;
	}
	else  
	{
		 
			return max(s,coin(s/3) + coin(s/2)+ coin(s/4));
	 
	}
	 
}

int main()
{ 
	int t;
	cin>>t;
	ll c;
	while(t--)
	{
		scanf("%lld", &c);
		printf("%lld\n", coin(c));
	}
	return 0;
}
