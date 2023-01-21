#include<iostream>
#include<cstdio>
#define ll long long unsigned int
#define M 999999

using namespace std;

int main()
{
	ll n=0,q=0,sum=0;
	scanf("%llu", &n);
	scanf("%llu", &q);
	ll a[n];
	for(ll i=0; i<n; i++)
	{
		scanf("%llu", &a[i]);
	}
	while(q--)
	{
		sum=0;
		char c[4];
		cin>>c;
		
		ll al,bl;
		cin>>al>>bl;
		//cout<<c<<" al: "<<al<<" bl: "<<bl<<endl;
		for(int i=al-1; i<=bl-1; i++)
		{
			sum+=a[i];
		}
		printf("%llu\n",sum);
	}
	return 0;
}
