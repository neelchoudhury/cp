#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool pr[1004]; 
ll a[1004];

int main()
{
	for(int i=0;i<=1000; i++)
		pr[i]=1;
 
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=1000; i++)
	{
		if(pr[i]!=0)
		{
		for(int j=i*i;j<=1000; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	}
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld",&n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		ll i=n-1, cnt=0, ans=1;
		for(i; i>=0; i--)
		{
			if(pr[a[i]])
			{
				cnt++;
				ans*=a[i];
				if(cnt==1)
					break;
			}
		}
		if(cnt<1)
		{
			printf("-1\n");
		}
		else
		{
			printf("%lld\n", ans*ans);
		}
	}
	return 0;
}
