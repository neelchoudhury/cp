#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
ll gcd(ll a,ll b)
{
  	int r, i;
  	while(b!=0)
	{
   	 	r = a % b;
   		a = b;
   		b = r;
  	}
  return a;
}
 
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		ll a[n];
		for(int i=0;i<n;++i)
		{
			scanf("%lld",&a[i]);
		}
		ll g=a[0];
		for(ll i=1;i<n;++i)
		{
			g=gcd(g,a[i]);
		}
		if(g==1)
		cout<<n<<endl;
		else
		cout<<-1<<endl;
	}
	return 0;
}
