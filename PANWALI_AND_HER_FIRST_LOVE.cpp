#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

ll a[10010];

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

int main()
{
	string s="";
	ll aa,b;
	cin>>s;
	cin>>aa>>b;
	ll cnt=0;
	if(aa==b or aa!=0)
		cnt=2;
	else if(aa!=b and aa!=0)
		cnt=3;
	else if(aa==b and aa==0)
		cnt=1;
	else if(aa==0 or b==0)
		cnt=2;
	ll num=9;
	ll pr=1;
	ll ans=0;
	mem(a);
	a[0]=0;
	a[1]=num-cnt+1;
	pr=num-cnt;
	//ans+= max((ll)0,s[s.length()-1]-'0'-cnt+1);
	if(s.length()==1)
	{
		ans=s[0]-'0'-cnt;
		cout<<ans<<endl;
		return 0;
	}
	if(s=="10")
	{
		cout<<10-cnt<<endl;
		return 0;
	}
	for(ll i=2; i<=s.length()-1; i++)
	{

		 pr=pr*(num-cnt+1)%MOD;
		 a[i]=(pr+a[i-1])%MOD;
		 ans =(ans+pr)%MOD;
	}
	 
	for(ll i=0; i<s.length()-1; i++)
	{
		if(s[i]-'0'>0)
			ans=(ans+ power((s[i]-'0'-1),a[(ll)s.length()-i-1],MOD))%MOD;
	}
	cout<<ans<<endl;
	return 0;
}