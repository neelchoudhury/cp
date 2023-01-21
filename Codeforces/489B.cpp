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
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

ll a[110],b[110];

int main()
{
	ll n,m;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	for(ll i=0; i<m; i++)
		cin>>b[i];
	sort(a , a+n );
	sort(b , b+m);
	ll ans=0;
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        if (abs(a[i] - b[j]) <= 1)
	        {
	            b[j] = 1000;
	            ans++;
	            break;
	        }
	    }
	}
	cout<<ans<<endl;
	return 0;
}