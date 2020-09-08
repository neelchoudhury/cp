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

int main()
{
	string s;
	cin>>s;
	ll ans = 0;
	for(ll i=0; i<s.length()-1; i++)
	{
		if(s[i]!=s[i+1])
			ans ++;
	}
	if(s[s.length()-1] == '1')
		ans ++ ;
	cout<<ans<<endl;
	return 0;
}