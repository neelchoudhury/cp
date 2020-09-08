#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[50010];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		int cnt=1,an=1;
		for(ll i=1; i<n; i++)
		{
			if(a[i]==a[i-1])
			{
				cnt++;
			}
			if(a[i]!=a[i-1] or i==n-1 )
			{
				an=max(an,cnt);
				cnt=1;
			}
			
		}
		ll ans=0;
		if(an>=(n+1)/2)
			{
				 
					//cout<<"box "<<an<<endl;
					ans=an;
				
			 
				
			}
		else
			{
				//cout<<"ning "<<an<<endl;
				 ans=(n+1)/2;
			}
		printf("%lld\n", ans);
	}
}
