#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000010];

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld ",&n, &k);
		memset(a,0,sizeof(a));
		for(ll i=0;i<n; i++)
			scanf("%lld ", &a[i]);
		ll sum=0;
		bool flag=0;
		for(ll i=0,j=0; i<n and j<n; )
		{
			if(sum<k)
			{
				while(sum<k and i<n)
				{
					sum+=a[i++];
				}
			}
		
			if(sum>k)
			{
				while(sum>k and j<n)
				{
					sum-=a[j++];
				}
			}
			if(sum==k)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
			cout<<"NO"<<endl;
	}
	return 0;
}
