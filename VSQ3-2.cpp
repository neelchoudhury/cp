#include<bits/stdc++.h>
#define ll long long int
#define inf 10e9+7

using namespace std;

ll t,n,q1,q2,q3,q4;
ll a[100010];
ll b[4][100010];
ll c[5],sz[5];

ll maxSubArraySum(ll a[], ll size)
{
   ll max_so_far = 0, max_ending_here = 0;
   for (ll i = 0; i < size; i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0)
           max_ending_here = 0;
 
       /* Do not compare for all elements. Compare only   
          when  max_ending_here > 0 */
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld %lld", &n, &q1, &q2, &q3, &q4);
		memset(a,0,sizeof(a));
		memset(c,0,sizeof(c));
		memset(sz,0,sizeof(sz));
		for(ll i=0; i<100000; i++)
		{
			for(ll j=0; j<4; j++)
			{
				b[j][i]=inf;	
			}	
		}
		int j=0,k=0;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			if(a[i]==q1 or a[i]==q2 or a[i]==q3 or a[i]==q4)
			{
					sz[j]=k;
					j++;
					
					k=0;
		
			}
			else
			{
				b[j][k++]=a[i];
			}
		}
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<n; j++)
				cout<<b[i][j]<<" ";
			cout<<endl;
		}
		/*for(ll i=0;i <n; i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		for(ll i=0; i<4; i++)
		{
			if(b[i][0]!=inf)
			{
				c[i]=maxSubArraySum(b[i],sz[i]);
			}
		}
		ll ans=max(c[0],max(c[1],max(c[2],max(c[3],c[4]))));
		printf("%lld\n", ans);
	}
}
