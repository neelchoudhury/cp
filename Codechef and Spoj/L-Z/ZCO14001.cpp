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
#define N 100010
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

ll a[N];

int main()
{
	ll h,n,x;
	cin>>n>>h;
	for(ll i=1; i<=n; i++)
		cin>>a[i];
	ll ind=1,f=0;

	while(1)
	{
		cin>>x;
		if(x==0)
			break;
		if(x==1)
		{
			if(ind>1)
				ind--;
		}
		if(x==2)
		{
			if(ind<n)
				ind++;
		}
		if(x==3)
		{
			 
			if(a[ind]>0 and f==0)
			{
				a[ind]--;
				f=1; 
			}
		}
		if(x==4)
		{
			if(a[ind]<h and f)
			{
				a[ind]++;
				f=0;
			}
		}
	}
	for(ll i=1; i<=n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;

}