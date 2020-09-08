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
#define V 210
#define N 200010
#define MAX 400010

using namespace std;

ll arr[N];
ll b[N];
ll n,k,a,m;

ll f(ll ind)
{
	// cout<<"ddd "<<ind<<endl;
	mem(b);
	for(ll i=0; i<ind; i++)
		b[arr[i]]=1;
	ll cnt=0,num=0;
	for(ll i=1; i<=n; i++)
	{
		if(b[i]==0)
		{
			cnt++;
		}
		else if(b[i]==1)
		{
			cnt=0;
		}
		if(cnt==a)
		{
			num++;
			cnt=0;
			i++;
		}
	}
	return num>=k;
}

int main()
{
	ios;
	
	cin>>n>>k>>a;
	cin>>m;
	mem(arr);
	for(ll i=0;i<m; i++)
	{
		cin>>arr[i];
	}
	ll lo=1,hi=m,ff=0;
	if(m==1)
	{
		if(!f(arr[0]))
		{
			cout<<m<<endl;
		}
		else
			cout<<-1<<endl;
		return 0;
	}
	while(lo<hi)
	{
		ll mid=lo+(hi-lo)/2;
		if(!f(mid))
		{
			ff=1;
			hi=mid ;
		}
		else
		{
			lo=mid+1;
		}

	}
	// cout<<lo<<" f"<<endl;
	if(!f(lo)  )
		cout<<lo<<endl;
	else
		cout<<-1<<endl;
}