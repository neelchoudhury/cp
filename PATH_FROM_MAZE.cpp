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
	ios;
	ll n,m;
	string s="";
	cin>>n;
	while(n--)
	{
		cin>>m;
		s="";
		cin>>s;
		ll x=0,y=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]=='U')
			{
				y++;
			}
			else if(s[i]=='D')
			{
				y--;
			}
			else if(s[i]=='R')
			{
				x++;
			}
			else
			{
				x--;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}