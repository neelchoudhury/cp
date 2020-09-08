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

ll a[1000010];
stack<ll> stk;

int main()
{
	string s="";
	cin>>s;
	ll cnt=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='(')
		{
			stk.push(1);
		}
		if(s[i]==')' and !stk.empty())
		{
			cnt+=2;
			stk.pop();
		}
		a[i]=cnt;
	}
	ll m,x,y,ans;
	cin>>m;
	while(m--)
	{
		cin>>x>>y;
		x-=1,y-=1;
		if(x==0)
		{
			ans=a[y];
		}
		else
			ans=a[y]-a[x];
		cout<<ans<<endl;
	}
	return 0;
}