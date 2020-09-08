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

using namespace std;

set<string> st;

int main()
{
	ll n, u;
	// mem(a);
	ll l,r;
	cin>>n>>u;
	string s;
	for(ll i =0; i<n; i++)
		s+='0';
	while(u--)
	{
		cin>>l>>r;
		l--;
		r--;
		for(ll i=l; i<=r; i++)
		{
			if(s[i]=='0')
				s[i] = '1';
			else
				s[i] = '0';
		}
		st.insert(s);
	}
	set<string>::iterator ii;
	ii = st.end();
	ii--;
	cout<<*ii<<endl;
	return 0;
}