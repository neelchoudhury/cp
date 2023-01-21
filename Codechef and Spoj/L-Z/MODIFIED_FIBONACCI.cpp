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

int main()
{
	ll t1,t2,ans=0,n;
	cin>>t1>>t2;
	cin>>n;
	for(ll i=3; i<=n; i++)
	{
		ans=t1+t2*t2;
		t1=t2;
		t2=ans;
		cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}