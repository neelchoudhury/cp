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

ll a[200010];

int main()
{
	string s="";
	mem(a);
	cin>>s;
	for(ll i=0; i<s.length()-1; i++)
	{
		if(s[i]==s[i+1])
			a[i]=1+a[i-1];
		else
			a[i]=a[i-1];
	}
	ll q,l,r;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		l--,r--;
		if(l>0)
			cout<<a[r-1]-a[l-1]<<endl;
		else
			cout<<a[r-1]<<endl;
	}
	return 0;
}