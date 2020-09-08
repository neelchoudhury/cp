#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

int main()
{
	ios;
	ll l1,l2,r1,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	ll ans=0;
	ll f=0;
	ll ss=max(l1,l2);
	ll ee=min(r1,r2);

	ans=max((ll)0,ee-ss+1);
	if(k>=ss and k<=ee)
	{
		ans=max((ll)0,ans-1);
	}
	cout<<ans<<endl;
	return 0;
}