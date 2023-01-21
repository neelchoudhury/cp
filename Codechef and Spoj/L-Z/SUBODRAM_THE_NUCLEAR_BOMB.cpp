#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

ll a[100010] ;

int main()
{
	ll n,x,ans=1;
	ios;
	cin>>n;
	mem(a);
	for(ll i=0;i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	reverse(a,a+n);
	if(n==1 )
	{
		ans=a[0];
	}
	else if(n==2)
	{
		ans=a[0];
		if(a[1]!=0)
			ans*=a[1];
	}
	else
	{
		ans=a[0];
		if(a[1]!=0)
		{
			ans*=a[1];
			if(a[2]!=0)
			{
				ans*=a[2];
			}
		}
		 
	}
	cout<<ans<<endl;
	return 0;
}