#include<bits/stdc++.h>
#define ll long long int
#define N 1000010

using namespace std;

char a[N];

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%s", a);
		ll len=strlen(a);
		ll ans=0,ctr=0,cnt=0;
		for(int i=0; i<len; i++)
		{
			ctr=0;
			if(a[i]=='.')
			{
				
				while(a[i++]=='.')
					ctr++;
				i--;
			}
			if(ctr>cnt)
			{
				ans++;
				cnt=ctr;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
