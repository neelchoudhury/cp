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

ll a[4];

int main()
{
	ll n;
	string s = "";
	cin>>n;
	cin>>s;
	mem(a);
	for(ll i = 0; i<s.length(); i++)
	{
		if(s[i] == 'A')
			a[0]++;
		if(s[i] == 'C')
			a[1]++;
		if(s[i] == 'G')
			a[2]++;
		if((s[i] == 'T'))
			a[3]++;
	}
	sort(a,a+4);
	ll ans = 1, k = 1;
	if(a[3] == a[0])
		k = 4;
	else if(a[3]  == a[1])
		k = 3;
	else if(a[3] == a[2])
		k = 2;
	for(ll i = 0; i<n; i++)
	{
		ans = (ans*k)%MOD;
	}
	cout<<ans<<endl;
	return 0;
}