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
#define N 600010
#define MAX 400010

using namespace std;

set<ll> st;
ll p=29;
string q="";
ll pr[N];

ll hashf(string s)
{
	ll ans=0;
	ll t=1;
	for(ll i=0; i<s.length(); i++)
	{
		ans=(ans%MOD+((s[i]-'a'+1)*t)%MOD)%MOD;
		t=(t%MOD*p%MOD)%MOD;
	}
	return ans;
} 

void f()
{
	ll ans=1;
	for(ll i=0; i<N; i++)
	{
		pr[i]=ans;
		ans=(ans*p);
		if(ans>MOD)
		{
			ans%=MOD;
		}
	}
}

int main()
{
	ios;
	ll n,m;
	mem(pr);
	f();
	cin>>n>>m;
	string s="";
	while(n--)
	{
		s="";
		cin>>s;
		ll h=hashf(s);
		// cout<<h<<endl;
		st.insert(h);
	}
	while(m--)
	{
		s="";
		cin>>s;
		ll h=hashf(s);
		 
		{
			ll ff=0;
			for(ll i=0; i<s.length(); i++)
			{
		 		for(ll j=1; j<=3; j++)
		 		{ 
		 			if((s[i]-'a'+1)==j)
		 			{
		 				continue;
		 			}
		 			ll k1=0 ;
		 			k1=(h-((s[i]-'a'+1-j)*pr[i])%MOD+MOD)%MOD;
		 			// cout<<m<<" .. "<<j<<" kk "<<i<<" jj "<<k1<<" "<< endl;
		 			if(st.find(k1)!=st.end())
		 			{

		 				cout<<"YES"<<endl;
		 				ff=1;
		 				break;
		 			}
		 		}
		 		if(ff==1)
		 			 break;
			}
			if(!ff)
				cout<<"NO"<<endl;
		}
	}
	return 0;
}