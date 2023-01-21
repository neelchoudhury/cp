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

bool pr[3210];

using namespace std;

void sieve()
{
	for(int i=0;i<=3200; i++)
		pr[i]=1;
 
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=3200; i++)
	{
		if(pr[i])
		{
		for(int j=2*i;j<=3200; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	}
}



int main()
{
	ll n;
	cin>>n;
	sieve();
	// cout<<pr[5]<<endl;
	ll f=0;
	// for(ll i=0; i<10; i++)
	// 	cout<<pr[i]<<endl;
	for(ll i=1; i<=1000; i++)
	{
		if(!pr[n*i+1])
			{cout<<i<<endl;
				break;}
	}
	return 0;
}