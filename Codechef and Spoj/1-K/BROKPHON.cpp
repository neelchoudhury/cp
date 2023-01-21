#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	ll n;
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		ll b[n];
		for(ll i=0;i<n; i++)
		{
			scanf("%lld", &a[i]);
			b[i]=0;
		}
		for(ll i=1; i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				if(i!=1)
				{ 
					b[i]=b[i-1];
				}
			}
			else
			{
				if(i==1)
				{
					b[i]=2;
					b[i-1]=1;
				}
				else
				{
					 if(b[i-1]==b[i-2])
					 	b[i-1]+=1;
					 b[i]=b[i-1]+1;
				}
			}
			/*for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		}
		
		printf("%lld\n", b[n-1]);
	}
	return 0;
}

