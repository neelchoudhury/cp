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

int main()
{
	ll t,n;
	string ans="",s="";
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans="",s="";
		for(ll i=0; i<n;i++)
		{
			cin>>s;
			ans+=s;
		}
		cout<<ans<<endl;
	}
	return 0;
}