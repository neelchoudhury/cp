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

ll a[100010],b[100010];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(ll i=1; i<n; i++)
	{
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	ll m,c,l,r;
	cin>>m;
	while(m--)
	{
		cin>>c>>l>>r;
		l--,r--;
		if(c==1)
		{
			if(l>0)
				cout<<a[r]-a[l-1]<<endl;
			else
				cout<<a[r]<<endl;
		}
		else
		{
			if(l>0)
				cout<<b[r]-b[l-1]<<endl;
			else
				cout<<b[r]<<endl;
		}

	}
	return 0;
}