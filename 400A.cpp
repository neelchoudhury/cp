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

vector<ll> v;

bool f(string s, ll n)
{
	 
		for(ll j=0; j<12/n;j++)
		{
			ll f=0;
			 // cout<<j<<" vv "<<12/n<<" "<<n<<endl;
			for(ll i=0; i<12; i+=12/n)
			{
				 // cout<<i<<" "<<j<<" "<<s[i+j]<<endl;
				if((i+j)<12 and s[i+j]!='X')
				{
					f=1;
					break;
				}
				// cout<<"sss "<<i+j<<" "<<i+12/n<<endl;
			}
			 // cout<<f<<" bing"<<endl;
			if(f==0)
				return true;
			// cout<<"sling"<<endl;
		}
		 
			return false;
	 
}

int main()
{
	ll t;
	string s="";
	cin>>t;
	while(t--)
	{
		s="";
		cin>>s;
		v.clear();
		ll ans=0;
		for(ll i=1; i<=12; i++)
		{
			if(12%i==0)
			{
				// cout<<"  choo "<<i<<endl;
				if(f(s,i))
				{
					ans+=1;
					v.pb(i);
					v.pb(12/i);
				}
			}
		}
		cout<<ans;
		for(ll i=0; i<v.size();i++)
		{
			cout<<" "<<v[i]<<"x"<<v[i+1];
			i++;
		}
		cout<<endl;
	}
}