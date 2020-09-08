#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
char p[100004];
ll a[100004];
 
int main()
{
	scanf("%s", p);
	while(strcmp(p,"*")!=0)
	{
		ll m=strlen(p);
		for(ll i=0; i<1004; i++)
			a[i]=0;
		ll i=1,j=0;
		for(i=1,j=0;i<m;++i)
		{
			while(j>0&&p[j]!=p[i]) 
				j=a[j-1];
			if(p[j]==p[i])
			{
				a[i]=j+1;
				j++;	
			}
			else
			a[i]=0;
		} 
		ll ans=1;
		ll q;
		for(ll i=1; i<=m; i++)
		{
			q=(i-a[i-1]); 
			if(a[i-1]%q==0 and i%q==0)
				ans=i/q;
		 
		}
		if(a[m-1]%q!=0 or i%q!=0)
			ans=1;
		printf("%lld\n", ans); 
		scanf("%s", p);
	} 
	return 0;
} 
