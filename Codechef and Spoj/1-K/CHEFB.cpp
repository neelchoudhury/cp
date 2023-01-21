#include<bits/stdc++.h>
#define ll long long int
#define N 1000005

using namespace std;

bool prime(ll x)
{
	for(ll i=2; i<=sqrt(x); i++)
		if(x%i==0)
			return false;
	return true;
}

int main()
{
	ll t,n,i,j,x,s;
	ll a[N];
	scanf("%lld", &t);
	while(t--)
	{
		s=0;
		scanf("%lld", &n);
		for(i=0;i<N; i++)
			a[i]=0;
		for(i=1; i<=n; i++)
		{
			scanf("%lld", &x);
			a[x]=x;
		}
		for(i=1; i<=n; i++)
		{
			if(prime(i))
			{
				for(j=2*i;j<=n; j+=i)
					a[j]/=i;
			}
		}
		for(i=1; i<=n; i++)
			if(a[i]!=1 and a[i]!=0)
				s+=1;
		printf("%lld\n", s);
	}
	return 0;
}
