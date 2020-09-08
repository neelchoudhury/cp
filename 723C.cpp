#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define f first
#define s second

using namespace std;

ll a[2010];
map<ll,ll> m;

 
int main()
{
	ll mm,n,x;
	cin>>n>>mm;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		m[x]++;
		a[i]=x;
	}
	ll ans1=n/mm,ans2=0;
	ll j=1;
	for(int i=1; i<=mm; i++)
	{
		while(j<=n)
		{
			if(m[i]>=ans1)
			{
				break;
			}
			else
			{
				if(m[ a[j] ]>ans1 or a[j]>mm)
				{
					m[a[j]]--;
					m[i]++;
					ans2++;
					a[j]=i;
				}
			}
			j++;
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	for(ll i=1; i<=n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}	