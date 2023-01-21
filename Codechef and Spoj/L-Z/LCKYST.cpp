#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll power(ll a, ll b)
{
	ll ans=1;
	for(int i=1; i<=b; i++)
	{
		ans=ans*a;
	}
	return ans;
}

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a;
	int czero=0;
	for(ll i=0; i<n;i++)
	{
		czero=0;
		scanf("%lld", &a);
		ll b=a;
		if(czero%10==0)
		{
			while(a%10==0)
			{
				czero++;
				a/=10;
			}
		}
		if(a%5!=0)
		{
			printf("%lld\n", b);
		}
		else
		{
			while(a%5==0)
			{
			a*=4;
			while(a%10==0)
			{
				czero++;
				a/=10;
			}
			}
			//cout<<a<<" "<<czero<<" "<<(power(10,czero))<<endl;
			a=a*(power(10,czero));
			printf("%lld\n", a);
		}
	}
	return 0;
}
