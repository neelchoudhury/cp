#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

int main()
{
	int t,e,n;
	cin>>t;
	while(t--)
	{
		cin>>e>>n;
		int ans=0;
	 	int mini=min(e,n);
	 	int maxi=max(e,n);
	 	if(mini>maxi/2)
	 		ans+=(mini+maxi)/3;
	 	else
	 		ans=mini;
		cout<<ans<<endl;
	}
	return 0;
}
