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

ll a[]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281};

int main()
{
	int t,aa,bb;
	int n=sizeof(a)/sizeof(ll);
	cin>>t;
	while(t--)
	{
		cin>>aa>>bb;
		int ans=0;
		for(int i=0;i<n; i++)
		{
			if(a[i]>=aa and a[i]<=bb)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
