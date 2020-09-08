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

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) 
			x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	string s;
	ll k,b,m;
	cin>>s;
	cin>>k>>b>>m;
	ll cnt = 0, ans = 0;
	for(ll i = 0; i < k; i++)
		cnt = (cnt*b + s[i] - '0')%m;
	ans = (ans+cnt);

	for(ll i = k; i < s.length(); i++)
	{
		
		cnt = (((cnt - (power(b, k-1, m)*(s[i-k]-'0'))%m + m)*b)%m + (s[i] - '0')%m )%m;
		ans = (ans+cnt);
		// cout<<(cnt - power(b, k-1, m)*(s[i-k]-'0') + m)*b<<" "<<(k-1)<<" "<<power(b, k-1, m)<<"cnt "<<cnt<<endl;
	}
	cout<<ans<<endl;
	return 0;
}