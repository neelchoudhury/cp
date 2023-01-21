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
#define N 200010
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std; 

ll a[110],b[110];

int main()
{
	ll n,q,x,y;
	ios;
	cin>>q;
	while(q--)
	{
		cin>>n;
		mem(a);
		mem(b);
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
				cin>>x;
				a[i]+=x;
				b[j]+=x;
			}
		}
		sort(a,a+n);
		sort(b,b+n);
		ll f=0;
		for(ll i=0; i<n; i++)
		{
			if(a[i]!=b[i])
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			cout<<"Impossible"<<endl;
		}
		else
		{
			cout<<"Possible"<<endl;
		}
	}
}