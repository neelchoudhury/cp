#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[25],b[25];

int main()
{
	ll t,k;
	scanf("%lld", &t);
	memset(a,0,sizeof(a));
	a[0]=1;
	for(ll i=1; i<=20; i++)
	{
		a[i]=a[i-1]*5;
	}
	while(t--)
	{
		memset(b,0,sizeof(b));
		scanf("%lld", &k);
		if(k==1)
			printf("%lld\n",(ll)0);
		else
		{
			ll j=20;
			ll x=0;
			ll f=0;
			while(j>=0)
			{
				x=k/a[j];
				if(x>0)
					f=1;
				//cout<<x<<" "<<k<<" "<<a[j]<<" "<<j<<endl;
				if(k%a[j]!=0)
					x+=1;
				if(x!=0)
				{
					b[j]=2*x-2;
				}
				else
				{
					if(f==1)
						b[j]=8;
				}
				k%=a[j];
				j--;
				/*if(k<10)
				{
					b[j]=k;
					k=0;
				}*/
			}
		//int f=0;
		/*	for(ll i=0; i<=20; i++)
			cout<<b[i];
			cout<<endl;*/
			f=0;
			for(ll i=20; i>=0; i--)
			{
				if(b[i]!=0)
				{
					f=1;
					//cout<<"k "<<i<" k";
					printf("%lld", b[i]);
				}
				else
				{
					if(f==1)
						printf("%lld", b[i]);
				}
			
			}
			printf("\n");
		}
	}
	return 0;
}
