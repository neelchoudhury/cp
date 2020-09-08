#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,k,q,l,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>q;
		char a[n];
		scanf("%s", a);
		ll b[n][2];
		ll c[n][2];
		for(ll i=0; i<n; i++)
		{
			if(i==0)
			{
				if(a[0]=='0')
				{
					b[0][0]=1;
					b[0][1]=0;
				}
				else if(a[0]=='1')
				{
					b[0][0]=0;
					b[0][1]=1;
				}
			}
			else if(i!=0 and a[i]=='1')
			{
				b[i][1]=b[i-1][1]+1;
				b[i][0]=b[i-1][0];
			}
			else if(i!=0 and a[i]=='0')
			{
				b[i][1]=b[i-1][1];
				b[i][0]=b[i-1][0]+1;
			}
		}
		c[0][0]=0;
		c[0][1]=0;
		for(ll i=1;i<n; i++)
		{
			if(b[i][0]==b[i-1][0]+1)
			{
				c[i][0]=i;
			}
			else if(b[i][0]==b[i-1][0])
			{
				c[i][0]=c[i-1][0];
			}
		}
		for(ll i=1;i<n; i++)
		{
			if(b[i][1]==b[i-1][1]+1)
			{
				c[i][1]=i;
			}
			else if(b[i][1]==b[i-1][1])
			{
				c[i][1]=c[i-1][1];
			}
		}
		ll cnt=0;
		while(q--)
		{
			cnt=0;
			ll j,j1,j2;
			ll len=0;
			scanf("%lld %lld", &l, &r);
			for(ll i=l-1; i<r; i++)
			{
				len+=1;
			}
			for(ll i=l-1;i<r; i++)
			{
				if(l==1)
				{
					if(b[i][0]<=k and b[i][1]<=k)
				{
					//cout<<"Entered 1"<<endl;
					cnt+=(i-(l-1));
				}
				else if(b[i][1]>k and b[i][0]<=k )
				{
					//cout<<"Entered 2"<<endl;
					j=c[i-1][1];
					if(j<l-1)
						j=l-1;
					cnt+=(i-j); 
				}
			 
				else if(b[i][0]>k and b[i][1]<=k )
				{
					 
					j=c[i-1][0];
					if(j<l-1)
						j=l-1;
					cnt+=(i-j);
					/*if(q==0)
					{
						cout<<"i "<<i<<" j "<<j<<endl;
					}*/
				}
				else if(b[i][0]>k and b[i][1]>k)
				{
					j1=c[i-1][0];
					j2=c[i-1][1];
					if(j1<l-1)
						j1=l-1;
					if(j2<l-1)
						j2=l-1;
					cnt+=(i-min(j1,j2));
				}
				}
				else
				{
				if((b[i][0]-b[l-2][0])<=k and (b[i][1]-b[l-2][1])<=k)
				{
				//	cout<<"Entered 1"<<endl;
					cnt+=(i-(l-1));
				}
				else if((b[i][1]-b[l-2][1])>k and (b[i][0]-b[l-2][0])<=k)
				{
					//cout<<"Entered 2"<<endl;
					j=c[i-1][1];
					if(j<l-1)
						j=l-1;
					cnt+=(i-j); 
				}
			 
				else if((b[i][0]-b[l-2][0])>k and (b[i][1]-b[l-2][1])<=k)
				{
					//cout<<"Entered 3"<<endl;
					j=c[i-1][0];
					if(j<l-1)
						j=l-1;
					cnt+=(i-j);
					/*if(q==0)
					{
						cout<<"i "<<i<<" j "<<j<<endl;
					}*/
				}
				else if((b[i][0]-b[l-2][0])>k and (b[i][1]-b[l-2][1])>k)
				{
					j1=c[i-1][0];
					j2=c[i-1][1];
					if(j1<l-1)
						j1=l-1;
					if(j2<l-1)
						j2=l-1;
					cnt+=(i-min(j1,j2));
				}
				}
			}
			cnt+=len;
			printf("%lld\n",cnt);
		}
	 
	}
	return 0;
}
