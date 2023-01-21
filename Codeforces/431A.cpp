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

int main()
{
	ll a1,a2,a3,a4;
	ll cnt[10];
	ll cal[10];
	mem(cnt),mem(cal);
	for(ll i=1; i<=4; i++)
		cin>>cal[i];
	string s="";
	cin>>s;
	for(ll i=0; i<s.length(); i++)
	{
		cnt[s[i]-'0']++;
	}
	ll sum=0;
	for(ll i=1; i<=4; i++)
		sum+=cal[i]*cnt[i];
	cout<<sum<<endl;
	return 0;
}