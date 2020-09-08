#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		if(k>((n)/2))
			printf("-1\n");
		else
		{
			memset(a,0,sizeof(a));
			 
			for(ll i=0; i<n; i++)
			{
				//printf("%lld ",((i+k)%(n)+1));
				a[i]=((i+k)%(n))+1;
				b[a[i]]=i;
			}
			for(int i=0;i<n;i++)
			{
				int j=(i-k+n)%n+1;
				//cout<<j<<" "<<a[j]<<endl;
				if(j<a[i] && b[j]>i )
				swap(a[j],a[i]);
				cout<<a[i]<<" ";
			}
			
			printf("\n");
		}
	}
	return 0;
}
