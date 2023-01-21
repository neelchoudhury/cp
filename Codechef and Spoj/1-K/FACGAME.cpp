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

ll pr[1000010];
ll num_fac[1000010];

// ll a[1000010];

void mod_sieve()
{
	mem(pr);
	pr[1] = 1;
	for(int i = 2; i<=1000000; i++)
	{
		if(pr[i] == 0)
		{
			pr[i] = i;
			for(int j = 2*i; j<=1000000; j+=i)
			{
				if(pr[j] == 0)
					pr[j] = i;
			}
		}
	}

	mem(num_fac);

	int temp = 0, cnt = 0;
	num_fac[1] = 1;

	for(int i = 2; i<=1000000; i++)
	{
		temp = i;
		cnt = 0;
		while(temp != 1)
		{
			cnt++;
			temp = temp/pr[temp];
		}

		num_fac[i] = cnt;
	}

	
}

int main()
{
	ll t, n, sum, x;
	ios;
	
	mod_sieve();
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum = 0;
		for(int i = 0; i<n; i++)
		{
			cin>>x;
			sum += (num_fac[x] - 1);
		}

		if(sum%2 == 1)
		{
			cout<<"Apu"<<endl;
		} 
		else
		{
			cout<<"Friend"<<endl;
		}

	}
	return 0;

}