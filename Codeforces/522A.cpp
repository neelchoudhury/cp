#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

map<string,ll> m;
map<string,ll>::iterator ii;

int main()
{
	ll n;
	string s1="",s2="",s3="";
	m["polycarp"]=1;
	cin>>n;
	while(n--)
	{
		s1="",s2="",s3="";
		string s4="",s5="";
		cin>>s1>>s2>>s3;
		for(ll i=0; i<s1.length(); i++)
		{
			s4+=tolower(s1[i]);
		}
		for(ll i=0; i<s3.length(); i++)
		{
			s5+=tolower(s3[i]);
		}
		// cout<<s4<<endl;
		// cout<<m[s4]<<endl;
		m[s4]=m[s5]+1;
	}
	ii=m.begin();
	ll ans=0;
	while(ii!=m.end())
	{
		ans=max(ans, ii->ss);
		ii++;
	}
	cout<<ans<<endl;
	return 0;
}