#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

int main()
{
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll ans=0;
	if(n%4==0)
		ans=0;
	else
	{
		if(n%4==3)
			ans=min(a,min(b+c,3*c));
		else if(n%4==2)
			ans=min(2*a,min(b,2*c));
		else if(n%4==1)
		{
			ans=min(3*a,min(a+b,c));
		}
	}
	cout<<ans<<endl;
	return 0;
}