#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

int main()
{
	string x,y;
	cin>>x>>y;
	string z="";
	ll f = 0;
	for(ll i = 0; i < x.length(); i++)
	{
		if(y[i] > x[i])
		{
			f = 1;
			break;
		}
		else
		{
			z += y[i];
		}
	}
	if(f)
		cout<<-1<<endl;
	else
		cout<<z<<endl;
	return 0;
}