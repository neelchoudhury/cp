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
	ll n,n1,n2;
	cin>>n>>n1>>n2;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	ld s1=0,s2=0,s3=0,s4=0;
	sort(a,a+n);
	reverse(a,a+n);
	for(ll i=0; i<n1; i++)
	{
		s1+=a[i];
	}
	 
	s1/=n1;
	for(ll i=n1; i<n1+n2; i++)
	{
		s2+=a[i];
	}
	 
	s2/=n2;
	ld m1=s1+s2;
	for(ll i=0; i<n2; i++)
	{
		s3+=a[i];
	}
	 
	s3/=n2;
	for(ll i=n2; i<n1+n2; i++)
	{
		s4+=a[i];
	}
	 
	s4/=n1;
	ld m2=s3+s4;
	cout<<setprecision(12)<<max(m1,m2)<<endl;
	return 0;
}