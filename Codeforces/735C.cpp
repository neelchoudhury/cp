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

ld a[100010];

int main()
{
	ll n;
	cin>>n;
	if(n==2)
	{
		cout<<1<<endl;
		return 0;
	}
	else if(n==3)
	{
		cout<<2<<endl;
		return 0;
	}
	ll q=2,w=3;
	ll ans=2,e=0;
	while(1)
	{
		ans+=1;
		e=q+w;
		if(e>n)
			break;
		q=w;
		w=e;
	}
	cout<<ans-1<<endl;
	return 0;
}