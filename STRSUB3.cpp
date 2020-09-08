#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
	ll t,n,k,q,l,r;
	char a[100001];
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n,&k, &q);
		//char a[n];
		scanf("%s", a);
		ll b[n][2];
		ll c[n][2];
		char d[n];
		
		ll z=0,z1=0,z2=0;
		ll cnt=0;
		while(q--)
		{
			cnt=0;
			ll j,j1,j2;
			scanf("%lld %lld", &l, &r);
			//cin>>l>>r;
			for(ll i=l-1; i<r; i++)
			{
				d[i-l+1]=a[i];
			}
			ll s;
			s=r-l+1;	
			for(ll i=0; i<s; i++)
			{
				if(i==0)
				{
					if(d[0]=='0')
					{
						b[0][0]=1;
						b[0][1]=0;
					}
					else if(d[0]=='1')
					{
						b[0][0]=0;
						b[0][1]=1;
					}
				}
				else if(i!=0 and d[i]=='1')
				{
					b[i][1]=b[i-1][1]+1;
					b[i][0]=b[i-1][0];
				}
				else if(i!=0 and d[i]=='0')
				{
					b[i][1]=b[i-1][1];
					b[i][0]=b[i-1][0]+1;
				}
			}
			if(k==1)
			{
				for(ll i=l; i<r; i++)
				{
					if(a[i]!=a[i-1])
						cnt++;
				}
			}
			else
			{
				for(ll i=1;i<s; i++)
				{
					if(b[i][0]<=k and b[i][1]<=k)
					{
						cnt+=(i);
					}
					else if(b[i][1]>k and b[i][0]<=k )
					{
						for( z=0;z<i; z++)
						{
							if(b[z][1]==(b[i][1]-k))
							break;
						}
						 
						cnt+=(i-z-1); 
					}
			 
					else if(b[i][0]>k and b[i][1]<=k )
					{
						for( z=0;z<i; z++)
						{
							if(b[z][0]==(b[i][0]-k))
							break;
						}
					 	cnt+=(i-z-1);
					}
					else if(b[i][0]>k and b[i][1]>k)
					{
						for( z1=0;z1<i; z1++)
						{	
							if(b[z1][0]==(b[i][0]-k))
							break;
						}
						for( z2=0;z2<i; z2++)
						{
							if(b[z2][1]==(b[i][1]-k))
							break;
						}
						cnt+=(i-max(z1,z2)-1);
					}
				}
			}
			cnt+=s;
			printf("%lld\n",cnt);
		}
	}
	return 0;
} 
