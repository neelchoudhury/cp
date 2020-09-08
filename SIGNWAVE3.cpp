#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,s,c,k;
	cin>>t;
	while(t--)
	{
		cin>>s>>c>>k;
		ll cnt=0;
		if(k==1 )
		{
			if(s<=c)
			{
				if(c>0)
				{
					if(s==0)
					{
						for(int i=1; i<=c; i++)
						{
						cnt+=(ll)pow(2,i);
						}
					}
					else
					{
						for(int i=s; i<=c; i++)
						{
							cnt+=(ll)pow(2,i);
						}
					}
				}
				if(s>0)
				{
					cnt+=(ll)pow(2,s);
					cnt+=1;
				}
			}
			else if(s>c)
			{
				cnt=(ll)pow(2,s);
				cnt+=1;
			}
			printf("%lld\n", cnt);
		}
		else if(c==0)
		{
		 
			ll x;
		 	if(k==s)
		 		cnt=3;
		 	else if(k<s)
		 	{
		 		x=(ll)pow(2,s-k);
		 		while(x>=1)
		 		{
		 			cnt+=x;
		 			x/=2;
		 		}
		 		cnt+=2;
		 	}
		  
			printf("%lld\n",cnt);
		}
		else
		{
			 
			ll x=pow(2,s)+1;
			ll y=pow(2,c);
			ll m=max(x,y);
			ll a[m];
			for(ll i=0; i<m; i++)
			{
				a[i]=0;
			}
			ll t;
			for(ll i=1;i<=s; i++)
			{
				t=max/pow(2,i);
				for(int j=0; j<m;j++)
				{
					a[j]+=t;
				}
			}
			for(ll i=1; i<=c; i++)
			{
				t=max/pow(2,i+1);
				for(int j=0; j<m;j++)
				{
					a[j]+=2*t;
				}
				
			}
			ll cnt=0;
			for(int i=0; i<k; i++)
			{
				cnt+=a[i];
			}
			printf("%lld\n", cnt);
		}
		
	}
	return 0;
}
