#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n,k;
	scanf("%lld %lld", &n, &k);
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll cal[n];
	ll p[n];
	memset(p,0,sizeof(p));
	memset(cal,0,sizeof(cal));
	for(ll i=1; i<n; i++)
	{
		int flag=0;
		for(ll j=i-1;j>=cal[i-1]; j--)
		{
			if(a[j]%a[i]==k)
			{
				flag=1;
				cal[i]=j+1;
				p[j]=i;
				break;
			}
			else if(a[j]%a[i]==0)
			{
				if(k!=0)
				{
					flag=1;
					cal[i]=cal[j];
					p[cal[j]]=i;
					break;
				}
			}
			else if(p[j]>i)
				break;
		}
		if(flag==0)
			cal[i]=cal[i-1];
	}
	ll dp[n];
	memset(dp,0,sizeof(dp));
	dp[0]=0;
	ll ans=0;
	for(ll i=1; i<n; i++)
	{
		if(cal[i]!=0)
			dp[i]=min(dp[i-1]+1,i-cal[i]);
		else
			dp[i]=dp[i-1]+1;	
		ans+=dp[i];
	}
	/*for(int i=0; i<n; i++)
		cout<<cal[i]<<" ";
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<dp[i]<<" ";
	cout<<endl;*/
	ans+=n;
	printf("%lld\n", ans);
	return 0;
	
}
/*
for(ll i=1; i<n; i++)
	{
		for(ll j=i-1;j>=0; j--)
		{
			if(a[j]%a[i]==k)
			{
				cal[i]=j+1;
				break;
			}
			if(a[j]%a[i]==0)
			{
				if(k!=0)
				{
					cal[i]=cal[j];
					break;
				}
			}
		}
	}*/
