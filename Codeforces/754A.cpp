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

vector<pair<ll ,ll> > v;

ll a[110];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	ll l=1,r=1;
	ll sum=0;
	for(ll i=0; i<n; i++)
	{
		if(sum!=0 and sum+a[i]==0)
		{
			r=i;
			v.pb({l,r});
			l=i+1;
			sum=a[i];
		}
		else
		{
			sum+=a[i];
		}
	}
	if(sum!=0)
		v.pb({l,n});
	if(v.size()==0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		cout<<v.size()<<endl;
		for(ll i=0;i<v.size(); i++)
			cout<<v[i].ff<<" "<<v[i].ss<<endl;
	}
	return 0;
}