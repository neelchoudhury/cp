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

ll a[15];

int main()
{
	ios;
	ll m;
	cin>>m;
	mem(a);
	for(ll i=1; i<=12; i++)
		cin>>a[i];
	ll ans=INT_MIN;
	ll x;
	ll aa=0,bb=0;
	for(ll i=1;i<=11; i++)
	{
		if(m>=a[i])

		{
			for(ll j=i+1; j<=12; j++)
			{
				x=(m/a[i])*(-a[i]+a[j]);
				if(x>=ans)
				{
					if(x==ans)
					{
						if(a[i]<a[aa])
						{
							aa=i;
							bb=j;
						}
						ans=x;
					}
					else
					{
						aa=i;
						bb=j;
						ans=x;
					}
				}
			}
		}
	}
	if(ans<0)
		cout<<"IMPOSSIBLE"<<endl;
	else
		cout<<aa<<" "<<bb<<" "<<ans<<endl;
	return 0;
}