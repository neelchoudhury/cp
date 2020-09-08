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

ll f(char c)
{
	c=tolower(c);
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
		return true;
	else
		return false;
}

int main()
{
	ios;
	ll n,k;
	cin>>n;
	string s1="", s2="";
	while(n--)
	{
		cin>>k;
		cin>>s1>>s2;
		ll f=1;
		for(ll i=0; i<s1.length(); i++)
		{
			if(!(f(s1[i])^f(s2[i])))
			{
				f=0;
				break;
			}
		}
		if(f==0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}