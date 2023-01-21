#include<iostream>
#include<cstdio>
#define ll long long int
#define MOD 1000007

using namespace std;

int main()
{
	int t;
	ll n;
	ll sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		scanf("%lld", &n);
		sum=3*n*(n+1)/2-n;
		while(sum>=MOD)
			sum%=MOD;
		 
		printf("%lld\n", sum);
	}
	return 0;
}
