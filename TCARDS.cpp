#include<bits/stdc++.h>
#define ll long long int

using namespace std;



int main()
{
	ll n;
	scanf("%lld", &n);
	ll time=0;
	vector<ll> v;
	while(n--)
	{
		time++;
		ll ch,x;
		scanf("%lld", &ch);
	
		if(ch==1)
		{
			scanf("%lld", &x);
			v.push_back(x);
		}
		if(ch==2)
		{
			printf("%lld\n", v[v.size()-1]);
			v.pop_back();
		}
		if(ch==3)
		{
			ll x,y;
			x=v[v.size()-1];
			y=v[v.size()-2];
			if(x!=y)
			{
				if(x<y)
				{
					printf("%lld\n", v[v.size()-1]);
					v.pop_back();
				}
				if(x>y)
				{
					printf("%lld\n", v[v.size()-2]);
					v.pop_back();
					v.pop_back();
					v.push_back(x);
				}
			}
			else if(x==y)
			{
				printf("%lld\n", v[v.size()-2]);
					v.pop_back();
					v.pop_back();
					v.push_back(x);
			}
			
		}
	}
	return 0;
}
