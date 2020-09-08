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
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;

map<string,int> s1,s2,c;
map<string,int>::iterator ii;

int main()
{
	ll n,m;
	cin>>n>>m;
	string s="";
	while(n--)
	{
		s="";
		cin>>s;
		s1.insert({s,1});
		// cout<<s1.size()<<endl;
	}
	while(m--)
	{
		s="";
		cin>>s;
		// cout<<s1.size()<<endl;
		ii=s1.find(s);
		if( ii!=s1.end())
		{
			c.insert({s,1});
		}
		// cout<<s1.size()<<endl;
		s2.insert({s,1});
	}
	ll x=c.size(),y=s1.size(),z=s2.size();
	 // cout<<y<<" "<<z<<endl;
	if(x%2)
		y+=1;
	// cout<<y<<" "<<z<<endl;
	if(y>z)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;

}