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

int main()
{
	ios;
	ll n,x,p;
	ll ans=0,s1=0,s2=0;
	cin>>n>>x;
	for(ll i=1; i<=n; i++)
	{
		cin>>p;
		if(p==-1)
		{
			cout<<s1<<" "<<ans<<endl;
			s1=0;
		}
		else
		{
			s1+=p;
			ans+=p;
			if(p%2)
			{
				swap(s1,s2);
			}
		}
		if(i%x==0)
		{
			swap(s1,s2);
		}
	}
	cout<<ans<<endl;
	return 0;
}