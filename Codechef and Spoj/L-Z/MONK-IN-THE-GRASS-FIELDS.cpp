#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct q
{
	ll val;
	ll x,y;
};

bool comp(q qq,q ww)
{
	return (qq.val)<(ww.val);
}

ll a[202][202];
struct q b[402];

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	ll ans=0;
	while(t--)
	{
		ans=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%lld %lld", &n, &k);
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n;j++)
			{
				scanf("%lld", &a[i][j]);
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				b[i].val+=a[i][j];
				b[i].x=0;
				b[i].y=i;
			}
		}
		for(int i=n; i<2*n; i++)
		{
			for(int j=0; j<n; j++)
			{
				b[i].val+=a[j][i-n];
				b[i].x=1;
				b[i].y=i-n;
			}
		}
		sort(b,b+2*n,comp);
		
		while(k--)
		{
			for(int i=0; i<2*n; i++)
			cout<<b[i].val<<" ";
		cout<<endl;
			ans+=b[0].val;
			b[0].val+=n;
			if(b[0].x==0)
			{
				for(int i=0; i<2*n; i++)
				{
					if(b[i].x==1 and b[i].y==b[0].y)
					{
						b[i].val+=1;
					}
				}
			}
			else 
			{
				for(int i=0; i<2*n; i++)
				{
					if(b[i].x==0 and b[i].y==b[0].y)
					{
						b[i].val+=1;
					}
				}
			}
			sort(b,b+2*n,comp);
			
		}
		printf("%lld\n", ans);
	}
	return 0;
}
