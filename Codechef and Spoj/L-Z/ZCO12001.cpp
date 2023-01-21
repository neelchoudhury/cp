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

stack<ll> stk;

int main()
{
	ll n;
	ll x;
	cin>>n;
	 
	ll ans2=0,cnt2=0,ind2=0;
	ll ans1=0,cnt1=0,ind1=0,sum1=0;
	for(ll i=1;i<=n; i++)
	{
		cin>>x;
		if(x==1)
		{
			stk.push(1);
			cnt1++;
		}
		else
		{
			stk.pop();
			cnt1--;
		}
		cnt2++;
		if(stk.empty()  )
		{
			if(cnt2>ans2)
			{
				ans2=max(cnt2,ans2);
				ind2=i-cnt2+1;
			}
			
			cnt2=0;
			
		}
		if(cnt1>=0)
			sum1++;
		cout<<sum1<<" "<<i<<endl;
		if(sum1/2>ans1)
		{
			ans1=sum1/2;
			ind1=i-sum1/2+1;
			 
		}
		if(cnt1==0)
			sum1=0;

	}
	cout<<ans1<<" "<<ind1<<" "<<ans2<<" "<<ind2<<endl;
	return 0;
}