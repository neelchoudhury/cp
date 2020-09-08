#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll n,q;
	int a,b;
	scanf("%lld",&n);
	int h[n];
	for(int i=0; i<n; i++)
		cin>>h[i];
	scanf("%lld",&q);
	while(q--)
	{
		cin>>a>>b;
		int flag=1;
		for(int i=a; i<b-1; i++)
		{
			if(h[i]>h[a-1])
			{
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
	return 0;
}
