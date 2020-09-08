#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
	int t;
	ll s,c,k;
	cin>>t;
	while(t--)
	{
		cin>>s>>c>>k;
		ll cnt=0;
			ll x=0;
		if(k==1)
		{
			/*if(c==s and c==1)
				cnt=5;*/
		/*	if(c=0 and s==0)
			{
				cnt=0;
			}*/
			if(c==0 )
			{
				cnt=(ll)pow(2,s);
				cnt+=1;
			}
			else if(s==0)
			{
				for(int i=c; i>=1; i--)
				{
					cnt+=(ll)pow(2,i);
				}
			}
			else if(c>=s)
			{
				x=(ll)pow(2,s);
				cnt=x+1;
				for(int i=s;i<=c;i++)
				{
					cnt+=(ll)pow(2,i);
				}
			}
			else if(s>c)
			{
				cnt=(ll)pow(2,s);
				cnt+=1;
			}
			printf("%lld\n",cnt);
		}
	}
 	return 0;
} 
