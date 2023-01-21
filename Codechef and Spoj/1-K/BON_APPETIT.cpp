#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n,k;
	ll sum=0, b=0;
	scanf("%lld %lld", &n, &k);
	for(ll i=0; i<n; i++)
	{
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	scanf("%lld", &b);
	sum-=a[k];
	if(sum/2==b)
	{
		cout<<"Bon Appetit"<<endl;
	}
	else
	{
		cout<<abs(sum/2-b)<<endl;
	}
	return 0;
}
