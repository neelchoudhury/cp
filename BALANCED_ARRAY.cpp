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

using namespace std;

ll a[110];

int main()
{
	ll n;
	cin>>n;
	for(ll i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	ll s1 = 0, s2 = 0;
	for(ll i = 0; i < n; i++)
	{
		if(i < n/2)
			s1 += a[i];
		else
			s2 += a[i];
		// cout<<a[i]<<endl;
	}
	// cout<<s1<<" "<<s2<<endl;
	cout<<abs(s1-s2)<<endl;
	return 0;	
}