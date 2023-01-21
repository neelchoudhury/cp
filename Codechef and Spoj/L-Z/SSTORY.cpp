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
#define P 31
#define Q 491

using namespace std;

string s1 = "", s2 = "";
string ans = "";
ll hash1[250010], hash2[250010];
set<ll> s;
ll rais[250010];

void calcRais()
{
	rais[0] = 1;
	for(ll i = 1; i<=250000; i++)
	{
		rais[i] = (rais[i-1]*P)%Q;
	}
}

void shash(string s, ll hash1[])
{
	ll cnt = 0;
	for(ll i = 0; i<s.length(); i++)
	{
		hash1[i] = ((cnt*P) + s[i] - '0')%Q;
		cnt = hash1[i];
	}
}

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

bool res(ll len)
{
	s.clear();
	ll val = 0;
	for(ll i=0; i<=s1.length()-len; i++)
	{
		if(i==0)
		{
			s.insert(hash1[i + len - 1]);
		}
		else
		{
			val = (hash1[i + len -1] - (hash1[i-1]*rais[len])%Q + Q)%Q;
			// cout<<"vv "<<val<<" ";
			// val = (val*power(rais[i], Q-2, Q))%Q;
			// cout<<val<<endl;
			s.insert(val);
		}
	}
	// cout<<"sz "<<s.size()<<endl;
	// for(set<ll>::iterator ii = s.begin(); ii!=s.end(); ii++)
	// 	cout<<*ii<<" ";
	// cout<<endl;
	val = 0;
	for(ll i = 0; i<=s2.length()-len; i++)
	{
		if(i==0)
		{
			val = hash2[i + len - 1];
		}
		else
		{
			val = (hash2[i + len -1] - (hash2[i-1]*rais[len])%Q + Q)%Q;
			// val = (val*power(rais[i], Q-2, Q))%Q;
		}
		// cout<<"val "<<val<<endl;
		if(s.find(val) != s.end())
		{
			ans = "";
			// cout<<*(s.find(val))<<endl;
			for(ll j = i; j< i+len ; j++)
			{
				ans += s2[j];
				// cout<<ans<<endl;
			}
			// cout<<ans<<endl;
			return true;
		}
	}
	// cout<<endl;
	return false;
}

void bin(ll lo, ll hi)
{
	ll mid = lo + (hi - lo)/2;
	while (lo<=hi)
	{
		// cout<<"do "<<lo<<" "<<hi<<endl;
		mid =  (hi + lo)/2;
		// cout<<"mid " <<mid<<endl;
		if(res(mid))
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid - 1;
		}
	}
}

int main()
{
	cin>>s1>>s2;
	mem(hash1); mem(hash2);
	mem(rais);
	calcRais();
	shash(s1, hash1);
	// for(ll i = 0; i<s1.length(); i++)
	// 	cout<<hash1[i]<<" ";
	// cout<<endl;
	shash(s2, hash2);
	// for(ll i = 0; i<s2.length(); i++)
	// 	cout<<hash2[i]<<" ";
	// cout<<endl;
	bin(1, s2.length() );
	if(ans.length() != 0)
		cout<<ans<<endl<<ans.length()<<endl;
	else
		cout<<ans.length()<<endl;
	return 0;
}