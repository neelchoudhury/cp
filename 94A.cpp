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

vector<string> key;

int main()
{
	string pass="", k="";
	cin>>pass;
	for(ll i=0; i<10; i++)
	{
		k="";
		cin>>k;
		key.pb(k);
	}
	string ans="";
	for(ll i=0; i<80; i++)
	{
		k="";
		for(ll j=0; j<10; j++)
		{
			k+=pass[i+j];
		}
		i+=9;
		for(ll i=0; i<10; i++)
		{
			if(k==key[i])
			{
				ans+=(i+'0');
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}