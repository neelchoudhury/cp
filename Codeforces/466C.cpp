#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[500010];

int main()
{
	ios;
	ll n;
	cin>>n;
	mem(a);
	ll sum=0;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%3!=0)
	{
		cout<<0<<endl;
		return 0;
	}
	ll cnt=0,chk=0;
	ll ans=0;
	for(ll i=0; i<n-1; i++)
	{
		cnt+=a[i];
		if(cnt==(sum/3)*2)
		{
			ans+=chk;
		}
		if(cnt==sum/3)
		{
			chk++;
		}
		
	}
	cout<<ans<<endl;
	return 0;

}