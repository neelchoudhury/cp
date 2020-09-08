#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll b[100010];

int main()
{
	ll t,n;
	scanf("%lld", &t );
	while(t--)
	{
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		memset(b,0,sizeof(b));
		int f=0,cnt=1;
		b[n-1]=1;
		for(ll i=n-2;i>=0; i--)
		{
			if(a[i]*a[i+1]<0)
			{
				f=1;
				cnt++;
				b[i]=cnt;
				
			}
			else 
			{
				f=0;
				cnt=1;
				b[i]=cnt;
			}
		}
		for(ll i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;	
	}
	return 0;
	
}
