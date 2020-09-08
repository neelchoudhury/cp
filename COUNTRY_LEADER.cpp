#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;

map<char, ll> st;
map<ll, string> m;

int main()
{
	ll t,n;
	cin>>t;
	string s="";
	string ans="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	ll len=0;

	for(ll i=1; i<=t; i++)
	{
		cin>>n;
		ans="";
		cin.ignore();
		len=0;
		for(ll j=1; j<=n; j++)
		{
			s="";

			 getline(cin,s);
			 // cout<<s<<" "<<j<<endl;
			for(ll i=0; i<s.length(); i++)
			{
				if(s[i]!=' ')
				{
					st[s[i]]++;
				}
			}
			// cout<<st.size()<<endl;
			if(st.size()>len)
			{
				ans=s;
				// cout<<ans<<endl;
				len=st.size();
			}

			else if(st.size()==len)
			{
				if(s<ans)
				{
					ans=s;
				}

			}
			st.erase(st.begin(),st.end());
		}
		cout<<"Case #"<<i<<": "<<ans<<endl;

	}
	return 0;
}