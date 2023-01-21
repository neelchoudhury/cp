#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,s,c,k;
	cin>>t;
	while(t--)
	{
		//cin>>s>>c>>k;
		scanf("%lld %lld %lld",&s, &c, &k);
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
		else if(k!=1 and c!=0)
		{
			 
		ll x;
		x=(ll)pow(2,s)+1;
		ll y;
		y=(ll)pow(2,c+1)+1;
		ll m=(x>y?x:y);
		int a[m];
		for(ll i=0; i<m; i++)
		{
			a[i]=0;
		}
		ll ti=0;
		for(ll i=1;i<=s; i++)
		{
			ll ti=m/pow(2,i);
			for(ll j=0; j<m;j+=ti)
			{
				a[j]+=1;
			}
		}
		for(ll i=1; i<=c; i++)
		{
			ll ti=m/pow(2,i+1);
			for(ll j=ti; j<m;j+=(2*ti))
			{
				a[j]+=1;
			}
			
		}
		ll cnt=0;
		for(ll i=0; i<m; i++)
		{
			if(a[i]>=k)
				cnt++;
		}
		printf("%lld\n", cnt);
		}
		
	}
	return 0;
}
