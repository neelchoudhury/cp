#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

ll a[1010],b[1010];

ll f(ll n)
{
	ll ans=0;
	for(ll i=1;i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			ans++;
			if(i*i!=n)
				ans++;
		}
	}
	return ans;
}

int main()
{
	ll n,m;
	cin>>n;
	for(ll i=0;i<n; i++)
		cin>>a[i];
	mem(b);
	for(ll i=0;i<n;i++)
	{
		b[i]=f(a[i]);
	}
	 
	sort(b,b+n);
	cin>>m;
	ll sum=0;
	ll i=0;
	while(sum<m and i<n)
	{
		sum+=b[i];
		i++;
	}
	if(sum<=m)
		cout<<i<<endl;
	else
	cout<<i-1<<endl;
	return 0;
}