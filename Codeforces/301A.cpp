#include<bits/stdc++.h>
using namespace std;

#define   MOD   1000000007
#define   X     first
#define   Y     second
#define   N     10045
#define   sc    scanf
#define   pf    printf
#define   pb    push_back
#define   pff   push_front
#define   mp    make_pair
#define   ll    long long
 

#define iosbase  ios_base::sync_with_stdio(false)
#define dbg(x)   cout<<#x<<"="<<x<<endl

bool comp(ll a,ll b)
{
	return (abs(a)<abs(b));
}

ll a[N];
int main()
{
	ll ans=0,n,sum=0,sum2=0,k,lef=0,mi=MOD,cnt=0;
	cin>>n;
	k=2*n-1;

	for(int i=0;i<k;i++)
	{
		cin>>a[i];
		if(a[i]<0)
			cnt++;
		sum+=abs(a[i]);
		mi=min(mi,abs(a[i]));
	}
	cnt%=n;
	if(cnt%2==0 or (n-cnt)%2==0)
		cout<<sum<<endl;
	else
		cout<<sum-2*mi<<endl;
	 
	 
	 
	//cout<<ans<<endl;


}