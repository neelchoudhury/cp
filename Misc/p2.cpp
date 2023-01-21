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
#define N 200010
#define MAX 310
#define maxs 125
#define INF INT_MAX 

using namespace std;  

ll dp[5]; 

ll to(char a){
	return (a-'0');
}

int main()
{
	string s="";
	 
	ll ans=0;
	cin>>s;

	ll sum=0;
	dp[0]++;
	for(int i=0;i<s.length();i++){

		sum+=to(s[i]);
		sum%=3;
		if(to(s[i])%2==0)
			ans+=(dp[sum]);
		if(s[i]!='0')
			dp[sum]+=1;

	}
	cout<<ans<<endl;
	return 0;
}