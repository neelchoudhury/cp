#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

int main()
{
	string s1="", s2="";
	cin>>s1>>s2;
	if(s1 == s2)
		cout<<-1<<endl;
	else
		cout<<max(s1.length(), s2.length())<<endl;
	return 0;	
}