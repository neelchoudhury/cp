#include<iostream>
#include<cstdio>
#define ll long long int
 
using namespace std;
 
int main()
{
	ll n,k;
	ll x;
	ll sum=0;
	scanf("%lld%lld", &n,&k);
	//cin>>n>>k;
	while(n--)
	{
		scanf("%lld", &x);
		//cin>>x;
		if(x%k==0)
			sum+=1;
	}
	printf("%lld\n", sum);
	//cout<<sum;
} 
