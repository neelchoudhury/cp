#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010] ;

int main()
{
	ll m,n;
	scanf("%lld %lld", &m, &n);
	for(ll i=0; i<100000; i++)
	{
		a[i]= 0;
	}
	ll sum=0;
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
		sum+=a[i];
	}
	//m=sum-m;
	sort(a,a+n);
	ll sum2=0,ind=0;
	ll lo=0,hi=a[n-1]-1,mi;
	
	while(lo!=hi)
	{
		mi=(lo+hi+1)/2;
		sum2=m;
		for(ll i=0; i<n; i++)
		{
			if(a[i]>mi)
			{
				sum2-=(a[i]-mi);
			}
		}
		
		if(sum2>0)
			hi=mi-1;
		else
			lo=mi;
	}
	
	lo++;
	
	for(ll i=n-1; i>=0; i--)
	{
		if(a[i]>lo)
		{
			m-=(a[i]-lo);
			a[i]-=(a[i]-lo);
		}
	}
	
	lo--;
	
	for(ll i=n-1; i>=0 and m>0;i--)
	{
		if(a[i]>lo)
		{
			m--;
			a[i]--;
		}
	}
	
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		ans+=(a[i])*(a[i]);
	}
	
	printf("%lld\n", ans);
	return 0;
}
