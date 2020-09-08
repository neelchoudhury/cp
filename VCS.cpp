#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	ll m,k,n;
	ll tr=0, ut=0;
	while(t--)
	{
		tr=0,ut=0;
		//vector<int> v1,v2;
		scanf("%lld %lld %lld", &n,&m,&k);
		ll a[n];
		ll b[n];
		for(ll i=0; i<n; i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(ll i=0; i<m; i++)
		{
			scanf("%lld", &tr);
			a[tr-1]=1;
		}	 
		for(ll i=0; i<k; i++)
		{
			scanf("%lld", &tr);
			b[tr-1]=1;
		}
		tr=0,ut=0;	
		for(int i=0;i<n; i++)
		{
			if(a[i]==1 and b[i]==1)
				tr++;
			else if(a[i]==0 and b[i]==0)
				ut++;
		}
		printf("%lld %lld\n", tr,ut);
		
	}
	return 0;
}
