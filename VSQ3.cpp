#include<bits/stdc++.h>
#define ll long long int
#define inf 10e9+7

using namespace std;

ll t,n,q1,q2,q3,q4;
ll a[100010];
ll b[100010][4];

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


ll maxSubArraySum2(ll a[], ll size)
{
   ll max_so_far = a[0];
   ll curr_max = a[0];
 
   for (ll i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
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
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			if(a[i]==q1 or a[i]==q2 or a[i]==q3 or a[i]==q4)
				a[i]=0;
		}
		for(ll i=0;i <n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
		ll ans=maxSubArraySum2(a,n);
		printf("%lld\n", ans);
	}
}
