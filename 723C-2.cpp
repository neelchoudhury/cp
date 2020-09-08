#include<bits/stdc++.h>
using namespace std;
 
#define  MOD   1000000000000000
#define  EPS   1e-6
#define  X     first
#define  Y     second
#define  N     100035
#define  sc    scanf
#define  pf    printf
#define  pb    push_back
#define  ll    long long
#define  LN    20
 
 
#define iosbase  ios_base::sync_with_stdio(false)
#define dbg(x)   cout<<#x<<"="<<x<<endl
typedef pair<int,int> ii;


 

ll a[N];
map<ll,ll>p;
map<ll,ll>::iterator it;

int main()
{
	ll n,m,sum,i,j,pos,k,ans=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		p[k]++;
		a[i]=k;

	}
	sum=n;
	 
	pos=sum/m;
	 
	 
 	 
	j=1;
	for(i=1;i<=m;i++)
	{
		while(j<=n)
		{
			 
			if(p[i]>=pos)
				break;
			if(p[a[j]]>pos || a[j]>m)
			{
				p[a[j]]--;
				a[j]=i;
				p[i]++;
				ans++;
			}
			j++;
		}
	}
	cout<<pos<<" "<<ans<<endl;
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	 
}