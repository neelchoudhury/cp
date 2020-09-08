#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,x;
	scanf("%lld", &t);
	while(t--)
	{
		ll sum=0;
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &x);
			sum+=x;
		}
		if(sum%2)
			cout<<"Tom Wins"<<endl;
		else
			cout<<"Hanks Wins"<<endl;
	}
	return 0;	
}
