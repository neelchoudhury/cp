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

ll a[10010];

int main()
{
	ll t,n;
	sc(t);
	while(t--)
	{
		sc(n);
		for(int i=0; i<n; i++)
			sc(a[i]);
		int flag=0;
		int s=0;
		for(int i=0; i<n-1; i++)
		{
			ll mini=min(a[i],a[i+1]);
			a[i]-=mini;
			a[i+1]-=mini;
			if(a[i]!=0)
			{
				flag=1;
				break;
			}
			else if(a[i]==0 and a[i+1]==0)
			{
				i+=1;
			}
		}
		if(a[n-1]!=0)
		{
			flag=1;
		}
		if(flag==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
