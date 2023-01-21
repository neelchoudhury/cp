#include<bits/stdc++.h>
#define ll long long int
#define N 100005

using namespace std;

int main()
{
	ll t,n,i,j,s;	
	ll a[N];
	int f=0;
	scanf("%lld", &t);
	while(t--)
	{
		s=0,f=0;
		scanf("%lld", &n);
		for(i=0;i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		for(i=0; i<n; i++)
		{
			if(a[i]<2)
			{
				printf("-1\n");
				f=1;
				break;
			}
		}
		if(!f)
		{
			for(i=n-1;i>0;i--)
				s+=a[i];
			s+=2;
			printf("%lld\n", s);
		}
	}
	return 0;
}
