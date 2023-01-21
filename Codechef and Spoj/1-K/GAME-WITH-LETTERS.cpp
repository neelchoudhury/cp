#include<bits/stdc++.h> 
#define ll long long int
#define ep 0.0001

using namespace std;

char s[100010];
ll a[10010][28];
ll b[28];
char c[15];
int le[10010];
ll ans[10010]; 

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		scanf("%s",s);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(ans,0,sizeof(ans)); 
		memset(le,0,sizeof(le)); 
		ll lens=strlen(s);
		for(ll i=0; i<lens; i++)
			b[s[i]-'a']+=1; 
		for(ll i=0;i<n; i++)
		{
			scanf("%s", c);
			ll lenc=strlen(c);
			le[i]=lenc;
			for(ll j=0; j<lenc; j++)
				a[i][c[j]-'a']+=1 ;   
			for(ll k=0; k<=25; k++)
			{
				ans[i]+=(a[i][k])*b[k]; 
			} 
		}  
		ll anss=0,maxx=0;
		ll i;
		for( i=0; i<n; i++)
		{
			if((ans[i]>maxx))
			{ 
				maxx=ans[i];
			} 
		}
		ll lqq=999999999;
		for(i=0; i<n; i++)
		{
			if(ans[i]==maxx)
			{
				if(le[i]<lqq)
				{
					lqq=le[i];
					anss=i;
				}
			}
		}
		printf("%lld\n",anss+1);
	}
	return 0;
	
}
