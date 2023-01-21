#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll b[100010];

int main()
{
	ll t,n,c;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &c);
		for(ll i=0;i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n); 
		ll lo=a[1]-a[0];
		for(ll i=2; i<n; i++)
		{
			if(a[i]-a[i-1]<lo)
				lo=a[i]-a[i-1];
		}
		ll hi=(a[n-1]-a[0]+1)/(c)+1;
		//cout<<lo<<" "<<hi<<endl;
		ll val=0,elt=0;
		ll x=0;
		while(lo<hi)
		{
			x= lo+ (hi-lo+1)/2;
			elt=1;
			val=a[0];
			int f=0;
			for(ll i=1; i<n; i++)
			{
				if(a[i]-val>=x)
				{
					elt++;
					val=a[i];
					 
				}
			  
			 		
				//cout<<val<<endl;
			}
			if(elt>=c)
			{
				lo=x;
			}
			else
			{
				hi=x-1;
			}
			//cout<<"x "<<x<<" lo "<<lo<<" hi "<<hi<<endl;
		}
		//cout<<endl;
		printf("%lld\n",hi);
	}
	return 0;
}
