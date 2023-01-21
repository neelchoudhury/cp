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

vector<ll>v;

bool prime(ll n)
{
	 for(ll i=2; i<=sqrt(n); i++)
	 {
	 	if(n%i==0)
	 		return false;
	 }
	 return true;
}

int main()
{
	 
	v.pb(2);
	ll k,x,f;
	for(ll i=3; i<=1000000000000; i+=2)
	{
		if(prime(i))
		{
			k=i;
			f=0;
			while(k>0)
			{
				
				x=k%10;
				if(!(x==2 or x==3 or x==5 or x==7))
				{
					f=1;
					break;
				}
				k/=10;
			}
			if(!f)
			{
				cout<<i<<endl;
				v.pb(i);
			}
		}
	}
}