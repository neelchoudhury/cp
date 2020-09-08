#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 210
#define N 200010
#define MAX 400010

using namespace std;

map<ll,ll> m1,m2;
ll a[N];

int main()
{
	ll n,k ;
	cin>>n>>k;
	mem(a);
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		m2[a[i]]++;
	}
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		m2[a[i]]--;
		 if(i>=1)
		 {
		 	if((a[i]%k==0 and m1[a[i]/k]) and (m2[a[i]*k]))
		 	{
		 		ans+=m1[a[i]/k]*m2[a[i]*k];
		 	}

		 }
		 m1[a[i]]++;
		 
	}
	cout<<ans<<endl;
	return 0;
}