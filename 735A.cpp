#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

int main()
{
	ll n,k;
	string s="";
	cin>>n>>k;
	cin>>s;
	ll i1=0,i2=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='G')
			i1=i;
		if(s[i]=='T')
			i2=i;
	}
	ll mi=min(i1,i2);
	ll ma=max(i1,i2);

	ll f=0;
	// cout<<mi<<" "<<ma<<" "<<k<<endl;
	for(ll i=mi+k;i<=ma; i+=k)
	{
		 
		// cout<<i<<endl;
		if(s[i]=='G' or s[i]=='T')
		{
			f=1;
			break;
		}
		if(s[i]!='.')
		{
			f=0;
			 
			break;
		}
		
		 
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}