#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

int main()
{
	ll n;
	string s1="",s2="";
	cin>>n;
	cin>>s1>>s2; 
	if(s2=="week")
	{
		if(n==6 or n==5)
			cout<<53<<endl;
		else
			cout<<52<<endl;
	}
	else
	{
		if(n==31)
			cout<<7<<endl;
		else if(n==30)
			cout<<11<<endl;
		else
			cout<<12<<endl;
	}
	return 0;
}