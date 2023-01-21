#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N];
ll b[N];

 ll maxSum (ll input[], ll n, ll sz) {
    ll sums[N+1]  ;
	memset(sums,0,sizeof(sums));  // new int[] fills the array with zeros
    ll max = 0;

    for (ll x=0;x<sz; x++) {
        ll newMax = max;
        // update sums[k] for k > 0 by adding x to the old sums[k-1]
        // (loop from top down to avoid overwriting sums[k-1] too soon)
        for (ll k = n; k > 0; k--) {
            sums[k] = sums[k-1] + input[x];
            if (sums[k] > newMax) newMax = sums[k];
        }
        sums[0] = max;  // update sums[0] to best sum possible if x is excluded
        max = newMax;   // update maximum sum possible so far
    }
    return max;
}

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		memset(b,0,sizeof(b));
		ll s=0;
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]),s+=a[i];
		int ctr=0,ctro=0;
		s=maxSum(a,2,n);
		/*for(int i=0; i<n; i++)
		{
			ctr++;
			if(ctr>2)
			{
				ll x1;
				x1=min(a[i],min(a[i-1],a[i-2]));
				if(x1==a[i])
				{
					s-=a[i],ctr=0,b[i]=-1;
					
				}
				else if(x1==a[i-1])
				{
					s-=a[i-1],ctr=1,b[i-1]=-1;
				}
				else if(x1==a[i-2])
				{
					s-=a[i-2],ctr=2,b[i-2]=-1;
					if(b[i-3]==-1 and ctro<2 and i>2)
					{
						s+=a[i-3];
					}
				}
				ctro=ctr;
			}
		}*/
		printf("%lld\n", s);
	}
	return 0;
}
