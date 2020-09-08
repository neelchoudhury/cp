#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 3010
#define MAX 400010

using namespace std;

ll d[25];

int main()
{
	ll n;
	mem(d);
	cin>>n;
	ll ans=0,x;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		d[x+10]++;
	}
	for(ll i=0; i<=10; i++)
	{
		if(i==0)
		{
			ans+=d[10]*(d[10]-1)/2;
		}
		else
			ans+=(d[i+10]*d[-i+10]);
	}
	cout<<ans<<endl;
	return 0;
}