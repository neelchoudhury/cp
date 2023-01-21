#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m,d;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &m, &d );
		ll h[n];
		for(ll i=0; i<n; i++)
			scanf("%lld", &h[i]);
		ll max=0;
		for(int i=1; i<n; i++)
			if(h[i]>h[max])
				max=i;
		int f=0;
		while(m--)
		{
			h[max]-=d;
			if(h[max]<=0)
			{
				f=1;
				break;
			}
			else
			{
				max=0;
				for(int i=1; i<n; i++)
					if(h[i]>h[max])
						max=i;	
			}
			
		}
		if(f)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
