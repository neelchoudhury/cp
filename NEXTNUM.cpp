#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll fact[20];
char a[20],b[20];

int main()
{
	fact[0]=0;
	fact[1]=1;
	for(int i=2;i<=18; i++)
		fact[i]=i*fact[i-1];
	ll t;
	ll ans=0;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%s", a);
		ans=0;
		strcpy(b,a);
		ll len=strlen(a);
		sort(b,b+len);
		ll cnt=0;
		for(ll i=0; i<len; i++)
		{
			cnt=0;
			for(ll j=0;b[j]<=a[i]; j++)
			{
				if(b[j]==a[i] )
				{
					if(j<len-1 and b[j+1]>a[i] )
					{
						b[j]=-1;
						break;
					}
					else if(j==len-1)
					{
						b[j]=-1;
						break;
					}
				}
				else
				{
					if(b[j]!=b[j-1] and b[j]!=-1)
						cnt++;
				}
			}
			ans+=((cnt)*fact[len-i-1]);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
