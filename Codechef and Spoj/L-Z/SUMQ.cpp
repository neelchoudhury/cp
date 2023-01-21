#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
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

vector<ll> a, b, c;
vector<ll>::iterator i1, i2;
ll d[100010], e[100010];

int main()
{
	ll t, p, q, r, x, arr;
	ll suma = 0, sumc = 0, ans = 0, cnta = 0, cntc = 0;
	cin>>t;
	while(t--)
	{
		cin>>p>>q>>r;
		a.clear(); 
		b.clear();
		c.clear();
		for(ll i = 0; i<p; i++)
		{
			cin>>x;
			a.pb(x);
			d[i] = 0;
		}
		for(ll i = 0; i<q; i++)
		{
			cin>>x;
			b.pb(x);
		}
		for(ll i = 0; i<r; i++)
		{
			cin>>x;
			c.pb(x);
			e[i] = 0;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		d[0] = a[0];
		for(ll i = 1; i<a.size(); i++)
		{
			d[i] = d[i-1] + a[i];
		}
		e[0] = c[0];
		for(ll i = 1; i<c.size(); i++)
		{
			e[i] = e[i-1] + c[i];
		}
		ans = 0;
		for(ll i = 0; i<b.size(); i++)
		{
			i1 = upper_bound(a.begin(), a.end(), b[i]);
			i2 = upper_bound(c.begin(), c.end(), b[i]);
			if(i1 == a.begin())
			{
				cnta = 0;
				suma = 0;
			}
			else
			{
				i1--;
				cnta = (i1 - a.begin()) + 1;
				suma = d[cnta-1];
			}
			if(i2 == c.begin())
			{
				cntc = 0;
				sumc = 0;
			}
			else
			{
				i2--;
				cntc = (i2 - c.begin()) + 1;
				sumc = e[cntc - 1];
			}
			ans = (ans + ((((suma*cntc)%MOD + (sumc*cnta)%MOD )%MOD)*b[i])%MOD + (suma*sumc)%MOD + ((((b[i]*b[i])%MOD)*(cnta*cntc))%MOD)%MOD )%MOD;
		}
		cout<<ans<<endl;
	}
	return 0;
}