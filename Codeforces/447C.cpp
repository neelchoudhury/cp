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
#define N 100010
#define MAX 400010

using namespace std;

ll a[N],inc[N];
ll dic[N];

int main()
{
	ios;
	ll n;
	cin>>n;
	mem(a);
	for(ll i=0; i<n; i++)
		cin>>a[i];
	mem(inc);mem(dic);
	ll cnt=1;
	for(ll i=1; i<n; i++)
	{
		inc[i]=cnt;
		if(a[i]>a[i-1])
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
	}
	
	cnt=1;
	for(ll i=n-2; i>=0; i--)
	{
		dic[i]=cnt;
		if(a[i]<a[i+1])
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
	}
	// for(ll i=0; i<n; i++)
	// 	cout<<inc[i]<<" ";
	// cout<<endl;
	// for(ll i=0; i<n; i++)
	// 	cout<<dic[i]<<" ";
	// cout<<endl;
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		if(i==0)
		{
			ans=max(ans,1+dic[i]);
		}
		else if(i==n-1)
		{
			ans=max(ans,1+inc[i]);
		}
		else
		{
			if(a[i-1]+1<a[i+1])
				ans=max(ans,inc[i]+dic[i]+1);
			else 
			{
				ans=max(ans,max(inc[i]+1,dic[i]+1));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}