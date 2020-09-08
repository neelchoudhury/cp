#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000000000000000 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

int main()
{
	ll r,l;
	string s="";
	cin>>r;
	while(r--)
	{
		cin>>l;
		s="";
		cin>>s;
		ll f=0, q =0;
		for(ll i = 0; i<s.length(); i++)
		{
			if(s[i]=='H' and q == 0)
			{
				q = 1;
			}
			else if(s[i] == 'H' and q == 1)
			{
				f=1;
				break;
			}
			if(s[i] == 'T' and q == 1)
			{
				q = 0;
			}
			else if(s[i] == 'T' and q == 0)
			{
				f = 1;
				break;
			}
		}
		if(f==0 and q == 0)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;
	}
	return 0;
}