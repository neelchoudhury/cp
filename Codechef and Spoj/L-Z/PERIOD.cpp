#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000010];

int main()
{
	string p;
	ll t;
	scanf("%lld", &t);
	for(ll k=0; k<t;k++)
	{
		printf("Test case #%d \n",k+1);
		ll m;
		scanf("%lld", &m);
		cin>>p;
		 
		memset(a,0,sizeof(a));
		for(int i=1,j=0;i<m;++i)
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
		ll ans=0;
		for(ll i=0; i<m; i++)
		{
			ll qq=(i+1)-a[i];
			if((i+1)%((i+1)-a[i])==0 and a[i]%((i+1)-a[i])==0 and (i+1)/qq>1)
			{
				
				 
				printf("%lld %lld\n",(i+1), (i+1)/qq);
			}
		}
	}
	return 0;
}
