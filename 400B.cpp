#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 100010
#define MAX 400010

using namespace std;

set<ll> st;

int main()
{
	ll n,m;
	cin>>n>>m;
	string s="";
	ll f=0;
	ll ans=0;
	while(n--)
	{
		s="";
		cin>>s;
		ll g=0,ss=0;
		ll cnt=0;

		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]=='*' and g==1 and ss==0)
			{
				cnt++;
			}
			if(s[i]=='G')
			{
				g=1;
			}
			if(s[i]=='S')
			{
				if(g==0)
				{
					f=1;
					break;
				}
				 ss=1;
			}
		}
		if(f)
			break;
		// cout<<"hh "<<cnt<<endl;
		st.insert(cnt);
	}
	if(f)
		cout<<-1<<endl;
	else
		cout<<st.size()<<endl;
	return 0;
}