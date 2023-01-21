#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

int main()
{
	ll h1,h2,a,b;
	cin>>h1>>h2>>a>>b;
	ll ans=0;
	//cout<<h1+8*a<<" "<<h2<<endl;
	if(h1+8*a>=h2)
		ans=0 ;
	else if(a<=b)
		ans=-1;
	else
		ans=ceil((double)(h2-h1-8*a)/(12*(a-b)));
	pr(ans);
	return 0;
}
