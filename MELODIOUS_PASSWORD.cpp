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
#define INF INT_MAX 

using namespace std; 

vector<string> v;
string s="";

char con[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
char vow[] = {'a','e','i','o','u'};

void f(ll n, bool chk,string a)
{
	if(n==0)
	{
		v.pb(a);
		return ;
	}
	if(chk==0)
	{
		for(ll i=0; i<20; i++)
		{
			f(n-1,1,a+con[i]);
		}
	}
	if(chk==1)
	{
		for(ll i=0; i<5; i++)
		{
			f(n-1,0,a+vow[i]);
		}
	}
}

int main()
{
	ll n;
	cin>>n;
	f(n,0,"");
	f(n,1,"");
	for(ll i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}