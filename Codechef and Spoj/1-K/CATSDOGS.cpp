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
	ios;
	ll t,c,d,l;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		if(l%4!=0)
		{
			cout<<"no"<<endl;
		}
		else
		{
			ll k1=(d+c)*4;
			ll k2=(d*4+max(0LL,4*(c-2*d)));
			if(l<=k1 and l>=k2)
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}