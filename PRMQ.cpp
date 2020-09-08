#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

ll a[1010];
bool pr[1000010];
vector<ll> prime;
map<ll, ll> m[1010];
map<ll, ll>::iterator i1, i2;

void getPrime()
{
	for(ll i = 0; i <= 100000; i++)
	{
		pr[i] = 1;
	}
	pr[0] = pr[1] = 0;
	for(ll i = 2; i <= sqrt(100000); i++)
	{
		if(pr[i])
		{
			for(ll j = 2*i; j<= 100000; j+=i)
			{
				pr[j] = 0;
			}
		}
		if(i > 2)
			i++;
	}
	for(ll i = 2; i<=100000; i++)
	{
		if(pr[i])
			prime.pb(i);
	}
}

void primeFact(ll ind)
{
	ll num = a[ind];
	ll i = 0, cnt = 0;
	while(num > 0)
	{
		cnt = 0;
		while(num%prime[i] == 0)
		{
			num/=prime[i];
			cnt ++;
		}
		if(cnt > 0)
		{
			m[ind][prime[i]] =cnt;
		}
		i++;
	}
}

void proc(ll n)
{
	for(ll i = 0; i < n; i++)
	{
		primeFact(i);
	}
}

int main()
{
	ll n, q, l, r, x, y;
	ios;
	getPrime();
	cout<<"Done "<<prime.size()<<" size"<<endl;
	for(ll i = 0; i<10; i++)
		cout<<i<<" "<<prime[i]<<endl;
	cin>>n;
	for(ll i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	proc(n);
	cin>>q;
	ll ans = 0;
	while(q--)
	{	
		ans = 0;
		cin>>l>>r>>x>>y;
		for(ll i = l; i <= r; i++)
		{
			i1 = m[i].upper_bound(y);
			i2 = m[i].upper_bound(x);
			i1 --;
			if(i1 == m[i].end())
				ans += 0;
			else if(i2 == m[i].begin() )
				ans += (i1->ss);
			else
			{
				i2 --;
				ans+=((i1->ss) - (i2->ss) );
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}