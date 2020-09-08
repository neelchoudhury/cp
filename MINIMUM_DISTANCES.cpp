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

set<ll> s[100010];

int main()
{
	ll n,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		s[x].insert(i);
	}
	ll ans=INT_MAX;
	for(ll i=1; i<=100000; i++)
	{
		if(!s[i].empty())
		{
			set<ll >::iterator ii1=s[i].begin(),ii2=s[i].begin();
			ii2++;
			for(; ii2!=s[i].end(); ii2++,ii1++)
			{
				ans=min(ans, (*ii2-*ii1));
			}
		}
	}
	if(ans==INT_MAX)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
	return 0;
}