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

ll a[100010];

int main()
{
	ios;
	ll n,a,b;
	cin>>n;
	ll x=0,y=0,ans=0;
	cin>>a>>b;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		y=0;
		while(x%a==0)
		{
			x/=a;
			y++;
		}
		while(x%b==0)
		{
			x/=b;
			y++;
		}
		ans^=y;
	}
	if(ans)
		cout<<"Aklank's day"<<endl;
	else
		cout<<"Bad Luck"<<endl;
	return 0;
}