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

ll a[100010];

int main()
{
	ios;
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(ll i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n);
		ll f=0;
		for(ll i=1;i<n; i++)
		{
			if(a[i]-a[i-1]>1)
			{
				f=1;
				break;
			}
		}
		if(f)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}