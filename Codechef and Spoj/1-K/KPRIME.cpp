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

bool pr[100010];
vector<ll> prime;
ll arr[100010][7];

void getPrime()
{
	for(ll i = 0; i <= 100000; i++)
	{
		pr[i] = 1;
	}
	pr[0] = pr[1] = 0;
	for(ll i = 2; i<=100000; i++)
	{
		if(pr[i])
		{
			for(ll j = 2*i; j<=100000; j += i)
				pr[j] = 0;
		}
	}
	for(ll i = 2; i<=340; i++)
	{
		if(pr[i])
			prime.pb(i);
	}
}

ll divPrime(ll n)
{
	ll count = 0;
	// cout<<n<<" ";
	ll f = 0; 
	for(ll i = 0; i<prime.size(); i++)
	{
		f = 0;
		while(n%prime[i] == 0)
		{
			n/=prime[i];
			f = 1;
			
		}
		count += f;
		if(count > 5)
			return -1;
	}
	// cout<<n<<" "<<count<<endl;
	if(n == 1)
		return count;
	else if(pr[n] && count<5)
		return count + 1;
	else
		return -1;
}

void makeArrays()	
{
	mem(arr);
	ll count = 0 ;
	for(ll i = 2; i<=100000; i++)
	{
		count = 0;
		count = divPrime(i);
		if(count >= 1)
		{
			arr[i][count] = 1;
		}
	}
}

int main()
{
	ll t,a,b,k;
	ios;
	getPrime();
	// for(ll i = 0; i<prime.size(); i++)
	// 	cout<<prime[i]<<" ";
	// cout<<endl;
	makeArrays();
	for(ll i = 1; i<=5; i++)
	{
		for(ll j = 1; j<=100000; j++)
		{
			
			arr[j][i] += arr[j-1][i] ;
			// if(j<20)
			// cout<<arr[j][i]<<" ";
		}
		// cout<<endl;
	}
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>k;
		ll ans = 0;
		ans = arr[b][k] - arr[a-1][k];
		cout<<ans<<endl;
	}
	return 0;
}