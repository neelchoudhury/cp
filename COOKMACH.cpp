#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
	
	ll s[25];
s[0]=1;
for(int i=1; i<25; i++)
{
	s[i]=s[i-1]<<1;
}

	ll t,a,b;
	scanf("%lld", &t);
	ll cnt=0;
	while(t--)
	{
		cnt=0;
		scanf("%lld %lld", &a, &b);
		int flag=0,i;
		for(i=0; i<25; i++)
		{
			if(a!=s[i])
				flag++;
			if(a==s[i])
				break;
		}
		//cout<<flag<<" flag"<<endl;
		if(flag<25)
		{
			if(a>b)
			{
				while(a>b)
				{
					a/=2;
					cnt++;
				}
			}
			else if(a<b)
			{
				while(a<b)
				{
					a*=2;
					cnt++;
				}
			}
		}
		else
		{
			for(int i=24; i>=0; i--)
			{
				if(a>s[i])
				{
					//cout<<" i "<<i<<endl;
					while(a>s[i])
						a/=2,cnt++ ;
				}
				if(a==s[i])
					break;
				
			}
		//	cout<<" a "<<a<<endl;
		if(a<b)
		{
			while(a<b)
				a*=2,cnt++ ;
		}
		if(a>b)
		{
			while(a>b)
				a/=2,cnt++;
		}
			
		}
		//cout<<a<<" a"<<endl;
		printf("%lld\n", cnt);
	}
	return 0;
}
