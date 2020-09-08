#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

ll a[100010], b[100010],c[100010];

int main()
{
	ll t, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mem(a);
		for(ll i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a, a+n);
		ll cnt = 0, sm = 0;
		for(ll i = 0; i<n; i++)
		{
			if(a[i]<=0)
				cnt++;
			sm += a[i];
		}
		if(cnt == n)
		{
			cout<<sm<<endl;
			continue;
		}
		mem(b);
		mem(c);
		b[n-1] = a[n-1];
		for(ll i = n-2; i>=0; i--)
		{
			b[i] =  b[i+1] + a[i];
		}
		ll sum = 0, ma = 0, ind = n;
		for(ll i = 0; i<n; i++)
		{
			if(i == 0)
				c[i] = b[i]*(ind--);
			else
			{
				// if(a[i-1] < 0)
				{
					c[i] = sum + a[i-1] + b[i]*(ind--);
					sum += a[i-1];
				}
			}

		}
		// for(ll i = 0; i<n; i++)
		// 	cout<<c[i]<<" ";
		// cout<<endl;
		ll ans = INT_MIN;
		for(ll i = 0; i<n-ind; i++)
		{
			ans = max(ans, c[i]);
		}
		cout<<ans<<endl;
	}
}