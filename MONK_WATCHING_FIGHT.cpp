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

int main()
{
	ll n;
	string s="";
	cin>>n;
	cin>>s;
	ll ans=0;
	ll cnt=0;
	int i=0;
	if(s[0]=='<')
	{
		while(s[i]=='<')
		{
			cnt++;
			i++;
		}
	}
	i=s.length()-1;
	ans=cnt;	cnt=0;
	if(s[s.length()-1]=='>')
	{
		while(s[i]=='>')
		{
			cnt++;
			i--;
		}
	}
	ans+=cnt;
	cout<<ans<<endl;
	return 0;
}