#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

ll pr[32000];
vector<ll> pv;

ll prime()
{
	ll t,n;
	//cout<<sizeof(a)/sizeof(ll)<<endl;
	//pr(a[1003]);
	for(int i=0;i<=32000; i++)
		pr[i]=1;
 
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=32000; i++)
	{
		if(pr[i]!=0)
		{
		for(int j=i*i;j<=32000; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	}
	int cnt=0;
 	for(int i=1; i<=32000; i++)
 	{
 		if(pr[i])
 		{
 			//cout<<i<<endl;
 			pv.push_back(i);
 			//cnt++;
 		}
 	}
}
 

int main()
{
	ios;
	ll t,n;
	cin>>t;
	prime();
	while(t--)
	{
		ll ans=0;
		cin>>n;
		 
		 
		{
			
			for(ll i=0; i<pv.size(); i++)
			{
				if(i%2==0  )
				{
					if(n%2==0)
						continue;
				}

				if(n%pv[i]==0)
				{
					ans++;
				}
			}
			if(n%2!=0)
				ans++;
			if(ans!=0)
				cout<<ans<<endl;
			else
				cout<<-1<<endl;
		}
		
	}
	return 0;
}