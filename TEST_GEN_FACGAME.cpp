#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

int main()
{
	int t = 5;
	ios;
	cout<<t<<endl;
	for(int i = 1; i<=t; i++)
	{
		int n = 1000000;
		cout<<n<<endl;
		for(int i = 0; i < n; i++)
		{
			cout<<rand()%1000000 + 1<<" ";
		}
		cout<<endl;
	}
	return 0;
}